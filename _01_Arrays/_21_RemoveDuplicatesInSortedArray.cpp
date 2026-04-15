#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        set<int> stt;
        
        for(int i = 0; i < nums.size(); i++){
            stt.insert(nums[i]);
        }
        // set:
        // 1 2 3 4 5

        int i = 0;
        for(auto it : stt){
            nums[i] = it;
            i++;
        }

        return stt.size();
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    // 1 1 2 2 3 3 4 5 5
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int index = removeDuplicates(arr);
    // Updated arr
    // 1 2 3 4 5 3 4 5 5

    for(int i = 0; i < index; i++){
        cout << arr[i] << endl;
    }
}


//Input:
// 1 1 2 2 3 3 4 5 5

//Output:
// 1 2 3 4 5