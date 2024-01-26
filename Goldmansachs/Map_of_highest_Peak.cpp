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

    bool IsValid(int r , int c , int n , int m) {
        return (r >= 0 && c >= 0 && r < n && c < m);
    }
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        
        int n = isWater.size() , m = isWater[0].size();

        vector <vector<int>> ans(n , vector<int>(m));

        vector <vector<int>> vis(n , vector<int>(m , 0));

        queue <pair<int,int>> q;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(isWater[i][j] == 1) {
                    ans[i][j] = 0;
                    q.push({i,j});
                    vis[i][j] = 1;
                }
            }
        }

        int level = 0;

        vector<pair<int,int>> rc = {{-1,0} , {0,1} , {1,0} , {0,-1}};

        while(!q.empty()) {
            int size = q.size();

            while(size--) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                for(int i = 0 ; i < 4 ; i++) {
                    int nrow = r + rc[i].first;
                    int ncol = c + rc[i].second;

                    if(IsValid(nrow , ncol , n , m) && !vis[nrow][ncol]) {
                        ans[nrow][ncol] = level+1;
                        vis[nrow][ncol] = 1;
                        q.push({nrow , ncol});
                    }
                }
            }
            level++;
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

return 0;
}