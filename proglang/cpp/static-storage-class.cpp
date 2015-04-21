/***

You can have static data members and member functions in a class. But you can't
have the entire class as static. Static member functions can only work with 
static data members.

***/

#include<iostream>
using namespace std;

class Num
{
private:
    static int Numone;
//  static int Numtwo = 10;  ---> does not work, ISO C++ prohibits in-class initialization
    static int Numtwo;
public:
    static int global_num;
    static int get_five(){ return 5; }
    static int get_sum(){ return Numone + Numtwo; }
};

// Initializing static members, these ones were private
int Num::Numone = 8;
int Num::Numtwo = 10;

int Num::global_num = 3;

int main()
{
    cout << Num::get_five() << endl;

//  Num::Numtwo = 12; ---> does not work, since its a private variable
    Num::global_num =  7;

    cout << Num::get_sum() << endl;
    return 0;
}
