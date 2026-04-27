/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements 
sequence.

You must write an algorithm that runs in O(n) time.

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
Example 3:

Input: nums = [1,0,1,2]
Output: 3
 
*/

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) 
//it finds the length of the longest sequence of consecutive numbers
{
    unordered_set<int> consecutive(nums.begin(), nums.end());
    //Removes duplicates
    //Allows O(1) lookup
    int ans = 0;

    for (int x : consecutive) 
    // We check every number as a potential starting point.
    {
        if (!consecutive.count(x - 1)) { 
            //If x - 1 is NOT present = x is the start.
            //If x - 1 exists → skip (already counted earlier).
            int y = x;
            while (consecutive.count(y)) y++;
            // Keep increasing y while numbers exist
            //Stops when sequence breaks
            ans = max(ans, y - x);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {100,4,200,1,3,2};
    cout << longestConsecutive(nums);
}

//Each number is processed only once
//No sorting needed