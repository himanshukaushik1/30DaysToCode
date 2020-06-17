/*

Rotate a matrix by 90 degrees clockwise. Simply maintain a direction flag for the matrix traversal.
For 180 degrees, rotate twice.
For 270 degrees, rotate once and take the transpose.

*/

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<int> Print(vector<vector<int>> A)
{
    int t = 0, l = 0, b = A.size()-1, r = A[0].size()-1;
    int dir = 0;
    vector<int> v;
    while(t<=b and l<=r)
    {
        if(dir == 0)
        {
            for(int i=l; i<=r; i++)
            {
                v.pb(A[t][i]);
            }
            dir = 1;
            t++;
        }
        else if(dir == 1)
        {
            for(int i=t; i<=b; i++)
            {
                v.pb(A[i][r]);
            }
            dir = 2;
            r--;
        }
        else if(dir == 2)
        {
            for(int i=r; i>=l; i--)
            {
                v.pb(A[b][i]);
            }
            dir = 3;
            b--;
        }
        else 
        {
            for(int i=b; i>=t; i--)
            {
                v.pb(A[i][l]);
            }
            dir = 0;
            l++;
        }
    }
    return v;
}

int main()
{
    vector<int> v = Print({{1,2,3,4},{5,6,7,8},{9,10,11,12}});
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // cout << to_string(34);
    return 0;
}