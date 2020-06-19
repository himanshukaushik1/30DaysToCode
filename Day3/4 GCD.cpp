/*

Given two numbers A and B. The task is to find out their LCM and GCD.

Input:
The first line of input contains an integer T denoting the number of testcases. T testcases follow. In each test cases, there are two numbers A and B separated by space.

Output:
For each testcase in a new line, print LCM and GCD separated by space.

Constraints:
1 <= T <= 104
1 <= A <= 108
1 <= B <= 108

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll int gcd(ll int a, ll int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main()
{
    ll int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ll int gc = gcd(a,b);
        cout << (a*b)/gc << " " << gc << endl;
    }
    return 0;
}