#include <iostream>
#include <string>
using namespace std;

class bank 
{
    private:                // private members
        int acc_no;
        string name;
        float balance;

    protected:              // accessible only in derived classes
        void setAccountDetails(int acc, string n, float bal) {
            acc_no = acc;
            name = n;
            balance = bal;
        }

    public:                 // accessible everywhere
        void displayAccountDetails() {
            cout << "Account Number: " << acc_no << endl;
            cout << "Name: " << name << endl;
            cout << "Balance: $" << balance << endl;
        }
};  

// Derived class
class customer : public bank {
    public:
        // Public wrapper function that uses the protected method
        void createAccount(int acc, string n, float bal) {
            setAccountDetails(acc, n, bal);  // allowed because setAccountDetails is protected
        }
};

int main() {
    customer c;
    c.createAccount(12345, "John Doe", 1000.50); // uses protected method via derived class
    c.displayAccountDetails();                   // uses public method from base class

    return 0;
}
