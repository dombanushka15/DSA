#include <iostream>
#include <map>
using namespace std;

int main() {
    int n = 6;
    int arr[] = {1,3,4,5,5,8};

    map<int, int> countMap;


    for(int i = 0; i < n; i++) {
        countMap[arr[i]]++;  
    }

    
    for(auto it : countMap) {
        cout << "Number " << it.first << " appears " << it.second << " times" << endl;
    }

    return 0;
}