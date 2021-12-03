#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
int main(){
    char d[10];
    DIR *p;
    struct dirent *d1;
    printf("Entre com um nome de um diretório:\n");
    scanf("%s",d);
    p = opendir(d);
    if( p==NULL ){
        perror("Diretório não encontrado");
        exit(-1);
    }
    while( d1 = readdir(p) )
        printf("%s\n",d1->d_name);
}

//readdir -> https://man7.org/linux/man-pages/man2/readdir.2.html