#include <iostream>
// #include <vector>
using namespace std;

int main(){
    
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // For finding sub arrays.

    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout << arr[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }

    //For Maximum subarray sum. TC = O(n * n)
    
    int maxSum = INT16_MIN;
    for(int start = 0; start < n; start++){
        int currSum = 0;
        for(int end = start; end <= n; end++){
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "Max Subarray sum = " << maxSum << endl;

    //Kadane's Algorithm.
    // Leet code solution.
    return 0;
}