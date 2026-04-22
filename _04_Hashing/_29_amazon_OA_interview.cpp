//B = [5 8 10 2 5 5] 
//P[i] = sum of the first “i” numbers in the array 

//for(i=1;i<=n;i++)
//p[i] = p[i-1]+b[i]

//For any integer “y” you can output p[y] in O(1) because all p have been pre-calculated from 1 to N.

//P1[i] = maximum sum of subarray ending at index “i”

//Can be calculated in O(N^2) using brute force. 

#include<bits/stdc++.h>
using namespace std;

int MaxSubarraySum(const vector<int>& b){

    // const = it ensures that the vector is not modified.

int n = b.size()-1;
// -1 because vector was declared as n+1 in main .

int currentsum = b[0];
// currentsum = stores the sum of current subarry.

int maxsum = b[0];
// maxsum = store the maximum sum found.
 
for(int i = 1; i <= n; i++)
    // kadanes algorithm.
{
    currentsum = max(b[i], currentsum + b[i]);
    // here the b[i] = new array.

    maxsum = max(maxsum, currentsum);
    // here update overall maximum sum if so the current is bigger.
}
    return maxsum;
}

int main(){
    int n; 
    cin >> n;
    vector<int> b(n+1);

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int result = MaxSubarraySum(b);

    cout << result;

}