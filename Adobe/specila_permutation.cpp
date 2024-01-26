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
    const int mod = 1e9 + 7;
    vector <vector<int>> dp;
    int solve(int last , int mask , vector <int> &nums) {
        int n = nums.size();

        int ct = __builtin_popcount(mask);
        if(ct == n) return 1;

        int ans = 0;

        if(dp[last+1][mask] != -1) return dp[last+1][mask];

        for(int i = 0 ; i < n ; i++) {
            if(mask & (1<<i)) continue;

            if(last == -1 || nums[i] % nums[last] == 0 || nums[last] % nums[i] == 0) {
                ans += solve(i , mask | (1<<i) , nums);
                ans %= mod;
            }
        }

        return dp[last+1][mask] = ans;
    }
    int specialPerm(vector<int>& nums) {
        dp.resize(20 , vector<int>((1<<14) + 5 , -1));
       int ans = solve(-1 , 0 , nums);
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