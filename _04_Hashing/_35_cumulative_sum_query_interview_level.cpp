/*
You are given a list of N numbers and Q queries. Each query is specified by two numbers i and j; the answer to each query is the 
sum of every number between the range [i, j] (inclusive).
Note: the query ranges are specified using 0-based indexing.

Input
The first line contains N, the number of integers in our list (N ≤ 100,000). The next line holds N numbers that are guaranteed 
to fit inside an integer. Following the list is a number Q (Q ≤ 10,000). The next Q lines each contain two numbers i and j which 
specify a query you must answer (0 ≤ i, j ≤ N-1).

Output
For each query, output the answer to that query on its own line in the order the queries were made.
*/
#include <bits/stdc++.h>
using namespace std;


long long rangeSum( const vector<long long>& prefix, int i, int j) {
    //Function to compute sum from index i to j.
    //Taking ;
    //prefix = prefix sum array (precomputed)
    //i, j = query range
    //const & = avoids copying the vector (efficient).

    if (i == 0)
        return prefix[j];


       // subtract sum of elements before i
    return prefix[j] - prefix[i - 1];

    //iif range starts from index 0, sum is directly prefix[j].
   // Because prefix already stores sum from 0 to j.
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    vector<long long> prefix(n);
    // create the prefix sum of same array.
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
        //Each step adds current element to previous sum.
    }

    int q;
    cin >> q;

    while (q--) {
        int i, j;
        cin >> i >> j;

        cout << rangeSum(prefix, i, j) << endl;
    }

    return 0;
}