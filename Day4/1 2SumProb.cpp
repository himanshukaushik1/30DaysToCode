/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    map<int, vector<int>> m;
    int n = nums.size();
    for(int i=0; i<n; i++)
        m[nums[i]].pb(i);
    for(int i=0; i<n; i++){
        if(m.find(target-nums[i]) != m.end()){
            if(target-nums[i] == nums[i] && m[nums[i]].size()>1){
                ans.pb(m[nums[i]][0]);
                ans.pb(m[nums[i]][1]);
                return ans;
            }
            else if(target-nums[i] != nums[i]){
                ans.pb(m[nums[i]][0]);
                ans.pb(m[(target-nums[i])][0]);
                return ans;
            }
            else
            {
                continue;
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        cin >> x;
        vector<int> v = twoSum(a, x);
        cout << v[0] << " " << v[1] << endl;
    }
}