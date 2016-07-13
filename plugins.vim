" =============================================================================
" Author:         scps950707
" Email:          scps950707@gmail.com
" Created:        2015-04-18 01:55
" Last Modified:  2016-07-13 17:02
" Filename:       plugins.vim
" =============================================================================
Plug 'Mizuchi/STL-Syntax'
Plug 'Raimondi/delimitMate'
Plug 'Shougo/vimproc.vim', { 'do': 'make' }
Plug 'Shougo/vimshell.vim', { 'do': 'ln -sf ~/github/dotfiles/config/.aliases ~/.vimshrc' }
map <F9> :VimShell<CR>
map <C-F9> :VimShell -split<CR>
let g:vimshell_prompt='$ '
let g:vimshell_user_prompt = 'fnamemodify(getcwd(), ":~")'
Plug 'SirVer/ultisnips'
let g:UltiSnipsSnippetDirectories=[$HOME.'/.vim/plugged/snippets/UltiSnips']
let g:UltiSnipsExpandTrigger = "<nop>"
let g:ulti_expand_or_jump_res=0
function ExpandSnippetOrCarriageReturn()
    let snippet = UltiSnips#ExpandSnippetOrJump()
    if g:ulti_expand_or_jump_res > 0
        return snippet
    else
        return "<CR>"
    endif
endfunction
inoremap <expr><CR> pumvisible() ? "<C-R>=ExpandSnippetOrCarriageReturn()<CR>" : "<CR>"
Plug 'Valloric/YouCompleteMe', { 'do' : function('BuildYCM') }
let g:ycm_autoclose_preview_window_after_completion=1
let g:ycm_confirm_extra_conf = 0
let g:ycm_filetype_specific_completion_to_disable = {}
let g:ycm_collect_identifiers_from_tags_files = 1
let g:ycm_complete_in_comments = 1
let g:ycm_filetype_blacklist = {
    \ 'tagbar' : 1,
    \ 'qf' : 1,
    \ 'notes' : 1,
    \ 'markdown' : 1,
    \ 'unite' : 1,
    \ 'text' : 1,
    \ 'vimwiki' : 1,
    \ 'pandoc' : 1,
    \ 'infolog' : 1,
    \ 'mail' : 1,
    \ 'vimshell' : 1
    \ }
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
Plug 'Yggdroot/indentLine'
let g:indentLine_char = '|'
Plug 'airblade/vim-gitgutter'
nmap ,g :GitGutterToggle<CR>
Plug 'bling/vim-bufferline'
let g:bufferline_echo = 0
let g:bufferline_show_bufnr = 0
Plug 'ctrlpvim/ctrlp.vim'
let g:ctrlp_working_path_mode = 'a'
Plug 'djoshea/vim-autoread'
Plug 'editorconfig/editorconfig-vim'
Plug 'haya14busa/incsearch.vim'
map / <Plug>(incsearch-forward)
Plug 'itchyny/vim-gitbranch'
Plug 'junegunn/vader.vim'
Plug 'majutsushi/tagbar'
let g:tagbar_width = 30
let g:tagbar_compact=1
let g:tagbar_sort = 0
nmap <F3> :<C-u>TagbarToggle<CR>
Plug 'mattn/gist-vim'
let g:gist_clip_command = 'xclip -selection clipboard'
Plug 'mattn/webapi-vim'
Plug 'moll/vim-bbye'
nnoremap ,q :Bdelete<CR>
Plug 'ntpeters/vim-better-whitespace'
Plug 'rdnetto/YCM-Generator', { 'branch': 'stable'}
let g:ycm_global_ycm_extra_conf= '~/.ycm_extra_conf.py'
Plug 'scps950707/snippets'
Plug 'scps950707/v', { 'do': './install.sh' }
Plug 'scps950707/vim-ctags'
map <C-F10> :CtagsFullDepend<CR>
map <F10> :CtagsFileIncluded<CR>
Plug 'scps950707/vim-timestamp'
nmap ,s :UpdateTimeStamp<CR>
Plug 'scps950707/vimagit'
let g:magit_default_fold_level=0
autocmd filetype magit setlocal foldenable
autocmd User VimagitEnterCommit startinsert!
nmap ,m :Magit<CR>
Plug 'scrooloose/nerdtree'
nmap <F2> :<C-u>NERDTreeToggle<CR>
let g:NERDTreeWinSize=15
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
Plug 'sjl/gundo.vim'
let g:gundo_close_on_revert=1
nnoremap <F8> :GundoToggle<CR>
Plug 'terryma/vim-multiple-cursors'
Plug 'tpope/vim-commentary'
map <F5> gcc
map <F6> gc
source $VIMRUNTIME/ftplugin/man.vim
Plug 'tyru/open-browser-github.vim'
Plug 'tyru/open-browser.vim'
Plug 'vim-airline/vim-airline'
function! AirlineInit()
    let g:airline_section_b = airline#section#create(['hunks', '%{gitbranch#name()}'])
endfunction
autocmd User AirlineAfterInit call AirlineInit()
let g:airline#extensions#bufferline#enabled = 1
let g:airline#extensions#syntastic#enabled = 1
let g:airline#extensions#ycm#enabled = 1
nmap <S-z> :bprevious<CR>
nmap <S-x> :bnext<CR>
Plug 'vim-airline/vim-airline-themes'
" Plug 'Lokaltog/vim-powerline'
" Plug 'Rip-Rip/clang_complete'
" let g:clang_close_preview=1
" let g:clang_use_library=1
" let g:clang_snippets=1
" let g:clang_trailing_placeholder=1
" " usage:first argument finish -> esc -> tab -> next argument
" autocmd FileType cpp let g:clang_user_options = '-std=c++11'
" autocmd FileType c let g:clang_user_options = '-std=c99'
" let g:clang_library_path='/usr/lib/llvm-3.4/lib/'
" Plug 'bronson/vim-trailing-whitespace'
" Plug 'chusiang/vimcdoc-tw'
" Plug 'derekwyatt/vim-fswitch'
" Plug 'fholgado/minibufexpl.vim'
" Plug 'garbas/vim-snipmate'
" Plug 'gcmt/wildfire.vim'
" Plug 'godlygeek/tabular'
" Plug 'jez/vim-superman'
" Plug 'ludovicchabant/vim-gutentags'
" Plug 'othree/vim-autocomplpop'
" let g:acp_completeOption = '.,w,b,k,d,u,t,i'
" let g:acp_completeOption = '.,w,b,k,t'
" let g:acp_behaviorSnipmateLength=1
" let g:acp_completeoptPreview=1
" let g:acp_behaviorKeywordLength=4
" Plug 'scps950707/vim-lengthmatters'
" Plug 'scps950707/vim-snippets'
" Plug 'tpope/vim-fugitive'
" Plug 'vim-scripts/taglist.vim'
" Plug 'wesleyche/SrcExpl'
