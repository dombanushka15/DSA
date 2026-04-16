/*
Find count of shortest/largest subarrays with sum k in given array
*/
#include<bits/stdc++.h>
using namespace std;

int countShortestSubarray(vector<int>&arr,int k){
    int n = arr.size();
    // minimum length = it stores the smallest length(found).
    int minimumLength = 0;
    // count = number of subarrays with the smallest length
    int count = 0; 
   
    // i will denote start point
    // j will denote end point

    for(int start = 0; start < n; start++){
        int sum = 0;

        for(int end = start; end < n; end++){
        sum+=arr[end];
        // formula = ending index - starting index + 1
        // in arrays generally index start from 0 to calculate length , hence include both sides.
              
        int length = end - start + 1;
            if(sum==k){
                 if(length < minimumLength)
                  length = minimumLength;
                  count = 1;
                  // new minimumLength found
            }
            else if(length == minimumLength)
            count++;
        }
    }
     return count;
}

int countLargestSubarray(vector<int>& arr, int k) {
    int n = arr.size();

    int maximumLength = 0;
    // maximumLength = stores the longest subarray length with sum = k

    int count = 0;
    // count = number of subarrays with the smallest length

    
    // i will denote start point
    // j will denote end point

    for(int start = 0; start < n; start++){
        int sum = 0;

        for(int end = start; end < n; end++){
            sum += arr[end];
            int length = end - start + 1;

            if(sum == k){
                if(length > maximumLength){
                    maximumLength = length;
                    count = 1;   
                    // new maximumLength found
                }
                else if(length == maximumLength){
                    count++;
                }
            }
        }
    }
    return count;
}
  int  main(){
     
    vector<int> arr = {1,2,3,4,5};

    int k = 5;

    cout << countShortestSubarray(arr,k) << endl;
    cout << countLargestSubarray(arr,k) << endl;

    return 0;
  }