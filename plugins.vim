" Auto complete
Plug 'MarcWeber/vim-addon-mw-utils'
Plug 'tomtom/tlib_vim'
Plug 'scps950707/vim-snippets'
Plug 'garbas/vim-snipmate'
Plug 'othree/vim-autocomplpop'
" let g:acp_completeOption = '.,w,b,k,d,u,t,i'
let g:acp_completeOption = '.,w,b,k,i'
let g:acp_behaviorSnipmateLength=1
Plug 'L9'
" Plug 'scps950707/c.vim'
Plug 'Townk/vim-autoclose'
Plug 'Rip-Rip/clang_complete'
let g:clang_complete_copen=1
let g:clang_periodic_quickfix=0
let g:clang_snippets=1
let g:clang_close_preview=1
let g:clang_use_library=1
" let g:clang_user_options = '-std=gnu99 -std=libc -stdlib=libc++ -std=c++11 -I/usr/include'
let g:clang_user_options = '-std=c++11'
let g:neocomplcache_enable_at_startup = 1 
let g:clang_library_path='/usr/lib/llvm-3.4/lib/'
Plug 'scps950707/vim-protodef'
let g:protodefprotogetter='~/.vim/plugged/vim-protodef/pullproto.pl'
let g:disable_protodef_sorting=1
Plug 'derekwyatt/vim-fswitch'
autocmd FileType c,cpp set dictionary+=~/.vim/keyword/*.list

" Development
Plug 'scrooloose/nerdtree'
nmap <F2> :<C-u>NERDTreeToggle<CR>
Plug 'editorconfig/editorconfig-vim'
Plug 'airblade/vim-gitgutter'
nmap <leader>g	:GitGutterToggle<CR>
Plug 'Yggdroot/indentLine'
Plug 'terryma/vim-multiple-cursors'
let g:multi_cursor_use_default_mapping=0
let g:multi_cursor_next_key='<C-n>'
let g:multi_cursor_prev_key='<C-m>'
let g:multi_cursor_skip_key='<C-q>'
let g:multi_cursor_quit_key='<Esc>'
Plug 'wesleyche/SrcExpl'
nmap <F4> :<C-u>SrcExplToggle<CR>
Plug 'majutsushi/tagbar'
let g:tagbar_compact=1
let g:tagbar_autofocus = 1
let g:tagbar_sort = 0
nmap <F3> :<C-u>TagbarToggle<CR>
" Plug 'taglist.vim'
Plug 'scrooloose/syntastic'
let g:syntastic_error_symbol='✗'
let g:syntastic_warning_symbol='⚠'
let g:syntastic_enable_highlighting = 1
let g:syntastic_stl_format = '[%E{Err: %fe #%e}%B{, }%W{Warn: %fw #%w}]'
let g:syntastic_cpp_compiler = "g++"
let g:syntastic_cpp_compiler_options = "-std=c++11"
let g:syntastic_cpp_check_header = 1
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*
let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0
Plug 'tpope/vim-commentary'
map <F5> gcc
map <F6> gc
Plug 'fholgado/minibufexpl.vim'
nmap <F7> :<C-u>MBEToggle<CR>
nmap <leader>z :MBEbp<CR>
nmap <leader>x :MBEbn<CR>
source $VIMRUNTIME/ftplugin/man.vim
nmap <Leader>m :Man 3 <cword><CR>
Plug 'gcmt/wildfire.vim'
map <SPACE> <Plug>(wildfire-fuel)
vmap <C-SPACE> <Plug>(wildfire-water)
let g:wildfire_objects = ["i'", 'i"', "i)", "i]", "i}"]
Plug 'Mizuchi/STL-Syntax'
Plug 'kien/ctrlp.vim'
Plug 'godlygeek/tabular'
Plug 'tpope/vim-fugitive'
Plug 'xuhdev/SingleCompile'


" Theme
Plug 'bling/vim-airline'
let g:airline_theme='base16'
" Plug 'Lokaltog/vim-powerline'
" let g:Powerline_symbols = 'fancy'
" Plug 'flazz/vim-colorschemes'
" Plug 'altercation/vim-colors-solarized'
" Plug 'chriskempson/vim-tomorrow-theme'
" Plug 'romainl/Apprentice'
Plug 'c9s/colorselector.vim'
