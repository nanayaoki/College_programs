/* Write a CPP to create class Student with appropriate member variable and member 
functions and make use of following  
a. Constructors  
a. Destructors 
b. Inline, static, friend function */
#include <iostream>
#include <string>   
using namespace std;

class Student {
    private:
        string name;
        int age;
        static int studentCount; // Static member to keep track of student count
    public:
        // Constructor
        Student(string n, int a) : name(n), age(a) {
            studentCount++;
            cout << "Constructor called for " << name << endl;
        }

        // Destructor
        ~Student() {
            cout << "Destructor called for " << name << endl;
            studentCount--;
        }

        // Inline function to display student details
        inline void display() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        }

        // Static function to get the current student count
        static int getStudentCount() {
            return studentCount;
        }

        // Friend function to compare ages of two students
        friend void compareAges(const Student &s1, const Student &s2);
};
int Student::studentCount = 0; // Initialize static member
// Friend function definition
void compareAges(const Student &s1, const Student &s2) {
    if (s1.age > s2.age) {
        cout << s1.name << " is older than " << s2.name << endl;
    } else if (s1.age < s2.age) {
        cout << s2.name << " is older than " << s1.name << endl;
    } else {
        cout << s1.name << " and " << s2.name << " are of the same age." << endl;
    }
}
int main() {
    Student s1("Alice", 20);
    Student s2("Bob", 22);

    s1.display();
    s2.display();

    cout << "Total students: " << Student::getStudentCount() << endl;

    compareAges(s1, s2);

    return 0;
} 


