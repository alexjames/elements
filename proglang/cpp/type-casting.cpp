#include<iostream>

using namespace std;

int main()
{
    // static_cast ---> safe type casts, use instead of normal C-casting
    int i = 10;
    double j = 2.5;
    double d = static_cast<double> (i / j);

    // const_cast ---> change non-const to const and vice-versa
    const int Arr[4] = {1, 2, 3, 4};
    //    Arr[0] = 4;    ---> otherwise not allowed
    const_cast<int&>(Arr[0]) = 4;


    return 0;
}
