#include<stdio.h>
#include<string.h>
#include<unistd.h>
/* #define DEBUG(format, args...) printf("[%s:%d] "format, __FILE__, __LINE__, ##args) */
#define DEBUG(format, args...)
#define MAXLEN 50
int main(int argc, char *argv[])
{
  char line[MAXLEN];
  while(fgets(line,MAXLEN,stdin))
  {
    line[strlen(line)-1]='\0';
    char tmp[strlen(line)+1];
    strncpy(tmp,line,strlen(line)+1);
    DEBUG("%s\n",line);
    DEBUG("%s\n",tmp);
    char *pch;
    pch = strtok (line,"/");
    pch = strtok (NULL,"/");
    pch = strtok (NULL,"/");
    DEBUG("%s\n",pch);
    printf("ctags --sort=yes --c++-kinds=+px --fields=+iaS --extra=+q -I./libc6-ignore -f %s %s\n",pch,tmp);
    printf("echo -e \"Build Tag:[%s]\"\n",pch);
    /* execlp("ctags","ctags","--sort=yes","--c++-kinds=+px","--fields=+iaS","--extra=+q","-I./libc6-ignore","-f",pch,tmp,NULL); */
  }
  return 0;
}
