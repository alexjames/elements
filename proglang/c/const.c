#include <stdio.h>
#include <string.h>

// (const int x) and (int const x) are the same

// Format: <data_type> * <pointer_type> X
// (int* const x) is a constant pointer to int
// (const int* x) is a pointer to constant int

// making sure the data does not change WITHIN the function
void const_data(const int a, const char * str)
{
    printf("%d\n", a);
    printf("%s\n", str);

//  str[0] = '\0';  ---> not allowed, str is read-only
//  a = 5; ---> not allowed, a is read-only

//  you can do this, since the pointer is changeable as long as data is unmodified
    str++;
}

// make sure the pointers do not change WITHIN the function
void const_ptr(int * const a, char * const str)
{
    *a = 9;
    str[0] = 'X';

    printf("%d\n", *a);
    printf("%s\n", str);
}

int main()
{
    {
        /* this works without problem */
        char str1[] = "this is on the data segment";
        char str2[30];
        int i = 12;
        strcpy(str2, "this is on the stack");

        const_data(10, str1);
        const_data(i, str2);
    }

    {
        /* change variables to const */

        // this can be const as its on the data segment
        const char str1[] = "this is on the data segment";
        const char str2[30] = {0};
        int i = 12;

//      strcpy(str2, "this is on the stack"); --> you can't strcpy here since str2 is const char

        const_data(10, str1);
        const_data(i, str2);
    }

    {
        /* change variables to const */

        // change to a pointer
        const char* const str1 = "this is on the data segment";
        const char str2[30] = {0};
        int i = 12;

//      strcpy(str2, "this is on the stack"); --> you can't strcpy here since str2 is const char

        const_data(10, str1);
        const_data(i, str2);
    }

    {
        /* This does not work, give warnings for ununsed variables */

        // this can be const as its on the data segment
        const char str1[] = "this is on the data segment";
        const char str2[30] = {0};
        int i = 12;

//      strcpy(str2, "this is on the stack"); --> you can't strcpy here since str2 is const char

//      const_ptr(&i, str1); --> does not work, can't send const object to non-const function
//      const_ptr(&i, str2); --> does not work, can't send const object to non-const function
    }

    {
        /* This does not work, gives warnings for un-used variables */

        // this can be const as its on the data segment
        char * const str1 = "this is on the data segment";
        const char str2[30] = {0};
        char str3[30] = {0};
        char * const str4 = str3;

        // you compiler does not verify that you are pointing to a character array
        const char * const str5;
        int i = 12;

//      const_ptr(&i, str1); --> WILL compile, BUT SEGMENTATION FAULT, you wrote to data segment
//                               This shows that compilers look at data-types, but not the actual data
//                               stored within them

//      const_ptr(&i, str2); //--> does not work, expected ‘char * const’ but argument is of type ‘const char *’ 
        const_ptr(&i, str3);
        const_ptr(&i, str4);
    }

    {
        /* experiement to verify your compiler doesnt check types */

        // change to a pointer
        char str1[] = "this is stored in str1";
        const char * str2 = str1;
        int i = 12;

        const_data(10, str1);
        const_data(i, str2);
    }


    return 0;
}
