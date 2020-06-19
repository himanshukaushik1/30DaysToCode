/*

A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).


The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.

// Problem Source: Leetcode

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int A, int B) {
    int a[A][B];
    memset(a, 0, sizeof(a));
    for(int i=0; i<A; i++) a[i][0] = 1;
    for(int j=0; j<B; j++) a[0][j] = 1;
    for(int i=1; i<A; i++){
        for(int j=1; j<B; j++)
            a[i][j] = a[i-1][j] + a[i][j-1];
    }
    return a[A-1][B-1];
}

int main()
{
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << uniquePaths(a,b) << endl;
    }
    return 0;
}