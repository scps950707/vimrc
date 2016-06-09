" ---Auto complete---

Plug 'MarcWeber/vim-addon-mw-utils'
Plug 'tomtom/tlib_vim'
Plug 'scps950707/vim-snippets'
Plug 'garbas/vim-snipmate'
Plug 'othree/vim-autocomplpop'
" let g:acp_completeOption = '.,w,b,k,d,u,t,i'
let g:acp_completeOption = '.,w,b,k,t'
let g:acp_behaviorSnipmateLength=1
let g:acp_completeoptPreview=1
Plug 'L9'
Plug 'Townk/vim-autoclose'
Plug 'Rip-Rip/clang_complete'
let g:clang_close_preview=1
let g:clang_use_library=1
let g:clang_snippets=1
let g:clang_trailing_placeholder=1
" usage:first argument finish -> esc -> tab -> next argument
autocmd FileType cpp let g:clang_user_options = '-std=c++11'
autocmd FileType c let g:clang_user_options = '-std=c99'
let g:clang_library_path='/usr/lib/llvm-3.4/lib/'
" Plug 'ludovicchabant/vim-gutentags'

" ---Development---

Plug 'scrooloose/nerdtree'
nmap <F2> :<C-u>NERDTreeToggle<CR>
let g:NERDTreeWinSize=15
Plug 'Xuyuanp/nerdtree-git-plugin'
let g:NERDTreeIndicatorMapCustom = {
    \ "Modified"  : "M",
    \ "Staged"    : "A",
    \ "Untracked" : "?",
    \ "Renamed"   : "R",
    \ "Unmerged"  : "U",
    \ "Deleted"   : "D",
    \ "Dirty"     : "?",
    \ "Clean"     : "C",
    \ "Unknown"   : "?"
    \ }
Plug 'editorconfig/editorconfig-vim'
Plug 'airblade/vim-gitgutter'
nmap ,g :GitGutterToggle<CR>
Plug 'Yggdroot/indentLine'
let g:indentLine_char = '|'
Plug 'terryma/vim-multiple-cursors'
let g:multi_cursor_use_default_mapping=0
let g:multi_cursor_next_key='<C-n>'
let g:multi_cursor_prev_key='<C-m>'
let g:multi_cursor_skip_key='<C-q>'
let g:multi_cursor_quit_key='<Esc>'
Plug 'majutsushi/tagbar'
let g:tagbar_width = 30
let g:tagbar_compact=1
let g:tagbar_sort = 0
nmap <F3> :<C-u>TagbarToggle<CR>
Plug 'scrooloose/syntastic'
let g:syntastic_error_symbol='✗'
let g:syntastic_warning_symbol='⚠'
let g:syntastic_enable_highlighting = 1
let g:syntastic_stl_format = '[%E{Errors:%e}%B{, }%W{Warnings:%w}]'
let g:syntastic_cpp_compiler_options = '-std=c++11 -Wall'
let g:syntastic_cpp_check_header = 1
let g:syntastic_c_compiler_options = '-std=c99 -Wall -D_XOPEN_SOURCE=500'
let g:syntastic_c_check_header = 1
" let g:syntastic_always_populate_loc_list = 1
" let g:syntastic_loc_list_height = 2
" let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0
Plug 'tpope/vim-commentary'
map <F5> gcc
map <F6> gc
source $VIMRUNTIME/ftplugin/man.vim
Plug 'Mizuchi/STL-Syntax'
Plug 'kien/ctrlp.vim'
let g:ctrlp_working_path_mode = 'a'
Plug 'bronson/vim-trailing-whitespace'
Plug 'jreybert/vimagit'
nmap ,m :Magit<CR>
Plug 'mattn/gist-vim'
let g:gist_clip_command = 'xclip -selection clipboard'
Plug 'moll/vim-bbye'
nnoremap ,q :Bdelete<CR>
Plug 'sjl/gundo.vim'
let g:gundo_close_on_revert=1
nnoremap <F8> :GundoToggle<CR>
Plug 'scps950707/vim-ctags'
map <C-F10> :CtagsFullDepend<CR>
map <F10> :CtagsFileIncluded<CR>

" ---Theme---

Plug 'bling/vim-airline'
let g:airline_section_b = '%{gitbranch#name()}'
let g:airline#extensions#tabline#enabled = 1
nmap <S-z> :bprevious<CR>
nmap <S-x> :bnext<CR>

" ---Other---
Plug 'chusiang/vimcdoc-tw'
set helplang=tw
Plug 'mattn/webapi-vim'
Plug 'itchyny/vim-gitbranch'
Plug 'scps950707/v', { 'do': './install.sh' }
