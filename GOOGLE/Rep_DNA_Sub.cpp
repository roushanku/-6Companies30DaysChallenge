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
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();

        int i = 0 , j = 0;
        unordered_map <string , int> mp;
        while(j < n) {

            if(j-i+1 == 10) {
                string str = s.substr(i , 10);
                mp[str]++;
                i++;
            }
            j++;
        }

        vector <string> ans;

        for(auto it : mp) {
            if(it.second > 1) ans.push_back(it.first);
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