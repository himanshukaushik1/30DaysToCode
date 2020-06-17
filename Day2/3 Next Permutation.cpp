/*

Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers. If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

For example:
1,2,3 → 1,3,2
3,2,1 → 1,2,3

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.

Output:
Print the array of next permutation in a separate line.

Constraints:
1 ≤ T ≤ 40
1 ≤ N ≤ 100
0 ≤ A[i] ≤ 100

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int ind = 0;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=n-1; i>0; i--){
            if(a[i] > a[i-1]){
                ind = i-1;
                break;
            }
        }
        int diff = INT_MAX, pos = ind-1;
        for(int i=ind+1; i<n; i++){
            if(a[i]-a[ind]>=0 and a[i]-a[ind] < diff){
                pos = i;
                diff = a[i]-a[ind];
            }
        }
        swap(a[ind], a[pos]);
        sort(a+ind+1, a+n);
        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
	return 0;
}
