/*
Input:
n = 5;
d = [10, 20, 30, 15, 5] (km)
t = [4, 9, 2, 8, 30] (mins)

Output
s = [2.5,2.22,15,1.875,0.167] (km/min)
*/


#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

   float distance[n],time[n],speed[n];

   for(int i=0;i<n;i++)
   cin >> distance[i];

   for(int i=0;i<n;i++)
   cin >> time[i];

   for(int i=0;i<n;i++)
   speed[i]=distance[i]/time[i];

   for(float e : speed){
    cout << e << endl;
   }
   
}