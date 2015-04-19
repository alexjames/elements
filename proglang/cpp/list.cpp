#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> lst;
    lst.push_back(2);
    lst.push_front(1);

    for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
