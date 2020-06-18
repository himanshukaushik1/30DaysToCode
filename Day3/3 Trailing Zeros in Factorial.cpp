/*

For an integer n find number of trailing zeroes in n! . 

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, it contains an integer 'N'.

Output:
In each seperate line output the answer to the problem.

Constraints:
1 <= T <= 100
1 <= N <= 1000

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
        int n;
        cin >> n;
        int res = 0;
        for(int i=5; i<=n; i*=5){
            res += n/i;
        }
        cout << res << endl;
    }
    return 0;
}