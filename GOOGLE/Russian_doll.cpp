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
    int n;
    vector <pair<int,int>> v;
    // int solve(int level , int last) {
    //     if(level >= n) return 0;
        
    //     int ans = 0;
    //     if(last == -1 || (v[last].first < v[level].first && v[last].second < v[level].second)) {
    //         ans = max(ans , 1 + solve(level+1 , level));
    //     }

    //     ans = max(ans , solve(level+1 , last));

    //     return ans;
    // }
    
    static bool compare (vector <int>& a, vector <int> &b){
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }

    int maxEnvelopes(vector<vector<int>>& envelopes) {
        n = envelopes.size();
        
        sort(envelopes.begin() , envelopes.end() , compare);

        for(auto it : envelopes) cout<<it[0]<<" "<<it[1]<<"\n";

//geedy thinking -> 
// Now, we can only put envolop a in envolop b another if width of a is
// less than width of b, or we can say we need an envolop whose width
// is just greater than envolop a ( height we have already handled )
// So, we can think of lower_bound and Longest Increasing Subsequence
        
        vector <int> lis;

        for(int i = 0 ; i < envelopes.size() ; i++) {
            int ele = envelopes[i][1];
            int id = lower_bound(lis.begin() , lis.end() , ele) - lis.begin();
            if(id >= lis.size()) lis.push_back(ele);
            else lis[id] = ele;
        }

        int ans = lis.size();

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