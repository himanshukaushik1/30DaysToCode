/*

Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.

Constraints:
1 ≤ T ≤ 110
1 ≤ N ≤ 106
-107 ≤ A[i] <= 107

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
	    int maxi = -INT_MAX;
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr[i];
	        maxi = max(arr[i],maxi);
	    }
	    int cursum = 0, maxsum = 0;
	    for(int i=0; i<n; i++)
	    {
	        cursum += arr[i];
	        if(cursum<0)
	        {
	            cursum = 0;
	        }
	        maxsum = max(maxsum, cursum);
	    }
	    if(maxsum == 0)
	        cout << maxi <<endl;
	    else
	        cout << maxsum << endl;
	}
	return 0;
}