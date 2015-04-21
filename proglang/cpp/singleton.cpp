/***

Singletone Design Pattern

***/

#include<iostream>
using namespace std;

class TheOne
{
    public:
        static TheOne* Instance();
        int do_stuff(){ return 9; }
    private:
        TheOne(){};  // can also be protected
        static TheOne* inst;
};

// Initialize inst to NULL
TheOne* TheOne::inst = NULL;

TheOne* TheOne::Instance()
{
    if (!inst)
        inst = new TheOne();
    return inst;
}

int main()
{
//    TheOne Neo;   ---> does not work, you cannot instantiate a class
//                       whose constructor is private (basic funda)
    cout << TheOne::Instance()->do_stuff() << endl;
    return 0;
}
