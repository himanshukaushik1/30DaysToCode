/*

Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.
Sample:
Input: arr1[] = {10};
       arr2[] = {2, 3};
Output: arr1[] = {2}
        arr2[] = {3, 10}  

Input: arr1[] = {1, 5, 9, 10, 15, 20};
       arr2[] = {2, 3, 8, 13};
Output: arr1[] = {1, 2, 3, 5, 8, 9}
        arr2[] = {10, 13, 15, 20} 

Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

Output:
For each test case, print (X + Y) space separated integer representing the merged array.

Constraints:
1 <= T <= 100
1 <= X, Y <= 5*104
0 <= arr1i, arr2i <= 109

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m;
	cin >> t;
	while(t--)
	{
	    cin >> n >> m;
	    vector<int> arr1(n), arr2(m);
	    for(int i=0; i<n; i++) cin >> arr1[i];
	    for(int i=0; i<m; i++) cin >> arr2[i];
	    int a=0, b=0, c=n-1;
	    while(a<n && b<m && a<=c)
	    {
	        if(arr1[a] <= arr2[b])
	        {
	            a++;
	        }
	        else
	        {
	            swap(arr1[c], arr2[b]);
	            c--;
	            b++;
	        }
	    }
	    sort(arr1.begin(),arr1.end());
	    sort(arr2.begin(), arr2.end());
	    for(int i=0; i<n; i++) cout << arr1[i] << " ";
	    cout << endl;
	    for(int i=0; i<m; i++) cout << arr2[i] << " ";
	    cout << endl;
	}
	return 0;
}
