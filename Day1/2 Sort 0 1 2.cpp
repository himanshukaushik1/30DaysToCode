/*
Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2
*/

// Dutch Flag Problem
// One way is to calculate the number of zeros, ones and twos. Simply assign the number of 0,1 and 2 to the array sequentially.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        int a = 0, m = 0, b = n-1;
        for(int i=0; i<n; i++) cin >> arr[i];
        while(m<=b)
        {
            if(arr[m] == 0)
            {
                swap(arr[a], arr[m]);
                a++; m++;
            }
            else if (arr[m] == 1)
            {
                m++;
            }
            else
            {
                swap(arr[m], arr[b]);
                b--;
            }
        }
        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
	return 0;
}