#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void changeArr(int arr[], int size){
    cout << "In function\n";
    for(int i = 0; i < size; i++){
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){ //FOUND
            return i;
        }
    }
    return -1; //FOUND
}

void reverseArray(int arr[], int size){
    int start = 0, end = size -1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int prodArray(int arr[], int size){
    int prod = 1;
    for(int i = 0; i < size; i++){
        prod *= arr[i];
    }
    return prod;
}

int main(){

    //Syntax
    int marks[5] = {99, 100, 54, 36, 88};
    int size = sizeof(marks);
    cout << sizeof(marks)/sizeof(int) << endl;
    int size = 5;

    double price[] = {99.99, 100.89, 105.67, 30.00};

    //Accessing ---------------------------------------------------------------------------------

    cout << marks[3] << endl;
    marks[0] = 103;
    cout << marks[0] << endl;

    // Looping for accessing ------------------------------------------------------------------
    for(int i = 0; i < size; i++){
        cout << marks[i] << " ";
    }
    cout << endl;

    //Q1. find smallest and largest number
    // smallest
    
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    for(int i = 0; i < size; i++){
        // if(nums[i] < smallest){
        //     smallest = nums[i];
        // }
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "Smallest number is: " << smallest << endl;
    cout << "Largest number is: " << largest << endl;

    //Q2. Find smallest and largest number with index

    int minIndex = 0;
    int maxIndex = 0;
    for(int i = 0; i < size; i++){
        if(nums[i] < nums[minIndex]){
            minIndex = i;
        }
        if(nums[i] > nums[maxIndex]){
            maxIndex = i;
        }
    }
    cout << "Smallest number have index: " << minIndex << endl;
    cout << "Largest number have index: " << maxIndex << endl;

    // Pass by reference ---------------------------------------------------------------------------------------------------
    
    int arr[] = {1, 2, 3};
    changeArr(arr, 3);

    cout << "After change\n";
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Linear search:- O(n) ---------------------------------------------------------------------------------------------------------
    
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 50;

    cout << linearSearch(arr, size, target) << endl;

    //Reverse an array ---------------------------------------------------------------------------------------------------------
    //Two pointer approach:- O(n)
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    reverseArray(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //Q1. WAP to calculate sum and product of all numbers in an array
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 10};
    int size = 8;

    cout << "The sum of all numbers: " << sumArray(arr, size) << endl;
    cout << "The product of all numbers: " << prodArray(arr, size) << endl;
    

    //Q2. WAP to swap max & min number of array

    int arr[] = {20, 89, 90, 13, 24, 5};
    int size = sizeof(arr)/sizeof(int);
    
    int minIndex = 0;
    int maxIndex = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }
    // int temp = arr[minIndex];
    // arr[minIndex] = arr[maxIndex];
    // arr[maxIndex] = temp;
    swap(arr[minIndex], arr[maxIndex]);

    cout << "After swapping: " << endl;
    printArray(arr, size);
    
    return 0;
}