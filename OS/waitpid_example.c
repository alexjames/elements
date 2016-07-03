#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{

    int status, x;
    int i;

    for (i = 0; i < 4; i++)
    {
        x = fork();
        if (x == 0)
        {
            printf("I is child, my pid = %d\n", getpid());
            sleep(2);
            exit(i + 1);
        }
    }


    while (1)
    {
        sleep(1);
        x = waitpid(-1, &status, WNOHANG);

        if (x == -1)
            break;

        if (WIFEXITED(status))
        {
            printf("child %d exit status = %d\n", x, WEXITSTATUS(status));
        }
    }
    printf("parent done\n");
}

