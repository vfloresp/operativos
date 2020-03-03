// cuatro.cc

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("argv[0]= %s\n", argv[0]);

    printf("\n--> ps -l **\n");
    system("ps -l");

    

    printf("\n--> ls -al**\n");
    system("ls -al");

    system("argumentos.exe hola 345");

    

    return 0;
}
