/*
Given an array of integers nums and an integer target, return indices of the two numbers such that 
they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same 
element twice.
You can return the answer in any order.
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSums(const vector<int>& arr , int target){
     // target = sum we want
    unordered_map<int , int> sum;

    for(int i = 0; i < arr.size(); i++) {

        int complement = target - arr[i];
        // arr[i] + complement = target
        // target - current value

        if(sum.find(complement) != sum.end())
        // sum.find(complement) checks if complement is already in the map
        // If found then  we already saw a number that forms the pair
         {
            return {sum[complement], i};
            // index of previously stored number
            // Returns both indices
        }

        sum[arr[i]] = i;
    }

    return {};
    // Returns empty vector if no solution exists
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    vector<int> result = twoSums(arr, target);

    if(result.size() == 2)
    //If we got 2 indices then solution exists
        cout << result[0] << " " << result[1];
    else
        cout << "No solution found";
        // Prints this when / if no pair found

    return 0;
}
/*example = 
5
2 7 11 15 3
9
*/