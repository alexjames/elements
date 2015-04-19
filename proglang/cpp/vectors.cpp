/***

Vectors -> O(1) push/pop, O(n) insert/erase

***/


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vt;

    // push/pop (back)
    vt.push_back(3);
    vt.push_back(4);
    vt.push_back(5);
    vt.push_back(6);
    vt.pop_back();

    // insert with iterator
    vector<int>::iterator x = vt.begin();
    vt.insert(x, 12);

    // erase with iterator
    // DANGEROUS: if you index a position that does not exist, segmentation fault,
    //            kind of invalidates the purpose of an iterator
    vt.erase(vt.begin() + 1);
    
    // print the first element, C-style, NOT recommended
    cout << "first element: " << vt[0] << endl;

    for (vector<int>::iterator i = vt.begin(); i != vt.end(); i++)
    {
        cout << *i << endl;
    }

    vector<int> vec(50);



    return 0;
}
