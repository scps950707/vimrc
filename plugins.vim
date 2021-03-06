" =============================================================================
" Author:         scps950707
" Email:          scps950707@gmail.com
" Created:        2015-04-18 01:55
" Last Modified:  2020-03-08 16:36
" Filename:       plugins.vim
" =============================================================================
Plug '$HOME/.zplug/repos/junegunn/fzf'
Plug 'Raimondi/delimitMate'
Plug 'SirVer/ultisnips'
let g:UltiSnipsJumpForwardTrigger='<s-j>'
let g:UltiSnipsJumpBackwardTrigger='<s-k>'
let g:UltiSnipsExpandTrigger = '<nop>'
let g:ulti_expand_or_jump_res=0
function! ExpandSnippetOrCarriageReturn() abort
    let l:snippet = UltiSnips#ExpandSnippetOrJump()
    if g:ulti_expand_or_jump_res > 0
        return l:snippet
    else
        return "\<CR>"
    endif
endfunction
inoremap <expr><CR> pumvisible() ? "<C-R>=ExpandSnippetOrCarriageReturn()<CR>" : "\<CR>"
Plug 'Xuyuanp/nerdtree-git-plugin', { 'on': 'NERDTreeToggle' }
let g:NERDTreeIndicatorMapCustom = {
            \ 'Modified'  : 'M',
            \ 'Staged'    : 'A',
            \ 'Untracked' : '?',
            \ 'Renamed'   : 'R',
            \ 'Unmerged'  : 'U',
            \ 'Deleted'   : 'D',
            \ 'Dirty'     : '?',
            \ 'Clean'     : 'C',
            \ 'Unknown'   : '?'
            \ }
Plug 'Yggdroot/indentLine'
let g:indentLine_char = '|'
let g:indentLine_leadingSpaceChar = '·'
let g:indentLine_leadingSpaceEnabled = 1
let g:indentLine_bufNameExclude = ['_.*', 'NERD_tree.*']
Plug 'airblade/vim-gitgutter'
Plug 'davidhalter/jedi-vim', { 'for': 'python' }
let g:jedi#auto_initialization = 1
let g:jedi#completions_enabled = 0
let g:jedi#auto_vim_configuration = 0
let g:jedi#popup_on_dot = 0
let g:jedi#completions_command = ''
let g:jedi#show_call_signatures = 2
let g:jedi#show_call_signatures_delay = 0
let g:jedi#force_py_version = 3
Plug 'editorconfig/editorconfig-vim'
Plug 'gcmt/wildfire.vim'
Plug 'godlygeek/tabular'
Plug 'itchyny/vim-gitbranch'
Plug 'jreybert/vimagit'
let g:magit_default_fold_level=0
autocmd filetype magit setlocal foldenable
autocmd User VimagitEnterCommit startinsert!
nnoremap <leader>m :<C-u>Magit<CR>
Plug 'junegunn/fzf.vim'
nnoremap <C-p> :<C-u>FZF<CR>
nnoremap <C-d> :<C-u>Buffers<CR>
nnoremap <leader>g :<C-u>Ag<CR>
Plug 'junegunn/vader.vim', { 'on': 'Vader' }
Plug 'majutsushi/tagbar'
let g:tagbar_width = 30
let g:tagbar_compact=1
let g:tagbar_sort = 0
nnoremap <F3> :<C-u>TagbarToggle<CR>
Plug 'mattn/emmet-vim', { 'for': 'html' }
Plug 'mattn/gist-vim', { 'on': 'Gist' }
let g:gist_clip_command = 'xclip -selection clipboard'
Plug 'mattn/webapi-vim', { 'on': 'Gist' }
Plug 'matze/vim-move'
let g:move_key_modifier = 'C'
Plug 'mhinz/vim-sayonara', { 'on': 'Sayonara' }
nnoremap <leader>q :<C-u>Sayonara<CR>
Plug 'mhinz/vim-startify'
if(filereadable($HOME.'/.vim_startify_bookmarks'))
    let g:startify_bookmarks = readfile($HOME.'/.vim_startify_bookmarks')
