// First STL Container
#include <iostream>
#include <vector>
using namespace std;

int main(){

    //Syntax:
    // vector<int> vec; //0

    // vector<int> vec = {1, 2, 3}; //3

    vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    
    cout << "Size = " << vec.size() << endl;

    vec.push_back('g');
    vec.push_back('h');
    vec.push_back('i');
    
    cout << "After push back size = " << vec.size() << endl;

    vec.pop_back(); //i

    cout << "After pop back size = " << vec.size() << endl;

    for(char val : vec){
        cout << val << " ";
    }
    cout << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;
    

    //Static and Dynamic allocation of memory
    // Arrays are static because array size is fixed.
    // Vectors are dynamic because vectro size is not fixed.

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vec.pop_back();
    vec.pop_back();

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;


    return 0;
}