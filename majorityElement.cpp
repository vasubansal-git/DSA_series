#include<iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
    vector<int> ans;
    int n = vec.size();

    // Brute force approach.
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;

    // Optimal with 2 pointer approach.

    int i = 0, j = n - 1;
    while(i < j){
        int pairSum = vec[i] + vec[j];
        if(pairSum > target){
            j--;
        }
        else if (pairSum < target){
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

}

int majorityElement(vector<int> nums){
    int n = nums.size();

    // Brute force approach.O(n * n)

    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }

        if(freq > n / 2){
            return val;
        }
    }
    return -1;
}

int main(){
    // Pair sum: return pair in sorted array with target sum.
    
    vector<int> vec = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;
    
    // Majority element in array.

    vector<int> nums = {1, 1, 2, 2, 1};

    cout << "Majority element in the array is: " << majorityElement(nums) << endl;

    return 0;
}