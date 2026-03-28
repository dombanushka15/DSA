#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n = 7;
    int arr[] = {8,8,7,7,1,1,2};

    unordered_map<int, int> countMap;

    for(int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }
    
    for(auto it : countMap) {
        cout << "Number " << it.first << " appears " << it.second << " times" << endl;
    }

    return 0;
}