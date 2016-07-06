#PluginMagnager
- [X] [vim-plug](https://github.com/junegunn/vim-plug)


#Plugins
- [X] [STL-Syntax](https://github.com/Mizuchi/STL-Syntax)
- [ ] [SrcExpl](https://github.com/wesleyche/SrcExpl)
- [X] [YCM-Generator](https://github.com/rdnetto/YCM-Generator)
- [X] [YouCompleteMe](https://github.com/Valloric/YouCompleteMe)
- [ ] [clang_complete](https://github.com/Rip-Rip/clang_complete)
- [X] [ctrlp.vim](https://github.com/kien/ctrlp.vim)
- [X] [delimitMate](https://github.com/Raimondi/delimitMate)
- [X] [editorconfig-vim](https://github.com/editorconfig/editorconfig-vim)
- [X] [gist-vim](https://github.com/mattn/gist-vim)
- [X] [gundo.vim](https://github.com/sjl/gundo.vim)
- [X] [incsearch.vim](https://github.com/haya14busa/incsearch.vim)
- [X] [indentLine](https://github.com/Yggdroot/indentLine)
- [ ] [minibufexpl.vim](https://github.com/fholgado/minibufexpl.vim)
- [X] [nerdtree](https://github.com/scrooloose/nerdtree)
- [X] [nerdtree-git-plugin](https://github.com/Xuyuanp/nerdtree-git-plugin)
- [X] [open-browser-github.vim](https://github.com/tyru/open-browser-github.vim)
- [X] [open-browser.vim](https://github.com/tyru/open-browser.vim)
- [X] [snippets](https://github.com/scps950707/snippets)
- [X] [syntastic](https://github.com/scrooloose/syntastic)
- [ ] [tabular](https://github.com/godlygeek/tabular)
- [X] [tagbar](https://github.com/majutsushi/tagbar)
- [ ] [taglist.vim](https://github.com/vim-scripts/taglist.vim)
- [X] [ultisnips](https://github.com/SirVer/ultisnips)
- [X] [v](https://github.com/scps950707/v)
- [X] [vader.vim](https://github.com/junegunn/vader.vim)
- [X] [vim-airline](https://github.com/vim-airline/vim-airline)
- [ ] [vim-autocomplpop](https://github.com/othree/vim-autocomplpop)
- [X] [vim-bbye](https://github.com/moll/vim-bbye)
- [X] [vim-bufferline](https://github.com/bling/vim-bufferline)
- [X] [vim-commentary](https://github.com/tpope/vim-commentary)
- [X] [vim-ctags](https://github.com/scps950707/vim-ctags)
- [ ] [vim-fswitch](https://github.com/derekwyatt/vim-fswitch)
- [ ] [vim-fugitive](https://github.com/tpope/vim-fugitive)
- [X] [vim-gitbranch](https://github.com/itchyny/vim-gitbranch)
- [X] [vim-gitgutter](https://github.com/airblade/vim-gitgutter)
- [ ] [vim-gutentags](https://github.com/ludovicchabant/vim-gutentags)
- [X] [vim-lengthmatters](https://github.com/scps950707/vim-lengthmatters)
- [X] [vim-multiple-cursors](https://github.com/terryma/vim-multiple-cursors)
- [ ] [vim-powerline](https://github.com/Lokaltog/vim-powerline)
- [ ] [vim-snipmate](https://github.com/garbas/vim-snipmate)
- [ ] [vim-snippets](https://github.com/scps950707/vim-snippets)
- [ ] [vim-superman](https://github.com/jez/vim-superman)
- [X] [vim-timestamp](https://github.com/scps950707/vim-timestamp)
- [X] [vim-trailing-whitespace](https://github.com/bronson/vim-trailing-whitespace)
- [X] [vimagit](https://github.com/scps950707/vimagit)
- [ ] [vimcdoc-tw](https://github.com/chusiang/vimcdoc-tw)
- [X] [vimproc.vim](https://github.com/Shougo/vimproc.vim)
- [X] [vimshell.vim](https://github.com/Shougo/vimshell.vim)
- [X] [webapi-vim](https://github.com/mattn/webapi-vim)
- [ ] [wildfire.vim](https://github.com/gcmt/wildfire.vim)


#Key Mappings
|Mappings|Key|Target|
|-----------|----------|---------|
|nmap|,g|:GitGutterToggle\<CR\>|
|nmap|,m|:Magit\<CR\>|
|nnoremap|,q|:Bdelete\<CR\>|
|nmap|,s|:UpdateTimeStamp\<CR\>|
|map|/|\<Plug\>(incsearch-forward)|
|map|\<C-F10\>|:CtagsFullDepend\<CR\>|
|map|\<C-F9\>|:VimShell -split\<CR\>|
|imap|\<C-a\>|\<C-X\>\<C-O\>|
|vnoremap|\<C-c\>|"+y|
|nnoremap|\<C-down\>|:resize +5\<cr\>|
|nnoremap|\<C-left\>|:vertical resize -5\<cr\>|
|nnoremap|\<C-right\>|:vertical resize +5\<cr\>|
|nnoremap|\<C-up\>|:resize -5\<cr\>|
|vnoremap|\<C-x\>|"+x|
|map|\<F10\>|:CtagsFileIncluded\<CR\>|
|nmap|\<F2\>|:\<C-u\>NERDTreeToggle\<CR\>|
|nmap|\<F3\>|:\<C-u\>TagbarToggle\<CR\>|
|nmap|\<F4\>|\<C-u\>gggqG\<CR\>|
|map|\<F5\>|gcc|
|map|\<F6\>|gc|
|map|\<F7\>|:\<C-u\>call Replace(0,input('Replace '.expand('\<cword\>').' with: '))\<CR\>|
|nnoremap|\<F8\>|:GundoToggle\<CR\>|
|map|\<F9\>|:VimShell\<CR\>|
|nmap|\<S-x\>|:bnext\<CR\>|
|nmap|\<S-z\>|:bprevious\<CR\>|
|inoremap|\<expr\>\<CR\>|pumvisible() ? "\<C-R\>=ExpandSnippetOrCarriageReturn()\<CR\>" : "\<CR\>"|
|cnoremap|help|vert help|
