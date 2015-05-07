" Auto complete
NeoBundle 'MarcWeber/vim-addon-mw-utils'
NeoBundle 'tomtom/tlib_vim'
NeoBundle 'scps950707/vim-snippets'
NeoBundle 'garbas/vim-snipmate'
NeoBundle 'othree/vim-autocomplpop'
NeoBundle 'L9'
let g:acp_behaviorSnipmateLength = 1
" NeoBundle 'scps950707/c.vim'
" NeoBundleSource c.vim
NeoBundle 'Townk/vim-autoclose'
NeoBundle 'Rip-Rip/clang_complete'
let g:clang_complete_copen=1
let g:clang_periodic_quickfix=0
let g:clang_snippets=1
let g:clang_close_preview=1
let g:clang_use_library=1
let g:clang_user_options='-std=c++11'
let g:neocomplcache_enable_at_startup = 1 
let g:clang_library_path='/usr/lib/llvm-3.4/lib/'

" Development
NeoBundle 'scrooloose/nerdtree'
nmap <F2> :<C-u>NERDTreeToggle<CR>
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
let g:tagbar_compact=1
let g:tagbar_autofocus = 1
let g:tagbar_sort = 0
nmap <F3> :<C-u>TagbarToggle<CR>
" NeoBundle 'taglist.vim'
NeoBundle 'scrooloose/syntastic'
let g:syntastic_error_symbol='✗'
let g:syntastic_warning_symbol='⚠'
let g:syntastic_enable_highlighting = 1
let g:syntastic_stl_format = '[%E{Err: %fe #%e}%B{, }%W{Warn: %fw #%w}]'
NeoBundle 'tpope/vim-commentary'
map <F5> gcc
map <F6> gc
NeoBundle 'fholgado/minibufexpl.vim'
nmap <F7> :<C-u>MBEToggle<CR>
nmap <leader>z :MBEbp<CR>
nmap <leader>x :MBEbn<CR>
map <F8> :<C-u>call Replace(input('Replace '.expand('<cword>').' with: '))<CR>
source $VIMRUNTIME/ftplugin/man.vim
nmap <Leader>m :Man 3 <cword><CR>
NeoBundle 'gcmt/wildfire.vim'
map <SPACE> <Plug>(wildfire-fuel)
vmap <C-SPACE> <Plug>(wildfire-water)
let g:wildfire_objects = ["i'", 'i"', "i)", "i]", "i}"]

" Theme
" NeoBundle 'bling/vim-airline'
NeoBundle 'Lokaltog/vim-powerline'
set laststatus=2
let g:Powerline_symbols = 'fancy'
" NeoBundle 'flazz/vim-colorschemes'
" NeoBundle 'chriskempson/vim-tomorrow-theme'
" NeoBundle 'romainl/Apprentice'

