#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age; //taking input from user and storing it in variable age
    cout << "Your age is: " << age << endl;

    double price;
    cout << "Enter the price: ";
    cin >> price;
    int new_price = price; //type casting from double to int
    cout << "The price is: " << new_price << endl;

    //Operators in cpp

    //Arithmetic Operators(+, -, *, /, %)
    int a = 5, b = 10;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "b % a = " << b % a << endl;

    //Relational Operators(==, !=, >, <, >=, <=)
    cout << (3 < 5) << endl; //1 (true)
    cout << (3 > 5) << endl; //0 (false)

    cout << (3 <= 3) << endl; //1 (true)
    cout << (4 >= 6) << endl; //0 (false)

    cout << (5 == 5) << endl; //1 (true)
    cout << (5 != 5) << endl; //0 (false)

    //Logical Operators(&&(AND), ||(OR), !(NOT))
    cout << (3 > 1) << endl; //1 (true)
    cout << !(3 > 1) << endl; //0 (false)

    cout << ((3 > 1) || (3 < 1)) << endl; //(3 > 1) is true so overall expression is true i.e. 1
    cout << ((3 < 1) && (5 > 2)) << endl; //(3 < 1) is false so overall expression is false i.e. 0

    //Unary Operators(++, --)

    //Increment unary operator(a++ or ++a)

    int x = 10;
    int b = x++;
    int c = ++x;
    cout << x << endl;
    cout << b << endl;
    cout << c << endl;

    //Decrement unary operator(a-- or --a)
    int y = 10;
    int d = y--;
    int e = --y;

    cout << y << endl; //9
    cout << d << endl; //10
    cout << y << endl; //8
    cout << e << endl; //8


    return 0;
}