/*

Given a number 'a' and a number 'n', Calculate a^n without using inbuilt functions in O(log(n)) time.

*/

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll int a, n;
        cin >> a >> n;
        ll int res = 1;
        while(n>0){
            if(n%2 != 0){
                res *= a;
                n--;
            }
            else{
                a *= a;
                n/=2;
            }
        }
        cout << res;
    }
    return 0;
}