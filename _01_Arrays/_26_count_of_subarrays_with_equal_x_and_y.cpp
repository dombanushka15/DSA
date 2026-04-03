/*
n -> array size;
x, y ;

arr(n) -> with values x, y till n-1 index

Ouput the number of subarrays with equal x and y count

Explanation:
n = 6
x = 3, y = 4
arr = {3, 4, 3, 3, 4, 4}

Valid subarrays = {3, 4}, {3, 4, 3, 3, 4, 4}, {4, 3}, {3, 4} , {3, 3, 4, 4}, {4, 3, 3, 4}

Output:
6

*/

#include<bits/stdc++.h>
using namespace std;

int validSubarrays(vector<int> arr, int x, int y){
        int total = 0;
        int n = arr.size();

        for(int i = 0; i < n; i++) {

        int countx = 0;
        int county = 0;

        for(int j = i; j < n; j++) {
            if(arr[j] == x) 
            countx++;

            else if(arr[j] == y) 
            county++;

            if(countx==county) {
                total++;
            }
        }
    }
    return total;
}
int main(){
    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;
    vector<int> arr(n);

    for(int i =0; i< n; i++){
        cin >> arr[i];
    }
    cout << validSubarrays(arr, x, y);

}