#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int topnum = 0;

void *print_thread(void *arg)
{
    int *num = arg;
    printf("I am thread %d...\n", topnum++);
    
    pthread_t thr;
    pthread_create(&thr, NULL, print_thread, NULL);

    pthread_exit(NULL);
}


int main()
{
    pthread_t threads[5];
    int *intargs[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        intargs[i] = malloc(sizeof(int *));
        *(intargs[i]) = i;
        pthread_create(&threads[i], NULL, print_thread, NULL);
    }

    pthread_exit(NULL);
    return 0;
}
