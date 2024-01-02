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
    //neg index aa skta h usko handle krne k lie map use instead dp arr
    //lkn TLE de dia yrr
    const int mod = 1e9 + 7;
    // map <pair<int,int> , long long> mp;
    //ab arr use krta hu
    int dp[2002][1002];
    int negdp[1002][1002];
    int solve(int state , int dest , int ct , int k) {
        if(ct == k) return state == dest;

        long long ans = 0;

        // if(mp.find({state,k}) != mp.end()) return mp[{state,k}];

        if(state < 0) {
            if(negdp[abs(state)][ct] != -1) return negdp[abs(state)][ct];
        }
        
        else if(dp[state][ct] != -1) return dp[state][ct];

        ans += solve(state+1 , dest , ct+1 ,k) % mod;
        ans += solve(state-1 , dest , ct+1 ,k) % mod;

        if(state < 0) return negdp[abs(state)][ct] = ans % mod;
        else return dp[state][ct] = ans % mod;
    }
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp,-1,sizeof(dp));
        memset(negdp,-1,sizeof(negdp));
        long long ans = solve(startPos,endPos,0,k);

        return ans;
    }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
    
return 0;
}