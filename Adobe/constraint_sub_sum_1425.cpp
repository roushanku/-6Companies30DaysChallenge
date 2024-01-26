// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

class Solution {
public: 

    //apr 1 -> rec+ memo => TLE
    // unordered_map <string,int> mp;
    // int solve(int level , int last , vector <int> &nums , int k) {
    //     int n = nums.size();
    //     if(level >= n) return 0;

    //     int mx_sum = 0;

    //     string key = to_string(last) + " " + to_string(level);

    //     if(mp.find(key) != mp.end()) {
    //         return mp[key];
    //     }

    //     if(last == -1) {
    //         int take = nums[level] + solve(level+1,level,nums,k);
    //         int not_take = solve(level+1,last,nums,k);

    //         mx_sum = max({take,not_take});
    //     }

    //     else if(level - last <= k) {
    //         int take = nums[level] + solve(level+1,level,nums,k);
    //         int not_take = solve(level+1,last,nums,k);

    //         mx_sum = max({take,not_take});
    //     }

    //     return mp[key] = mx_sum;
    // }
    int constrainedSubsetSum(vector<int>& nums, int k) {
        // int ans = solve(0,-1,nums,k);
        // if(ans == 0) ans = *max_element(nums.begin() , nums.end());

        // return ans;

        //Apr - 2 => bottom up using lis varient
        //O(n*n)
        int n = nums.size();
        vector <int> dp(n);

        for(int i = 0 ; i < n ; i++) dp[i] = nums[i];
        int ans = nums[0];
        // for(int i  = 1 ; i < n ; i++) {
        //     for(int j = i-1 ; j >= 0 ; j--) {
        //         if(i - j <= k) {
        //             dp[i] = max(dp[i] , dp[j] + nums[i]);
        //             ans = max(ans , dp[i]);
        //         }
        //         else break;
        //     }
        // }

        //return ans;

        //final
        //optimization kro under j wale for loop ko
        //this optimization is similar to slinding window max
        priority_queue <pair<int,int>> pq;
        pq.push({nums[0],0});
        for(int i = 1 ; i < n ; i++) {
            while(!pq.empty() && i - pq.top().second > k) pq.pop();

            if(!pq.empty()) {
                dp[i] = max(dp[i] , dp[i] + pq.top().first);
                ans = max(ans , dp[i]);
            }
            pq.push({dp[i] , i});
        }

        return ans;
    }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
int t;
cin>>t;
while(t--){
    
}
return 0;
}