endif
if(filereadable($HOME.'/.vim_startify_commands'))
    let g:startify_commands = readfile($HOME.'/.vim_startify_commands')
endif
command! -nargs=0 StartifyAddCurrentFileToBookmark call writefile([expand('%:p')],$HOME.'/.vim_startify_bookmarks',"a")
command! -nargs=0 StartifyEditBookmark edit ~/.vim_startify_bookmarks
command! -nargs=0 StartifyEditCommands edit ~/.vim_startify_commands
let g:startify_list_order = [
            \ ['   MRU '. getcwd()], 'dir',
            \ ['   Bookmarks'],      'bookmarks',
            \ ['   MRU'],            'files',
            \ ['   Commands'],       'commands',
            \ ['   Sessions'],       'sessions',
            \ ]
let g:startify_change_to_dir = 0
let g:startify_files_number = 8
let g:startify_custom_header = []
Plug 'ntpeters/vim-better-whitespace'
Plug 'octol/vim-cpp-enhanced-highlight', { 'for': 'cpp' }
let g:cpp_class_scope_highlight = 1
let g:cpp_experimental_template_highlight = 1
Plug 'othree/html5.vim', { 'for': 'html' }
Plug 'pangloss/vim-javascript', { 'for': 'javascript' }
Plug 'rdnetto/YCM-Generator', { 'branch': 'stable', 'on': 'YcmGenerateConfig' }
Plug 'scps950707/cscope_maps.vim'
Plug 'scps950707/snippets'
Plug 'scps950707/vim-airline-themes'
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
nnoremap <F2> :<C-u>NERDTreeToggle<CR>
let g:NERDTreeIgnore=['\.pyc$', '\.o$']
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
Plug 'terryma/vim-multiple-cursors'
Plug 'tpope/vim-commentary'
map <F5> gcc
map <F6> gc
Plug 'tpope/vim-dispatch'
nnoremap <F10> :<C-u>Dispatch<CR>
nnoremap <C-F10> :<C-u>Dispatch!<CR>
Plug 'tpope/vim-obsession'
Plug 'vim-airline/vim-airline'
function! AirlineInit() abort
    let g:airline_section_b = airline#section#create(['hunks', '%{gitbranch#name()}'])
