#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<float> distance(n),time(n),speed(n);

    for(int i=0;i<n;i++)
    cin >> distance[i];

    for(int i=0;i<n;i++)
    cin >> time[i];

    for(int i=0;i<n;i++)
        speed[i]=distance[i]/time[i];

    for(float e : speed){
        cout << e << endl;
    } 
     return 0;
}