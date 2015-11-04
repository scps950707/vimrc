gcc -M -I ~/include *.[ch] | sed -e 's/[\\ ]/\n/g'|sed -e '/^$/d' -e '/\.o:[ \t]*$/d'|ctags -L - --sort=yes --c++-kinds=+px --fields=+iaS --extra=+q
