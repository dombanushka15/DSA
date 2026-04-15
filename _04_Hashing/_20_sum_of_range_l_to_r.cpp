#include<bits/stdc++.h>
using namespace std;

 int sumOfRange( const vector<int>& nums , int l, int r){
        int sum = 0;

        for(int i = l; i <= r; ++i){
            sum += nums[i];
        }
    return sum;     
 }
    int main(){
                        //  0 1 2 3 4 5 6 7
        vector<int> nums = {1,2,3,4,5,6,7,8} ;
        
        int l = 2, r = 6;
   
        cout << sumOfRange(nums,l,r) << endl;
          
        return 0;
    }