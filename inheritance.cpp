#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;
public:
    Vehicle(string b, int y) : brand(b), year(y) {}
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// ===== SINGLE INHERITANCE =====
// Car inherits from Vehicle
class Car : virtual public Vehicle {
protected:
    string model;
public:
    Car(string b, int y, string m) : Vehicle(b, y), model(m) {}
    void displayCarInfo() {
        displayInfo();
        cout << "Model: " << model << endl;
    }
};

// ===== MULTILEVEL INHERITANCE =====
// ElectricCar inherits from Car -> which inherits Vehicle
class ElectricCar : public Car {
private:
    int batteryCapacity; // in kWh
public:
    ElectricCar(string b, int y, string m, int bc)
        : Vehicle(b, y), Car(b, y, m), batteryCapacity(bc) {}
    void displayElectricCarInfo() {
        displayCarInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

// ===== MULTIPLE INHERITANCE =====
// Separate Rental class
class Rental {
protected:
    float rentalRate; // per day
public:
    Rental(float rate) : rentalRate(rate) {}
    void displayRentalInfo() {
        cout << "Rental Rate: $" << rentalRate << " per day" << endl;
    }
};

// RentalCar inherits from both Car and Rental
class RentalCar : public Car, public Rental {
public:
    RentalCar(string b, int y, string m, float rate)
        : Vehicle(b, y), Car(b, y, m), Rental(rate) {}

    void displayRentalCarInfo() {
        displayCarInfo();
        displayRentalInfo();
    }
};

// ===== HIERARCHICAL INHERITANCE =====
// Bike also inherits from Vehicle
class Bike : public Vehicle {
private:
    string type; // e.g., Mountain, Road
public:
    Bike(string b, int y, string t) : Vehicle(b, y), type(t) {}
    void displayBikeInfo() {
        displayInfo();
        cout << "Type: " << type << endl;
    }
};

// ======= MAIN FUNCTION =======
int main() {
    // Single Inheritance
    Car myCar("Toyota", 2020, "Camry");
    cout << "=== Car Information (Single Inheritance) ===" << endl;
    myCar.displayCarInfo();
    cout << endl;

    // Multilevel Inheritance
    ElectricCar myElectricCar("Tesla", 2021, "Model 3", 75);
    cout << "=== Electric Car Information (Multilevel Inheritance) ===" << endl;
    myElectricCar.displayElectricCarInfo();
    cout << endl;

    // Multiple Inheritance
    RentalCar myRentalCar("Ford", 2019, "Focus", 45.99);
    cout << "=== Rental Car Information (Multiple Inheritance) ===" << endl;
    myRentalCar.displayRentalCarInfo();
    cout << endl;

    // Hierarchical Inheritance
    Bike myBike("Giant", 2018, "Mountain");
    cout << "=== Bike Information (Hierarchical Inheritance) ===" << endl;
    myBike.displayBikeInfo();
    cout << endl;

    return 0;
}
