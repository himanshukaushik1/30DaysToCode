/*

Given a collection of Intervals,merge all the overlapping Intervals.
For example:

Given [1,3], [2,6], [8,10], [15,18],

return [1,6], [8,10], [15,18].

Make sure the returned intervals are sorted.

 

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the number of Intervals and next line followed by the intervals starting and ending positions 'x' and 'y' respectively.


Output:

Print the intervals after overlapping in sorted manner.  There should be a newline at the end of output of every test case.

Constraints:

1 ≤ T ≤ 50
1 ≤ N ≤ 100
0 ≤ x ≤ y ≤ 100

*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main() {
	int t,n;
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    vector<pair<int,int>> vp, vf;
	    int a,b;
	    for(int i=0; i<n; i++)
	    {
	        cin >> a >> b;
	        vp.pb({a,b});
	    }
	    sort(vp.begin(), vp.end());
	    a = vp[0].first; b = vp[0].second;
	    for(int i=1; i<n; i++)
	    {
	        if(b>=vp[i].first)
	        {
	            b = max(b, vp[i].second);
	            continue;
	        }
	        else
	        {
	            vf.pb({a,b});
	            a = vp[i].first;
	            b = vp[i].second;
	        }
	    }
	    vf.pb({a,b});
	    for(int i=0; i<vf.size(); i++)
	    {
	        cout << vf[i].first << " " << vf[i].second << " ";
	    }
	    cout << endl;
	}
	
	return 0;
}