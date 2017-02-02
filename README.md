#PluginMagnager
- [X] [vim-plug](https://github.com/junegunn/vim-plug)


#Plugins
- [X] [STL-Syntax](https://github.com/Mizuchi/STL-Syntax)
- [ ] [SrcExpl](https://github.com/wesleyche/SrcExpl)
- [X] [YCM-Generator](https://github.com/rdnetto/YCM-Generator)
- [X] [YouCompleteMe](https://github.com/oblitum/YouCompleteMe)
- [ ] [clang_complete](https://github.com/Rip-Rip/clang_complete)
- [X] [colorselector.vim](https://github.com/scps950707/colorselector.vim)
- [X] [ctrlp.vim](https://github.com/ctrlpvim/ctrlp.vim)
- [X] [delimitMate](https://github.com/Raimondi/delimitMate)
- [X] [editorconfig-vim](https://github.com/editorconfig/editorconfig-vim)
- [X] [emmet-vim](https://github.com/mattn/emmet-vim)
- [X] [flake8-vim](https://github.com/andviro/flake8-vim)
- [X] [gist-vim](https://github.com/mattn/gist-vim)
- [ ] [gundo.vim](https://github.com/sjl/gundo.vim)
- [X] [html5.vim](https://github.com/othree/html5.vim)
- [X] [incsearch.vim](https://github.com/haya14busa/incsearch.vim)
- [X] [indentLine](https://github.com/Yggdroot/indentLine)
- [X] [jedi-vim](https://github.com/davidhalter/jedi-vim)
- [ ] [minibufexpl.vim](https://github.com/fholgado/minibufexpl.vim)
- [ ] [neocomplete.vim](https://github.com/Shougo/neocomplete.vim)
- [X] [nerdtree](https://github.com/scrooloose/nerdtree)
- [X] [nerdtree-git-plugin](https://github.com/Xuyuanp/nerdtree-git-plugin)
- [X] [open-browser-github.vim](https://github.com/tyru/open-browser-github.vim)
- [X] [open-browser.vim](https://github.com/tyru/open-browser.vim)
- [X] [snippets](https://github.com/scps950707/snippets)
- [X] [syntastic](https://github.com/scrooloose/syntastic)
- [X] [tabular](https://github.com/godlygeek/tabular)
- [X] [tagbar](https://github.com/majutsushi/tagbar)
- [ ] [taglist.vim](https://github.com/vim-scripts/taglist.vim)
- [X] [ultisnips](https://github.com/SirVer/ultisnips)
- [X] [undotree](https://github.com/mbbill/undotree)
- [X] [unite.vim](https://github.com/Shougo/unite.vim)
- [ ] [v](https://github.com/rupa/v)
- [X] [vader.vim](https://github.com/junegunn/vader.vim)
- [X] [vim-airline](https://github.com/vim-airline/vim-airline)
- [X] [vim-airline-themes](https://github.com/vim-airline/vim-airline-themes)
- [ ] [vim-autocomplpop](https://github.com/othree/vim-autocomplpop)
- [ ] [vim-autoread](https://github.com/djoshea/vim-autoread)
- [ ] [vim-bbye](https://github.com/moll/vim-bbye)
- [X] [vim-better-whitespace](https://github.com/ntpeters/vim-better-whitespace)
- [ ] [vim-bufferline](https://github.com/bling/vim-bufferline)
- [X] [vim-commentary](https://github.com/tpope/vim-commentary)
- [X] [vim-cpp-enhanced-highlight](https://github.com/octol/vim-cpp-enhanced-highlight)
- [ ] [vim-ctags](https://github.com/scps950707/vim-ctags)
- [X] [vim-dispatch](https://github.com/tpope/vim-dispatch)
- [ ] [vim-fswitch](https://github.com/derekwyatt/vim-fswitch)
- [ ] [vim-fugitive](https://github.com/tpope/vim-fugitive)
- [X] [vim-gitbranch](https://github.com/itchyny/vim-gitbranch)
- [X] [vim-gitgutter](https://github.com/airblade/vim-gitgutter)
- [ ] [vim-gutentags](https://github.com/ludovicchabant/vim-gutentags)
- [X] [vim-javascript](https://github.com/pangloss/vim-javascript)
- [ ] [vim-lengthmatters](https://github.com/scps950707/vim-lengthmatters)
- [X] [vim-move](https://github.com/matze/vim-move)
- [X] [vim-multiple-cursors](https://github.com/terryma/vim-multiple-cursors)
- [ ] [vim-powerline](https://github.com/Lokaltog/vim-powerline)
- [X] [vim-sayonara](https://github.com/mhinz/vim-sayonara)
- [ ] [vim-snipmate](https://github.com/garbas/vim-snipmate)
- [ ] [vim-snippets](https://github.com/scps950707/vim-snippets)
- [X] [vim-startify](https://github.com/mhinz/vim-startify)
- [ ] [vim-superman](https://github.com/jez/vim-superman)
- [ ] [vim-timestamp](https://github.com/scps950707/vim-timestamp)
- [ ] [vim-trailing-whitespace](https://github.com/bronson/vim-trailing-whitespace)
- [X] [vimagit](https://github.com/scps950707/vimagit)
- [ ] [vimcdoc-tw](https://github.com/chusiang/vimcdoc-tw)
- [X] [vimproc.vim](https://github.com/Shougo/vimproc.vim)
- [X] [vimshell.vim](https://github.com/Shougo/vimshell.vim)
- [X] [webapi-vim](https://github.com/mattn/webapi-vim)
- [X] [wildfire.vim](https://github.com/gcmt/wildfire.vim)


#Key Mappings
|Mappings|Key|Target|
|-----------|----------|---------|
|nmap|,g|:GitGutterToggle\<CR\>|
|nmap|,m|:\<C-u\>Magit\<CR\>|
|nmap|,q|:Sayonara\<CR\>|
|map|/|\<Plug\>(incsearch-forward)|
|nnoremap|\<C-F10\>|:Dispatch!\<CR\>|
|nmap|\<C-F9\>|:call MyVimShellVerticalSplit()\<CR\>|
|vnoremap|\<C-c\>|"+y|
|nnoremap|\<C-down\>|:resize +5\<cr\>|
|nnoremap|\<C-left\>|:vertical resize -5\<cr\>|
|nnoremap|\<C-right\>|:vertical resize +5\<cr\>|
|nnoremap|\<C-up\>|:resize -5\<cr\>|
|vnoremap|\<C-x\>|"+x|
|nnoremap|\<F10\>|:Dispatch\<CR\>|
|nmap|\<F2\>|:\<C-u\>NERDTreeToggle\<CR\>|
|nmap|\<F3\>|:\<C-u\>TagbarToggle\<CR\>|
|nmap|\<F4\>|:call MyIndent()\<CR\>|
|map|\<F5\>|gcc|
|map|\<F6\>|gc|
|nmap|\<F7\>|:\<C-u\>call Replace(0,input('Replace '.expand('\<cword\>').' with: '))\<CR\>|
|nnoremap|\<F8\>|:\<C-u\>UndotreeToggle\<cr\>|
|nmap|\<F9\>|:VimShell\<CR\>|
|nmap|\<S-x\>|:bnext\<CR\>|
|nmap|\<S-z\>|:bprevious\<CR\>|
|inoremap|\<expr\>\<CR\>|pumvisible() ? "\<C-R\>=ExpandSnippetOrCarriageReturn()\<CR\>" : "\\<CR\>"|
|cnoremap|help|vert help|


#Colorscheme
- [X] [Apprentice](https://github.com/romainl/Apprentice)
- [X] [badwolf](https://github.com/sjl/badwolf)
- [X] [gruvbox](https://github.com/morhetz/gruvbox)
- [X] [jellybeans.vim](https://github.com/nanotech/jellybeans.vim)
- [X] [luthadel.vim](https://github.com/moskytw/luthadel.vim)
- [X] [molokai](https://github.com/tomasr/molokai)
- [X] [onedark.vim](https://github.com/joshdick/onedark.vim)
- [X] [papercolor-theme](https://github.com/NLKNguyen/papercolor-theme)
- [X] [tender.vim](https://github.com/jacoborus/tender.vim)
- [X] [vim](https://github.com/dracula/vim)
- [X] [vim-colors](https://github.com/sherifkandeel/vim-colors)
- [X] [vim-gotham](https://github.com/whatyouhide/vim-gotham)
- [X] [vim-hybrid](https://github.com/w0ng/vim-hybrid)
- [X] [vim-hybrid-material](https://github.com/kristijanhusak/vim-hybrid-material)


