#include<bits/stdc++.h>
using namespace std;

/*
3 -> size of lamps array (count of lamps)

[ [1, 7], [5, 11], [7, 9] ]

6 -> no of queries

points -> array of queries

*/

vector<int> levelOfIllumination( vector<vector<int>> &lamps, vector<int> points){

    int l[lamps.size()], r[lamps.size()];

    // Getting the l and r for range updation
    for(int i = 0; i < lamps.size(); i++){
        l[i] = lamps[i][0];
        r[i] = lamps[i][1];
    }

    // Getting the max for possibilities array
    int maxi = points[0];
    for(int i = 1; i < points.size(); i++){
        if(maxi < points[i]){
            maxi = points[i];
        }
    }

    // Range updation
    vector<int> possibilities(maxi + 2);

    for(int i = 0; i < lamps.size(); i++){
        possibilities[l[i]] += 1;
        possibilities[r[i] + 1] -= 1;
    }

    // Prefix sum
    for(int i = 1; i < possibilities.size(); i++){
        possibilities[i] += possibilities[i-1];
    }

    vector<int> ans(points.size());

    // answering queries
    for(int i = 0; i < points.size(); i++){
        ans[i] = possibilities[points[i]];
    }

    return ans;
}

int main(){

    int n;
    cin >> n;

    vector<vector<int>> lamps(n, vector<int>(2));

    for(int i = 0; i < n; i++){
        cin >> lamps[i][0] >> lamps[i][1];
    }

    int q;
    cin >> q;

    vector<int> points(q);

    for(int i = 0; i < q; i++){
        cin >> points[i];
    }

    vector<int> ans = levelOfIllumination(lamps, points);

    for(int it: ans){
        cout << it << " ";
    }

}

/*
Input:
3
1 7
5 11
7 9
6
7 1 5 10 9 15

Output:
3 1 2 1 2 0

*/