#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(){
    char *buff[100], fn[10];
    int fd, n, i;
    printf("Entre com o nome de um aquivo novo: ");
    scanf("%s", fn);
    printf("Entre com um texto qualquer: ");
    scanf("%s", buff);
    fgets(buff, 100, stdin);
    fd = open(fn,O_CREAT|O_WRONLY);
    n = write(fd,buff,strlen(buff));
    close(fd);

    printf("\n\nVeja o conteúdo do arquivo criado\n");
    //chmod 666 <file>
}
