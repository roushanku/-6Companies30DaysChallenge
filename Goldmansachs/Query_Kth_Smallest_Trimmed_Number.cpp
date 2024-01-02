// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
    int n = queries.size() , m = nums.size();

    vector <int> ans;

    for(int i = 0 ; i < n ; i++) {
        //{num , i}
        //no need of compare function
        priority_queue <pair<string,int>> pq;
        int k = queries[i][0] , trim = queries[i][1]; 

        for(int j = 0 ; j < m ; j++) {
            string s = nums[j];
            int id = s.size() - trim;
            string str = s.substr(id , trim);

            if(pq.size() < k) {
                pq.push({str , j});
            }

            else{
                if(pq.top().first > str) {
                    pq.pop();
                    pq.push({str , j});
                }
            }
        }
        ans.push_back(pq.top().second);
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
    vector <string> nums;
    vector <vector<int>> v;
    vector <int> ans = smallestTrimmedNumbers(nums , v);
return 0;
}