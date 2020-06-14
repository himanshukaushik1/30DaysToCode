/*

Given an unsorted array of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Note: If you find multiple answers then print the Smallest number found. Also, expected solution is O(n) time and constant extra space.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print B, the repeating number followed by A which is missing in a single line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ A[i] ≤ N

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) cin >> arr[i];
	    int rep = INT_MAX, mis = INT_MAX;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[abs(arr[i])-1] < 0)
	        {
	            rep = min(rep, abs(arr[i]));
	        }
	        else
	        {
	            arr[abs(arr[i])-1] *= -1;
	        }
	    }
	   // for(int i=0; i<n; i++)
	   //     cout << arr[i] << " ";
	   // cout << endl;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i] > 0)
	        {
	            mis = min(mis, i+1);
	        }
	    }
	    cout << rep << " " << mis << endl;
	}
	return 0;
}