endfunction
autocmd User AirlineAfterInit call AirlineInit()
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#fnamemod = ':t'
let g:airline#extensions#tabline#buffer_min_count = 2
let g:airline#extensions#ycm#enabled = 1
let g:airline#extensions#vimagit#enabled = 1
let g:airline#extensions#ale#enabled = 1
let g:airline_theme='base16'
Plug 'w0rp/ale'
let g:ale_echo_msg_error_str = 'E'
let g:ale_echo_msg_warning_str = 'W'
let g:ale_echo_msg_format = '[%linter%] %s [%severity%]'
let g:ale_c_parse_makefile = 1
let g:ale_fixers = {
\   'python': ['autopep8'],
\}
let g:ale_linters = {
\	'c': ['cppcheck', 'flawfinder', 'clangtidy'],
\	'cpp': ['cppcheck', 'flawfinder', 'clangtidy'],
\}
Plug 'ycm-core/YouCompleteMe', { 'do': './install.py --clang-completer' }
let g:ycm_error_symbol='✗'
let g:ycm_warning_symbol='⚠'
let g:ycm_global_ycm_extra_conf= '~/.ycm_extra_conf.py'
let g:ycm_confirm_extra_conf = 0
let g:ycm_filetype_specific_completion_to_disable = {}
let g:ycm_collect_identifiers_from_tags_files = 1
let g:ycm_complete_in_comments = 1
let g:ycm_seed_identifiers_with_syntax = 1
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
" Plug 'Shougo/neocomplete.vim'
" let g:neocomplete#enable_at_startup = 1
" autocmd FileType * call s:YCMNEOswitch()
" function s:YCMNEOswitch() abort
"     if &filetype == 'vimshell'
"         NeoCompleteUnlock
"     else
"         NeoCompleteLock
"     endif
" endfunction
" Plug 'Shougo/unite.vim'
" Plug 'Shougo/vimproc.vim', { 'do': 'make' }
" Plug 'Shougo/vimshell.vim', { 'do': 'ln -sf ~/github/dotfiles/config/.aliases ~/.vimshrc' }
" nnoremap <F9> :<C-u>VimShell<CR>
" function! MyVimShellVerticalSplit() abort
"     exec 'VimShell -split'
"     exec 'vertical resize 50'
" endfunction
" nnoremap <C-F9> :call MyVimShellVerticalSplit()<CR>
" let g:vimshell_prompt='$ '
" let g:vimshell_user_prompt = 'fnamemodify(getcwd(), ":~")'
" autocmd filetype vimshell setlocal omnifunc=vimshell#complete#omnifunc
" Plug 'andviro/flake8-vim', { 'for': 'python' }
" let g:PyFlakeOnWrite = 0
" Plug 'bling/vim-bufferline'
" let g:bufferline_echo = 0
" let g:bufferline_show_bufnr = 0
" Plug 'bronson/vim-trailing-whitespace'
" Plug 'chusiang/vimcdoc-tw'
" Plug 'ctrlpvim/ctrlp.vim'
" Plug 'derekwyatt/vim-fswitch'
" Plug 'djoshea/vim-autoread'
" Plug 'fholgado/minibufexpl.vim'
" Plug 'garbas/vim-snipmate'
" Plug 'jez/vim-superman'
" Plug 'ludovicchabant/vim-gutentags'
" Plug 'mbbill/undotree', { 'on': 'UndotreeToggle' }
" let g:undotree_SetFocusWhenToggle = 1
" nnoremap <F8> :<C-u>UndotreeToggle<cr>
" Plug 'mhinz/vim-grepper', { 'on': ['Grepper', '<plug>(GrepperOperator)'] }
" nnoremap <leader>g :<C-u>Grepper<CR>
" let g:grepper               = {}
" let g:grepper.jump          = 1
" let g:grepper.next_tool     = '<leader>g'
" let g:grepper.simple_prompt = 1
" Plug 'moll/vim-bbye'
" nnoremap ,q :<C-u>Bdelete<CR>
" Plug 'othree/vim-autocomplpop'
" let g:acp_completeOption = '.,w,b,k,t'
" let g:acp_behaviorSnipmateLength=1
" let g:acp_completeoptPreview=1
" let g:acp_behaviorKeywordLength=4
" Plug 'rupa/v'
" Plug 'scps950707/colorselector.vim', { 'on': 'SelectColorS' }
" Plug 'scps950707/vim-ctags'
" nnoremap <C-F10> :<C-u>CtagsFullDepend<CR>
" nnoremap <F10> :<C-u>CtagsFileIncluded<CR>
" Plug 'scps950707/vim-lengthmatters'
" Plug 'scps950707/vim-snippets'
" Plug 'scps950707/vim-timestamp'
" nnoremap ,s :<C-u>UpdateTimeStamp<CR>
" Plug 'scrooloose/syntastic'
" let g:syntastic_error_symbol='✗'
" let g:syntastic_warning_symbol='⚠'
" let g:syntastic_enable_highlighting = 1
" let g:syntastic_stl_format = '[%E{Errors:%e}%B{, }%W{Warnings:%w}]'
" let g:syntastic_cpp_compiler_options = '-std=c++11 -Wall'
" let g:syntastic_cpp_check_header = 1
" let g:syntastic_c_compiler_options = '-std=c99 -Wall -D_XOPEN_SOURCE=500'
" let g:syntastic_c_check_header = 1
" let g:syntastic_check_on_open = 1
" let g:syntastic_check_on_wq = 0
" let g:syntastic_python_checkers = ['flake8']
" Plug 'sjl/gundo.vim'
" let g:gundo_close_on_revert=1
" nnoremap <F8> :GundoToggle<CR>
" Plug 'tpope/vim-fugitive'
" Plug 'tpope/vim-surround'
" Plug 'tyru/open-browser-github.vim'
" Plug 'tyru/open-browser.vim'
" Plug 'vim-scripts/taglist.vim'
" Plug 'wesleyche/SrcExpl'
