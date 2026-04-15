#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(const vector<int>& nums){
    
    int n = nums.size();
    vector<int> prefix(n+1,0);

    for(int i = 1; i <= n; ++i){
    prefix[i]=prefix[i-1] + nums[i];
    }
    return prefix ;
}
  int prefixxSumm (const vector<int>& prefix , int l ,int r){
     return prefix[r]- prefix[l-1];
  }

  int main(){
                     // 0 1 2 3 4 5 6 7 8
                          // 4+5+6+7+8=30(adding up)
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    vector<int> prefix =prefixSum (nums);

    int l = 3, r = 7;

    cout << prefixxSumm(prefix,l,r) << endl;

    return 0;
  }