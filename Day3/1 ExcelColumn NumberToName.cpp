/*

Given a positive integer N, print its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N.

Output:
For each testcase, in a new line, print the string corrosponding to the column number.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s = "";
        while(n){
            if(n%26 == 0){
                s = ('Z') + s;
                n = n/26 -1;
                continue;
            }
            else{
                s = char(n%26 -1 + 'A') + s; 
            }
            n /= 26;
        }
        cout << s << endl;
    }
    return 0;
}