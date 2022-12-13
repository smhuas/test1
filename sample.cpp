#include <iostream>
using namespace std;

class base {
public:

};

class derived : public base {

};

int main()
{
    base b;
    derived d;

    cout<<"Hello "<<endl;
    return 0;
}