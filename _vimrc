" Note: Skip initialization for vim-tiny or vim-small.
if !1 | finish | endif

if has('vim_starting')
  if &compatible
    set nocompatible               " Be iMproved
  endif

  " Required:
  set runtimepath+=~/.vim/bundle/neobundle.vim/
endif

" Required:
call neobundle#begin(expand('~/.vim/bundle/'))

" Let NeoBundle manage NeoBundle
" Required:
NeoBundleFetch 'Shougo/neobundle.vim'

" My Bundles here:
" Refer to |:NeoBundle-examples|.
" Note: You don't set neobundle setting in .gvimrc!

source ${HOME}/.vim/plugins.vim

call neobundle#end()

" Required:
filetype plugin indent on

" If there are uninstalled bundles found on startup,
" this will conveniently prompt you to install them.


NeoBundleCheck

set cursorline "顯示當前游標行
set cursorcolumn "顯示當前游標列
set nocompatible "VIM 不使用和VI相容的模式
set number

if !has('gui')
  set t_Co=256
  colorscheme jellybeans
endif

set mouse=nv
set showcmd "在狀態列顯示目前所執行的指令
set autochdir "自動轉換目錄到前檔案所在目錄
set fileencodings=utf8 "vim預設編碼
set hlsearch "高亮搜尋結果
set ignorecase "搜尋時忽略大小寫
set ruler "顯示下方狀態列
set autoindent "自動縮排
set cindent "採用C語言的縮排方式
set expandtab "用space代替tab
set smartindent "每一行都和前一行有相同的縮排量
set tabstop=2 "tab字元數
set softtabstop=2
set shiftwidth=2 "縮排寬度
set scrolloff=3 "滾動時游標下方保留幾行
set wildmode=longest,list "命令模式自動補齊的型態
set wildignore+=*.o,*.a,*.so,*.obj,*.exe,*.lib,*.ncb,*.opt,*.plg,.svn,.git
set wildignore+=*.png,*.jpg,*.gif,*.svg,*.xpm
set wrap "程式碼折行
set linebreak(lbr) "避免折行時英文單字被拆成兩半
set foldenable "程式碼折疊
set foldmethod=syntax "偵測程式碼格式來折疊
set foldcolumn=1 "VIM最左邊預留一塊foldcolumn的空間顯示折疊情形
" set foldlevel=6

set dictionary+=~/.vim/bundle/keyword/*.list

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
map <F8> :<C-u>call Replace(0,input('Replace '.expand('<cword>').' with: '))<CR>
map <F9> :<C-u>call Replace(1,input('Replace '.expand('<cword>').' with: '))<CR>
