#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.size()== 0)
    return 0;

    int i=0;
    int j;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
           i++;
           nums[i] = nums[j];
        }
    }
        return i + 1;
}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int index = removeDuplicates(arr);

    for(int i = 0; i < index; i++){
        cout << arr[i] << " ";
    }
}

//Input:
// 1 1 2 2 3 3 4 5 5

//Output:
// 1 2 3 4 5