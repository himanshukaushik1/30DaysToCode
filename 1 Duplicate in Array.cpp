/* 
Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N which denotes the number of elements in the array. The second line of each test case contains n space separated integers denoting elements of the array a[].

Output:
Print the duplicate elements from the given array. The order of the output should be in sorted order. Print -1 if no duplicate exists.

Your Task:
Complete the function duplicates() which takes array a[] and n as input as parameters and returns a list of elements that occur more than once in the given array in sorted manner. If no such element is found return -1. 

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).
*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> duplicates(int a[], int n){
    vector<int> v1;
    for(int i=0; i<n; i++)
    {
        a[a[i]%n] = a[a[i]%n]+n;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] >= n*2)
            v1.pb(i);
    }
    if(v1.size() == 0)
        v1 = {-1};
    return v1;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
