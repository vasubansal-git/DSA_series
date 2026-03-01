#include <iostream>
using namespace std;

int main() {

    int n = -45;
    //Agar yeh condition true hogi to if block execute hoga otherwise else block execute hoga
    //agar else condition na ho or condition false hoje to kuch bhi print nahi hoga

    if (n >= 0){
        cout << "n is positive" << endl;
    } else {
        cout << "n is negative" << endl;
    }

    // // age checking program
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

    // Ternary operator -----------------------------------------------------------------------------------------------

    // condition ? stt1 : strr2;

    int n = -45;

    cout << (n >= 0 ? "Positive" : "Negative") << endl;

    // Loops------------------------------------------------------------------------------------------------------------

    // While loop

    // while (true) {
    //     // code run
    // }

    // Q1. Print numbers 1 to 10
    int count = 1;

    while(count <= 10){
        cout << count << " ";
        count ++;
    }

    cout << endl;

    // Q2. Print numbers 1 to n

    int n;
    cout << "Enter your number: " << endl;
    cin >> n;

    int i = 1;
    while(i <= n){
        cout << i << " ";
        i ++;
    }

    cout << endl;

    // For loops

    // for(initialization; condition; updation){
    //     // code run
    // }

    // 
    
    // Q1. Sum of numbers from 1 to n

    int n = 50;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "Sum: " << sum;

    int n = 50;
    int i = 1;
    int sum = 0;
    while(i <= n){
        sum = sum + i;
        i++;
    }

    cout << "Sum is: " << sum;

    // break -> loop se bhar aajenge(special reserved word)

    int n = 50;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
        if (i == 5){
            break;
        }
    }
    cout << "Sum: " << sum;

    // Q2. Sum of all odds numbers from 1 to N

    // For loop
    int n = 10;
    int oddSum = 0;

    for(int i = 1; i <= n; i++){
        if (i % 2 != 0){
            oddSum = oddSum + i;
        }
    }
    // 1 + 3 + 5 + 7 + 9 = 25

    cout << "Sum of all odd numbers from 1 to " << n << ": " << oddSum;

    int n = 10;
    int evenSum = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            evenSum += i;
        }
    }
    cout << "Sum of all even numbers from 1 to " << n << ": " << evenSum << endl;

    // While loop

    int n = 10;
    int oddSum = 0;
    int i = 1;
    while(i <= n){
        if (i % 2 != 0){
            oddSum += i;
        }
        i++;
    }

    cout << "Sum of all odd numbers from 1 to " << n << ": " << oddSum << endl;



    return 0;
}