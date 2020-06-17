/*

Given a positive integer K, return the Kth row of pascal triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.

Example :
1
1 1
1 2 1
1 3 3 1
For K = 3, return 3rd row i.e 1 2 1

Input:
First line contains an integer T, total number of test cases. Next T lines contains an integer N denoting the row of triangle to be printed.

Output:
Print the Nth row of triangle in a separate line.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 25

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,k;
	cin >> t;
	while(t--)
	{
	    cin >> k;
	    int fact = 1;
	    for(int i=1; i<=k; i++)
	    {
	        cout << fact << " ";
	        fact = ceil(fact*(k-i)/i);
	    }
	    cout << endl;
	}
	return 0;
}
