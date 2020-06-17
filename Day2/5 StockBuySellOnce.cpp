/*

Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

*/

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        if(n<=1){
            cout << "0" <<endl;
            continue;
        }
        int maxprof = 0, minv = a[0];
        for(int i=0; i<n; i++){
            minv = min(minv, a[i]);
            maxprof = max(maxprof, a[i] - minv);
        }
        cout << maxprof << endl;
    }
    return 0;
}