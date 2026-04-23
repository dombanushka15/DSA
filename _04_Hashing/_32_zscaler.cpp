/*
Understanding :-> You are given an array “A”; in one step select largest element of array and convert it to second largest element of the array 

-> Tell the minimum number of steps such that all elements become equal  

Observation :- All elements in final array will be equal to the smallest element of the array 

-> Find largest element of array and second largest element of array -> O(N.) 

-> Let say largest element is at index “i” -> b[i] = second largest 

-> Keep doing this until all array elements become equal 

-> O(N*N.)  
-> u = 0
   while(u==0){
  -> largest(b) 
  -> second_largest(b) 
  -> b[i] = second_largest 

  -> if all array elements are equal u = 1  
}
  output = take distinct values
  =5
  = 1 1 2 2 3
  = (3-1)*(5-1)
  = 2*4
  = 8
*/
#include<bits/stdc++.h>
using namespace std;
 
int minimumNumberOfSteps(vector<int>& arr){

    sort(arr.begin(),arr.end());
    // the sorting part is in ascending order.

    int n = arr.size();
    int steps = 0;

    for(int i = n-1; i > 0; i--){
        // the for loop helps in iterating it backwards(decrement)
        // we wont be able to add i>n because n-1 is not greater than n.
        // whenever it runs always the new is found.

        if(arr[i]!=arr[i-1])
        //Checks if the current element is different from the previous one

         //as of now the array is sorted:
         // Equal elements are adjacent.
         // Here ,This condition detects a new distinct element.

        steps+=(n-1);
        //Every time a new distinct element is found:
        //Add (n-1) to steps
        // logic = 
        //It adds the same value repeatedly.
        //doesnt depend on i.
    }
    return steps;
}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    cout << minimumNumberOfSteps(arr) << endl;

    return 0;
}