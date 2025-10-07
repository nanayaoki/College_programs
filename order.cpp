#include<iostream>
#include<string>
using namespace std;

class base {
    public:
    base(){ // Base constructor will be called first
        cout << "Base class constructor called" << endl;
    }
    ~base(){    // Base destructor will be called last
        cout << "Base class destructor called" << endl;
    }
};

class derived : public base{
    public :
    derived(){ // Derived constructor will be called after base constructor
        cout << "Derived constructor called " << endl;
    }
    ~derived(){ // Derived destructor will be called before base destructor
        cout << "Derived destructor called " << endl;
    }
};

int main(){
    derived d;
    return 0;   
}