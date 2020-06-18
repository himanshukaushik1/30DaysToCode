/*

Given a string S that represents column title of an Excel sheet, find the number that represents that column.
In excel A column is number 1, AA is 27 and so on.

Input:
The first line contains an integer T, depicting total number of test cases. T testcases follow. Each testcase contains a single line of input containing string S.

Output:
For each testcase, in a new line, print the column number.

Constraints:
1 ≤ T ≤ 100
1 ≤ |S| <=7

*/

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res = 0, n = 0;
        for(int i=0; i<s.size(); i++){
            n = s[i] - 'A' + 1;
            res = res * 26 + n;
        }
        cout << res << endl;
    }
    return 0;
}