//Using if-else statement
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float num1,num2;
    char ch;
    float result;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the operator (+,-,*,/,%) : " ;
    cin>>ch;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    
    if(ch == '+')
    {
        result = num1+num2;
        cout<<fixed<<setprecision(2)<<num1 << " + " <<fixed<<setprecision(2)<<num2 << " is " <<result;
    }
    else if(ch == '-')
    {
        result = num1 - num2;
        cout<<fixed<<setprecision(2)<<num1 << " - " <<fixed<<setprecision(2)<<num2 << " is " <<result;
    }
    else if (ch == '*')
    {
        result = num1 * num2;
        cout<<fixed<<setprecision(2)<< num1 << " * " <<fixed<<setprecision(2)<< num2 << " is " <<result;
    }
    else if(ch == '/')
    {
            result = num1 / num2;
            cout<<fixed<<setprecision(2)<<num1 << " / " <<fixed<<setprecision(2)<<num2 << " is " <<result;
    }
    else if(ch == '%')
    {
            cout<<" % operator does not work for floating integer data types.";
    }
    else
    {
        cout << "You entered an unknown operator : ";
    }

    return 0;

}

//Using switch case statement
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << fixed << setprecision(3);

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if (num2 == 0)
                cout << "Error: Division by zero!";
            else
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        case '%':
            cout << num1 << " % " << num2 << " = " << fmod(num1, num2);
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
