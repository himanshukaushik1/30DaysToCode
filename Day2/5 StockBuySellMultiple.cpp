/*

The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input: 
First line contains number of test cases T. First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days. 

Output:
For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".

Constraints:
1 <= T <= 100
2 <= N <= 103
0 <= Ai <= 104

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)
// Logic behind is simple. Just find the local minima (time to buy stock) and find the next maxima(time to sell stock) and print them.
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], flag = 1;
        for(int i=0; i<n; i++) cin >> a[i];
        int bought = -1, sold = -1, i=0;
        while(i<n-1){
            while(i<n-1 and a[i] > a[i+1]) i++;

            bought = i;
            while(i<n-1 and a[i] < a[i+1]) i++;

            sold = i;
            if(bought<sold){
                flag = 0;
                cout << "(" << bought << " " << sold << ") ";
            }
        }
        if(flag) cout << "No Profit";
        cout << endl;
    }
    return 0;
}