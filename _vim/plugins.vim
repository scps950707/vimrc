" Auto complete
NeoBundle 'MarcWeber/vim-addon-mw-utils'
NeoBundle 'tomtom/tlib_vim'
NeoBundle 'honza/vim-snippets'
NeoBundle 'garbas/vim-snipmate'
NeoBundle 'othree/vim-autocomplpop'
NeoBundle 'L9'
let g:acp_behaviorSnipmateLength = 1
NeoBundle 'c.vim'
NeoBundleSource c.vim
NeoBundle 'Townk/vim-autoclose'

" Development
NeoBundle 'scrooloose/nerdtree'
nmap <F3> :<C-u>NERDTreeToggle<CR>
NeoBundle 'editorconfig/editorconfig-vim'
NeoBundle 'airblade/vim-gitgutter'
nmap <leader>g	:GitGutterToggle<CR>
NeoBundle 'Yggdroot/indentLine'
NeoBundle 'terryma/vim-multiple-cursors'
let g:multi_cursor_use_default_mapping=0
let g:multi_cursor_next_key='<C-n>'
let g:multi_cursor_prev_key='<C-m>'
let g:multi_cursor_skip_key='<C-q>'
let g:multi_cursor_quit_key='<Esc>'
NeoBundle 'wesleyche/SrcExpl'
nmap <F4> :<C-u>SrcExplToggle<CR>
NeoBundle 'majutsushi/tagbar'
let g:tagbar_autofocus = 1
let g:tagbar_sort = 0
nmap <F2> :<C-u>TagbarToggle<CR>
" NeoBundle 'taglist.vim'
NeoBundle 'scrooloose/syntastic'
let g:syntastic_error_symbol='✗'
let g:syntastic_warning_symbol='⚠'
let g:syntastic_enable_highlighting = 1
let g:syntastic_stl_format = '[%E{Err: %fe #%e}%B{, }%W{Warn: %fw #%w}]'
NeoBundle 'tpope/vim-commentary'
nmap <F5> gcc
nmap <F6> gc
" Theme
" NeoBundle 'bling/vim-airline'
NeoBundle 'Lokaltog/vim-powerline'
set laststatus=2
let g:Powerline_symbols = 'fancy'
" NeoBundle 'flazz/vim-colorschemes'
" NeoBundle 'chriskempson/vim-tomorrow-theme'
" NeoBundle 'romainl/Apprentice'
