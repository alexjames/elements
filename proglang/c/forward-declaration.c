#include<stdio.h>

/* Forward declaration */
struct b;

struct a
{
    struct b* bptr;
    int x;
};

struct b
{
    struct a* aptr;
    int x;
};

int main()
{
    struct b b_obj;
    printf("sizeof b = %d\n" , sizeof(b_obj));
    return 0;
}
