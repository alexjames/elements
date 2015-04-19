#include<iostream>
using namespace std;

template<typename T>
T sum(T Arr[], int size)
{
    T total = 0;
    for (int i = 0; i < size; i++)
    {
        total += Arr[i];
    }
    return total;
}

int main()
{
    int IArr[3] = {2, -3, 54};
    double DArr[5] = {23, 3.0, 6.45, 23, 4};
    int itot = sum(IArr, sizeof(IArr)/sizeof(IArr[0]));
    double dtot = sum (DArr, sizeof(DArr)/sizeof(DArr[0]));
    cout << "Int Arr sum = " << itot << endl;
    cout << "Double Arr sum = " << dtot << endl;
    return 0;
}
