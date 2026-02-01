/* OOPS is a programming paradigm that uses objects and classes to implement real-world entities with features 
like encapsulation, inheritance, polymorphism, and abstraction. 


Example (real-world)

Object: Bank Account

Data: account number, balance

Functions: deposit(), withdraw()
*/

/*
Access Modifiers:
1. Public: Data and methods accessible from anywhere
2. Private: Data and methods accessible only within the class
3. Protected: Data and methods accessible within the class and its derived classes

In c++, members are private by default if no access modifier is specified.
 */

#include <iostream>
#include <string>
using namespace std;

/* Class definition
A class is a blueprint or template used to create objects.
It defines data members (variables) and member functions (methods).
*/
class Teacher
{
    public:
    //Properties/attributes of teacher
    string name;
    string dept;
    string subject;
    double salary;

    //methods/member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void displayInfo()
    {
        cout<<"Teacher Information:"<<endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    /*Object creation
    An object is a real instance of a class.
    It represents a real-world entity and can access the class members.
    */
    Teacher t1;
    t1.name = "Alex";
    t1.dept = "ECE";
    t1.changeDept("CSE");
    t1.subject = "OOPS";
    t1.salary = 75000.00;

    t1.displayInfo();
    
    return 0;
}

/* Output:
Teacher Information:
Name: Alex
Department: CSE
Subject: OOPS
Salary: 75000
*/