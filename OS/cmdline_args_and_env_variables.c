#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[], char *arge[])
{
    int i;

    for (i = 0; argv[i] != NULL; i++)
    {
        printf("argv[%d]=%s\n", i, argv[i]);
    }

    for (i = 0; arge[i] != NULL; i++)
    {
        printf("%s\n", arge[i]);
    }

    return 0;
}
