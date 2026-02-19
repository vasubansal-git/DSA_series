#include <iostream>
using namespace std;

int main() {

    int n = -45;
    // Agar yeh condition true hogi to if block execute hoga otherwise else block execute hoga
    // agar else condition na ho or condition false hoje to kuch bhi print nahi hoga

    if (n >= 0){
        cout << "n is positive" << endl;
    } else {
        cout << "n is negative" << endl;
    }

    // age checking program
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18){
        cout << "Yor cannot vote" << endl;
    } else {
        cout << "You can vote" << endl;
    }

    // even and odd

    int n;
    cout << "Enter your number: ";
    cin >> n;

    if (n % 2 == 0){
        cout << "Your number " << n << " is Even" << endl;
    } else {
        cout << "Your number " << n << " is Odd" << endl;
    }


    // grading program
    
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90){
        cout << "Your grade is A";
    } else if (marks >= 80 && marks < 90){
        cout << "Your grade is B";
    }else if (marks >= 70 && marks < 80){
        cout << "Your grade is C";
    } else {
        cout << "Your grade is D";
    }

    //Find character lowercase or upperCase
    
    char ch;
    cout << "Enter char: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "Your character is lowerCase" << endl;
    } else if (ch >= 'A' && ch <= 'Z'){
        cout << "Your character is upperCase" << endl;
    } else {
        cout << "Invalid Character you entered" << endl;
    } 

    // According to ASCII

    char ch;
    cout << "Enter char: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90){
        cout << "Your char is upperCase" << endl;
    } else if (ch >= 97 && ch <= 122){
        cout << "Your char is lowerCase" << endl;
    } else {
        cout << "You entered invalid char" << endl;
    }

    return 0;
}