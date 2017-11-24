" =============================================================================
" Author:         scps950707
" Email:          scps950707@gmail.com
" Created:        2015-04-18 01:55
" Last Modified:  2017-11-24 15:43
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
set hlsearch "高亮搜尋結果
set ignorecase "搜尋時忽略大小寫
set ruler "顯示下方狀態列
set autoindent "自動縮排
set cindent "採用C語言的縮排方式
set expandtab "用space代替tab
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
set noshowmode
set modeline
set visualbell
set tags=./tags;/  " This will look in the current directory for tags, and work up the tree towards root until one is found
let g:mapleader = ','


" replace settings
function! Replace(confirm,replace) abort
    if a:confirm
        let l:flag='gc'
    else
        let l:flag='g'
    endif
    let l:search = '\<' . escape(expand('<cword>'), '/\.*$^~[') . '\>'
    let l:replace = escape(a:replace, '/\&~')
    execute '%s/'.l:search.'/'.l:replace.'/'.l:flag
endfunction
nnoremap <F7> :<C-u>call Replace(0,input('Replace '.expand('<cword>').' with: '))<CR>
" nnoremap <F8> :<C-u>call Replace(1,input('Replace '.expand('<cword>').' with: '))<CR>
" vnoremap <F9> "hy:%s/<C-r>h//g<left><left>


" copy and paste
vnoremap <C-c> "+y
" paste from vim to system's clipboard
vnoremap <C-x> "+x
" cut from vim to system's clipboard
" nnoremap <C-d> "+P
" paste from system's clipboard to vim

if empty(glob('~/.vim/autoload/plug.vim'))
    silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs
                \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
    augroup pluginstall
        autocmd!
        autocmd VimEnter * PlugInstall | source $MYVIMRC
    augroup END
endif

let g:plug_window = 'enew'
" Plugins Management
call plug#begin('~/.vim/plugged')
source ${HOME}/.vim/plugins.vim
source ${HOME}/.vim/colorscheme.vim
call plug#end()

" set colorscheme after plugins are loaded
silent! colorscheme jellybeans

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
function! MyIndent() abort
    let l:curLineNum=line('.')
    if &filetype ==? 'c' || &filetype ==? 'cpp'
        exec 'normal gggqG'
    else
        exec 'normal gg=G'
    endif
    exec 'normal '. l:curLineNum . 'G'
endfunction
nnoremap <F4> :call MyIndent()<CR>

augroup MyAutoCommand
    autocmd!
    autocmd FileType c,cpp set formatprg=astyle

    " in help page map q to close buffer
    autocmd FileType help nnoremap <buffer> <silent> q :q<CR>
    " in quickfix map q to close buffer
    autocmd FileType qf nnoremap <buffer> <silent> q :cclose<CR>

    " check file modified externally
    autocmd FocusGained,BufEnter * :silent! checktime

    " gitcommit settings
    autocmd FileType gitcommit setlocal nofoldenable
    autocmd FileType gitcommit setlocal spell

    " awk comment string
    autocmd FileType awk setlocal commentstring=#%s
augroup END

" mapping for toggle buffer
nnoremap <S-z> :<C-u>bprevious<CR>
nnoremap <S-x> :<C-u>bnext<CR>

if &term =~? '256color'
    " disable Background Color Erase (BCE) so that color schemes
    " render properly when inside 256-color tmux and GNU screen.
    " see also http://snk.tuxfamily.org/log/vim-256color-bce.html
    set t_ut=
endif

" disable Ex mode
map Q <Nop>
