#include <iostream>
#include <string>
using namespace std;

class OnlineShopee {
public:
    // Function to make payment via Card (Credit/Debit)
    void makePayment(string cardNumber, string expiryDate, string cvv, int cardFlag) {
        cout << "\nProcessing payment via Card..." << endl;
        cout << "Card Number: " << cardNumber << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "CVV: " << cvv << endl;
        cout << "Payment successful via Card!\n" << endl;
    }

    // Function to make payment via UPI
    void makePayment(string upiID) {
        cout << "\nProcessing payment via UPI..." << endl;
        cout << "UPI ID: " << upiID << endl;
        cout << "Payment successful via UPI!\n" << endl;
    }

    // Function to make payment via Net Banking
    void makePayment(string bankName, string userID, string password, double netBankFlag) {
        cout << "\nProcessing payment via Net Banking..." << endl;
        cout << "Bank: " << bankName << endl;
        cout << "User ID: " << userID << endl;
        // Note: Do not display passwords in real apps
        cout << "Payment successful via Net Banking!\n" << endl;
    }
};

int main() {
    OnlineShopee shopee;

    int choice;
    cout << "=== Online Shopee Payment System ===" << endl;
    cout << "Select Payment Method:\n";
    cout << "1. Credit/Debit Card\n";
    cout << "2. UPI\n";
    cout << "3. Net Banking\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            string cardNumber, expiryDate, cvv;
            cout << "Enter Card Number: ";
            cin >> cardNumber;
            cout << "Enter Expiry Date (MM/YY): ";
            cin >> expiryDate;
            cout << "Enter CVV: ";
            cin >> cvv;
            shopee.makePayment(cardNumber, expiryDate, cvv, 0); // cardFlag as int
            break;
        }
        case 2: {
            string upiID;
            cout << "Enter UPI ID: ";
            cin >> upiID;
            shopee.makePayment(upiID);
            break;
        }
        case 3: {
            string bankName, userID, password;
            cout << "Enter Bank Name: ";
            cin >> bankName;
            cout << "Enter User ID: ";
            cin >> userID;
            cout << "Enter Password: ";
            cin >> password;
            shopee.makePayment(bankName, userID, password, 0.0); // netBankFlag as double
            break;
        }
        default:
            cout << "Invalid choice! Please try again." << endl;
    }

    return 0;
}
