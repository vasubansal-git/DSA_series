#include <iostream>
using namespace std;

// function defination
/*
void printHello(){ // koi value ni return kr raha hai tabhi void likha hai
    cout << "Hello world" << endl;
}
*/

// sum of two numbers

int sum(int a, int b){
    int sum = a + b;
    return sum;
}


//min of 2 numbers

int min(int a, int b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}


// Calculate sum of numbers from 1 to n

int sumN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}


//Calculate N factorial

int factorialN(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}


// Calculate sum of digits of a number:

int sumOfDigits(int num){
    int sumDigit = 0;
    while(num > 0){
        int lastDigit = num % 10;
        num = num / 10;

        sumDigit += lastDigit; 
    }
    return sumDigit;
}


//Calculate nCr binomial coefficient for n & r:

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}


// WAP to check if a number is prime or not:

void isPrime(int n){
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){
            cout << "The number is: Non Prime" << endl;
            break;
        }else{
            cout << "The number is: Prime" << endl;
            break;
        }
    }
}


// WAP to print all prime numbers from 2 to n:

bool isPrime(int num){
    if(num < 2){
        return false;
    }

    for(int i = 2; i <= num-1; i++){
        if(num % 2 == 0){
            return false;
        }
    }
    return true;
}


//Wap to print fibonacci series:

void fibonacci(int n){
    int a = 0, b = 1, c;
    cout << "Fibonacci series: ";

    for(int i = 0; i < n; i++){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    // function call / invoke
    /*
    int result = sum(2, 6);
    cout << "The sum of a and b is: " << result << endl;
    */
    
    //Q1:
    cout << "min = " << min(123, 432) << endl;

    
    //Q2:
    cout << "Sum from 1 to N is: " << sumN(10) << endl;
    cout << "Sum from 1 to N is: " << sumN(5) << endl;
    
    
    //Q3:
    cout << "Factorial of N numbers are: " << factorialN(4) << endl;
    cout << "Factorial of N numbers are: " << factorialN(5) << endl;
    

    //Q4:
    cout << "Sum: " << sumOfDigits(2356) << endl;

    //Q5:
    int n = 6, r = 3;
    cout << nCr(n, r) << endl;
    

    //Q6:
    int n;
    cout << "Enter your number to check: ";
    cin >> n;

    isPrime(n);
    

    //Q7:
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are: ";

    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    //Q8:
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    fibonacci(n);

    return 0;
}