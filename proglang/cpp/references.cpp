#include<iostream>
using namespace std;

void fun(int& num)
{
    num = 10;
}

int main()
{
    int x = 12;
    fun(x);
    cout << "x is " << x << endl;
    return 0;
}
