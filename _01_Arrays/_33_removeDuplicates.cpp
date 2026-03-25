#include <bits/stdc++.h>
using namespace std;
#include<set>
int removeDuplicates(vector<int>& nums) {
        
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
        cout << arr[i];
    }
}

//Input:
// 1 1 2 2 3 3 4 5 5

//Output:
// 1 2 3 4 5