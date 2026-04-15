#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {1,2,1,2,1};

    int hashArr[10] = {0};

    for(int i = 0; i < n; i++) {
        hashArr[arr[i]]++;
    } 

    for(int i = 0; i < 10; i++) {
        if(hashArr[i] != 0) {
            cout << "Number " << i << " appears " << hashArr[i] << " times" << endl;
        }
    }

    return 0;
}