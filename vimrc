" =============================================================================
" Author:         scps950707
" Email:          scps950707@gmail.com
" Created:        2015-04-18 01:55
" Last Modified:  2016-11-25 16:42
" Filename:       vimrc
" =============================================================================
set cursorline "顯示當前游標列
" set cursorcolumn "顯示當前游標行
set nocompatible "VIM 不使用和VI相容的模式
set number
set relativenumber
set laststatus=2 " 總是顯示狀態欄
filetype on " 開啟文件類型偵測
filetype plugin on " 偵測不同文件類型開啟相對應套件
filetype indent on " 偵測不同語言採取相對應縮排
set t_Co=256
set mouse=a "滑鼠所有模式下啟動
set showcmd "在狀態列顯示目前所執行的指令
" set autochdir "自動轉換目錄到前檔案所在目錄
set fileencodings=utf-8 "vim預設編碼
set encoding=utf-8
set fileencodings=utf-8
" set hlsearch "高亮搜尋結果
set ignorecase "搜尋時忽略大小寫
set ruler "顯示下方狀態列
set autoindent "自動縮排
set cindent "採用C語言的縮排方式
set expandtab "用space代替tab
set smartindent "每一行都和前一行有相同的縮排量
set tabstop=4 "tab字元數
set softtabstop=4 " 讓 vim 把連續數量的空格視為一個制表符
set shiftwidth=4 "縮排寬度
set scrolloff=3 "滾動時游標下方保留幾行
set wildmenu
set wildmode=longest:full,full
set wildignore+=*.o,*.a,*.so,*.obj,*.exe,*.lib,*.ncb,*.opt,*.plg,.svn,.git
set wildignore+=*.png,*.jpg,*.gif,*.svg,*.xpm,*.swp
set nowrap "程式碼折行
" set nofoldenable "程式碼預設不折疊
set foldmethod=marker "偵測程式碼格式來折疊
set foldcolumn=1 "VIM最左邊預留一塊foldcolumn的空間顯示折疊情形
set previewheight=1
set nobackup
set noswapfile
set fileformats=unix,dos,mac
set viminfo='20,\"50    " read/write a .viminfo file, don't store more than 50 lines of registers
set history=20
set wildchar=<TAB> " such as <TAB> in shell
set autoread
" set hidden
set completeopt-=preview
set pastetoggle=<F12>
set backspace=indent,eol,start


" replace settings
function! Replace(confirm,replace)
    if a:confirm
        let flag='gc'
    else
        let flag='g'
    endif
    let search = '\<' . escape(expand('<cword>'), '/\.*$^~[') . '\>'
    let replace = escape(a:replace, '/\&~')
    execute '%s/'.search.'/'.replace.'/'.flag
endfunction
nmap <F7> :<C-u>call Replace(0,input('Replace '.expand('<cword>').' with: '))<CR>
" map <F8> :<C-u>call Replace(1,input('Replace '.expand('<cword>').' with: '))<CR>
" vmap <F9> "hy:%s/<C-r>h//g<left><left>


" copy and paste
vnoremap <C-c> "+y
" paste from vim to system's clipboard
vnoremap <C-x> "+x
" cut from vim to system's clipboard
" nmap <C-d> "+P
" paste from system's clipboard to vim

if empty(glob('~/.vim/autoload/plug.vim'))
    silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs
                \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
    autocmd VimEnter * PlugInstall | source $MYVIMRC
endif

let g:plug_window = 'enew'
" Plugins Management
call plug#begin('~/.vim/plugged')
source ${HOME}/.vim/plugins.vim
source ${HOME}/.vim/colorscheme.vim
call plug#end()

" set colorscheme after plugins are loaded
silent! colorscheme vimbrains

" Make these commonly mistyped commands still work
cnoreabbrev W! w!
cnoreabbrev Q! q!
cnoreabbrev Qall! qall!
cnoreabbrev Wq wq
cnoreabbrev Wa wa
cnoreabbrev wQ wq
cnoreabbrev WQ wq
cnoreabbrev W w
cnoreabbrev Q q
cnoreabbrev Qall qall


" command mapping
cnoremap help vert help

" split resize mapping
nnoremap <C-left> :vertical resize -5<cr>
nnoremap <C-down> :resize +5<cr>
nnoremap <C-up> :resize -5<cr>
nnoremap <C-right> :vertical resize +5<cr>

" auto indent
function! MyIndent()
    let curLineNum=line('.')
    if &ft == 'c' || &ft == 'cpp'
        exec 'normal gggqG'
    else
        exec 'normal gg=G'
    endif
    exec 'normal '. curLineNum . 'G'
endfunction
nmap <F4> :call MyIndent()<CR>
autocmd FileType c,cpp set formatprg=astyle

" in help page map q to close buffer
autocmd FileType help nnoremap <buffer> <silent> q :q<CR>

" check file modified externally
autocmd FocusGained,BufEnter * :silent! checktime

" gitcommit settings
autocmd FileType gitcommit setlocal nofoldenable
autocmd FileType gitcommit setlocal spell

" mapping for toggle buffer
nmap <S-z> :bprevious<CR>
nmap <S-x> :bnext<CR>
