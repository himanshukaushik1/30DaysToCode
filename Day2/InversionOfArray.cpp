/*

Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.

Output:
Print the inversion count of array.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ C ≤ 1018

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll int merge(int a[], int l, int r){
    ll int counter = 0;
    int mid = (l+r)/2;
    int larr[mid-l+1], rarr[r-mid];
    for(int i=0; i<mid-l+1; i++) larr[i] = a[l+i];
    for(int i=0; i<r-mid; i++) rarr[i] = a[mid+i+1];
    int i = 0, j = 0, k=l;
    while(i<mid-l+1 and j< r-mid){
        if(larr[i]<=rarr[j]){
            a[k++] = larr[i++];
        }
        else{
            // cout << " THERE IT IS " << endl;
            counter += (mid-l-i+1);
            a[k++] = rarr[j++];
        }
    }
    while(i<mid-l+1) a[k++] = larr[i++];
    while(j<r-mid) a[k++] = rarr[j++];
    return counter;
}

ll int mergeSort(int a[], int l, int r){
    ll int counter = 0;
    if(l<r){
        int mid = (l+r)/2;
        counter += mergeSort(a,l,mid);
        counter += mergeSort(a,mid+1, r);
        counter += merge(a,l,r);    
    }
    return counter;
}

int main() {
	int t, n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++) cin >> a[i];
	    ll int counter = 0;
        counter += mergeSort(a, 0, n-1);
        cout << counter << endl;
        // for(int i=0; i<n; i++) cout << a[i] << "  ";
        // cout << endl;
	}
	return 0;
}