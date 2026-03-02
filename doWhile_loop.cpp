#include<iostream>
using namespace std;

int main(){
     do {
        cout << "Hello world" << endl;
     } while(3 > 5);

    // Q1. print numbers from 1 to 10 using do-while loop
    int n = 10;
    int i = 1;
    do {
        cout << i << " ";
        i++;
    }while(i <= n);

    cout << endl; 

    // Q2. Check if a number is prime or not.
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;

    bool isPrime = true;
    for(int i = 2; i <= n-1; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << "It is a Pime number" << endl;
    } else {
        cout << "It is not a Prime number" << endl;
    }

    // Q2. for optimization solution
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;

    bool isPrime = true;
    for(int i = 2; i*i <= n; i++){
        if(n%2 == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << "It is a prime number" << endl;
    } else{
        cout << "It is not a prime number" << endl;
    }

    return 0;
}