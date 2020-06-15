/*

Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.

Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity.



Input Format:

The first and the only argument of input contains a 2-d integer matrix, A, of size M x N.
Output Format:

Return a 2-d matrix that satisfies the given conditions.
Constraints:

1 <= N, M <= 1000
0 <= A[i][j] <= 1

*/

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    vector<vector<int>> A;
    int n,m,temp;                // n->rows and m->cols
    cin >> n >> m ;    
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)  
    {
        cin >> temp;
        A[i][j] = temp;
    }
    int rows[n], cols[m];
    memset(rows,0, sizeof(rows));
    memset(cols,0, sizeof(cols));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(rows[i] || cols[j])
            {
                A[i][j] = 0;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)  
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}