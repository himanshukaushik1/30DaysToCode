/*

Given an array arr[] of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

Input:
The first line of input contains T, number of test cases. First line of line each test case contains a single integer N.
Next line contains N integer array.

Output:
Print the output of each test case in a seprate line.

Constraints:
1 <= T <= 100
1 <= N <= 105
0 <= a[i] <= 105

*/

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

// A simple approach is to check out all the numbers after storing them in a set.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, temp;
	cin >> t;
	while(t--){
	    cin >> n;
	    set<int> s;
	    int maxi = 0;
	    for(int i=0; i<n; i++){
	        cin >> temp;
	        s.insert(temp);
	        maxi = max(maxi, temp);
	    }
	    int ans = 0, finans = 0;
	    for(int i=0; i<=maxi; i++){
	        if(s.find(i) == s.end()){
	            ans = 0;
	            continue;
	        }
	        else{
	            ans ++;
	        }   
	       finans = max(finans, ans);
	    }
	    cout << finans << endl;
	}
	return 0;
}