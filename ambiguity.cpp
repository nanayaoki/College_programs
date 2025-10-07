#include<iostream>
#include<string>
using namespace std;

class baseA {
    public:
        void display() {
            cout << "Display from Base 1" << endl;
        }
};

class baseB : virtual public baseA {};

class baseC : virtual public baseA {};

class baseD : public baseB, public baseC {};

int main(){
    baseD d;
    d.display();
    return 0;
}