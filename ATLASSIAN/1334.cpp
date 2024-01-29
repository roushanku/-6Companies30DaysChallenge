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
    bool static cmp(const pair<int,int> p1 ,const pair<int,int> p2)
    {
        if(p1.first != p2.first)
            return p1.first < p2.first;
        
        return p1.second > p2.second;
    }
    int solve(int root , vector <vector <pair<int,int>>> adj , int th , int n) {
        priority_queue <pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

        pq.push({0,root});
        int ct = 0;
        vector <int> dis(n , INT_MAX);
        dis[root] = 0;

        while(!pq.empty()) {
            int node = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            for(auto &it : adj[node]) {
                if(dis[it.first] > dis[node] + it.second) {
                    pq.push({it.second + dis[node], it.first});
                    dis[it.first] = dis[node] + it.second;
                }
            }
        }
        
        for(int i = 0 ; i < n ; i++) {
            if(i != root && dis[i] <= th) ct++; 
        }

        return ct;
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector <pair<int,int>> v;
        vector <vector <pair<int,int>>> adj(n);

        for(int i = 0 ; i < edges.size() ; i++) {
            adj[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0] , edges[i][2]});
        }

        for(int i = 0 ; i < n ; i++) {
            int frq = solve(i , adj , distanceThreshold , n);
            v.push_back({frq , i});
        }

        sort(v.begin() , v.end() , cmp);

        for(auto it : v) cout<<it.first<<" "<<it.second<<"\n";

        int ans = v[0].second;
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