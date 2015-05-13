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

set cursorline
set cursorcolumn
set nocompatible
set number

if !has('gui')
  set t_Co=256
  colorscheme jellybeans
endif

set mouse=nv
set showcmd
set autochdir
set fileencodings=utf8
set hlsearch
set ignorecase
set ruler
set autoindent
set cindent
set expandtab
set smartindent
set tabstop=2
set softtabstop=2
set shiftwidth=2
set scrolloff=2
set wildmode=longest,list
set wildignore+=*.o,*.a,*.so,*.obj,*.exe,*.lib,*.ncb,*.opt,*.plg,.svn,.git
set wildignore+=*.png,*.jpg,*.gif,*.svg,*.xpm
set wrap

set foldenable
set foldmethod=indent
set foldcolumn=1
set foldlevel=6

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
