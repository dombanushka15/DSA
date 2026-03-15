#include <bits/stdc++.h>
using namespace std;



int main(){
    int num;
    cin >> num;

    
    int copy = -1;

   while(copy != num){

    int digit[4] = {0};

    int desc =  0;
    int assc = 0;

         
    copy = num;

        int i = 0;
        int temp = num;
        while(temp > 0){
            digit[i] = temp % 10;
            i++;
            temp/=10;
        }

        // Accending
        sort(digit, digit + 4);

        // 1 2 3 4 -> digit array
        for(int i = 0; i < 4; i++){
            assc = assc * 10 + digit[i];
        }

        // assc = 1234


        // Decending
        // 4 3 2 1
        reverse(digit, digit + 4);

        for(int i = 0; i < 4; i++){
            desc = desc * 10 + digit[i];
        }

        // desc = 4321

        num = desc - assc;
        cout << num << endl;
   }

    
}