//Global and Local Variables in c++
/* #include <iostream>
using namespace std;

int globalVar = 50;

int main() {
    int localVar = 100;
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    return 0;
}
 */
//Gloabal variable can be accessed anywhere in the program
//Local variable can be accessed only within the function

/* Output:
Global Variable: 50
Local Variable: 100
*/

//  Accessing global and local variables through functions
/* #include <iostream>
using namespace std;

int glo = 40; //Global Variable

void display()
{
    int a ;
    cout << glo <<endl;
}

int main()
{
    int glo = 10;
    cout<<glo<<endl;
    display();

return 0;
} */

/*Output:
10 //The first preference is given to local variable
40
*/


//Scope Resolution Operator(::)

/*
    If any global variables are declared with the same name as local variables,
    the local variables take precedence within their scope.

    To access the global variable ,the scope resolution operator(::) is used.

    //Example :

    #include <iostream>
    using namespace std;

    int x = 10;
    int main() 
    {
        int x = 40;
        cout<<"Local x : "<< x <<endl;//Output:40
        cout<<"Global x : "<< ::x <<endl;//Output:10
        return 0;
    }
*/