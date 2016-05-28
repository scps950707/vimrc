set cursorline "顯示當前游標列
" set cursorcolumn "顯示當前游標行
set nocompatible "VIM 不使用和VI相容的模式
set number
set laststatus=2 " 總是顯示狀態欄
filetype on " 開啟文件類型偵測
filetype plugin on " 偵測不同文件類型開啟相對應套件
filetype indent on " 偵測不同語言採取相對應縮排
set t_Co=256
colorscheme jellybeans
set mouse=a "滑鼠所有模式下啟動
set showcmd "在狀態列顯示目前所執行的指令
set autochdir "自動轉換目錄到前檔案所在目錄
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
set tabstop=2 "tab字元數
set softtabstop=2 " 讓 vim 把連續數量的空格視為一個制表符
set shiftwidth=2 "縮排寬度
set scrolloff=3 "滾動時游標下方保留幾行
set wildmenu
set wildmode=longest,list "命令模式自動補齊的型態
set wildignore+=*.o,*.a,*.so,*.obj,*.exe,*.lib,*.ncb,*.opt,*.plg,.svn,.git
set wildignore+=*.png,*.jpg,*.gif,*.svg,*.xpm,*.swp
set nowrap "程式碼折行
set nofoldenable "程式碼預設不折疊
set foldmethod=syntax "偵測程式碼格式來折疊
set foldcolumn=1 "VIM最左邊預留一塊foldcolumn的空間顯示折疊情形
set previewheight=1
set nobackup
set noswapfile
set fileformats=unix,dos,mac
set viminfo='20,\"50    " read/write a .viminfo file, don't store more than 50 lines of registers
set history=20
set wildchar=<TAB> " such as <TAB> in shell

"auto close preview window
" autocmd CursorMovedI * if pumvisible() == 0|pclose|endif
" autocmd InsertLeave * if pumvisible() == 0|pclose|endif
autocmd CompleteDone * pclose

function! Replace(confirm,replace)
  let flag = ''
  if a:confirm
    let flag.='gc'
  else
    let flag.='g'
  endif
  let search = ''
  let search .= '\<' . escape(expand('<cword>'), '/\.*$^~[') . '\>'
  let replace = escape(a:replace, '/\&~')
  execute '%s/'.search.'/'.replace.'/'.flag
endfunction
" nmap <F4> <C-u>0ggVG=<CR>
" nmap <F4> <C-u>gg=G<CR>
nmap <F4> <C-u>gggqG<CR>
map <F7> :<C-u>call Replace(0,input('Replace '.expand('<cword>').' with: '))<CR>
map <F8> :<C-u>call Replace(1,input('Replace '.expand('<cword>').' with: '))<CR>
vmap <F9> "hy:%s/<C-r>h//g<left><left>
vnoremap <C-c> "+y
" paste from vim to system's clipboard
vnoremap <C-x> "+x
" cut from vim to system's clipboard
" nmap <C-d> "+P
" paste from system's clipboard to vim
imap <C-a> <C-X><C-O>
cnoremap help vert help

" Plugins Management
autocmd FileType c,cpp set formatprg=astyle\ -A1s2pDHk3W3j
call plug#begin('~/.vim/plugged')
source ${HOME}/.vim/plugins.vim
call plug#end()
" Plugins Management

" Tags Management

function! TagFullDepend()
  let command = ''
  let command = '
        \ls -R
        \| grep ''\..*[ch]p*p*''
        \| xargs gcc -M
        \| sed ''s/[\\ ]/\n/g''
        \| sed ''/^$/d;/\.o:[ \t]*$/d''
        \| sort -u
        \| ctags -L - --sort=yes --c-kinds=defgpstux --fields=+iaS --extra=+q
        \ -I __attribute__,__attribute_malloc__,__attribute_pure__,__wur,__THROW '
  execute '!'.command
endfunction
map <C-F10> :<C-u>call TagFullDepend()<CR>

function! TagFileIncluded()
  let find_include = ''
  let find_include = '
        \ls -R
        \| grep ''\..*[ch]p*p*''
        \| xargs sed -n ''/include/p''
        \| sed ''s/\#include//g;s/[>< ]//g''
        \| sort -u
        \ > myincludeheaders '
  let generate_ctags = ''
  let generate_ctags = '
        \ls -R
        \| grep ''\..*[ch]p*p*''
        \| xargs gcc -M
        \| sed ''s/[\\ ]/\n/g''
        \| sed ''/^$/d;/\.o:[ \t]*$/d''
        \| grep -f myincludeheaders
        \| sort -u
        \| ctags -L - --sort=yes --c-kinds=defgpstux --fields=+iaS --extra=+q
        \ -I __attribute__,__attribute_malloc__,__attribute_pure__,__wur,__THROW '
  let remove_tmp = ''
  let remove_tmp = 'rm myincludeheaders'
  execute '!'.find_include.' && '.generate_ctags.' && '.remove_tmp
endfunction
map <F10> :<C-u>call TagFileIncluded()<CR>


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
cnoreabbrev magit Magit
