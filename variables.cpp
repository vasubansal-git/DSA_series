#include <iostream>
using namespace std;

int main(){

    //Variables example
    // a= 5
    //b = 10
    // age = 25

    int age = 25; //declaration and initialization of variable age of type int
    cout << sizeof(age) << endl; //prints size of variable age in bytes
    cout << "My age is: " << age << endl;

    char grade = 'A';
    cout << "Grade is: " << grade << endl;

    float PI = 3.14f; //f is used to indicate float literal
    cout << "Value of pi is: " << PI << endl;

    bool is_safe = true;
    cout << "Is it safe?: " << is_safe << endl; //prints 1 for true and 0 for false

    double price = 100.99;
    cout << "Price is: " << price << endl; //double can store larger decimal values than float

    //Type casting: converting one data type to another
    char Grade = 'A'; //65 in ASCII
    char grade = 'a'; //97 in ASCII

    int value = Grade; //implicit type casting from char to int
    int value2 = grade;

    cout << "ASCII value of grade " << Grade << " is: " << value << endl;
    cout << "ASCII value of grade " << grade << " is: " << value2 << endl;

    double price = 100.99;
    int new_price = price;
    cout << "Price is: " << new_price << endl;

    return 0;
}