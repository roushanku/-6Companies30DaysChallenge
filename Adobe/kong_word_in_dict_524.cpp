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
    bool IsSub(string &str ,string &s) {
        int n = str.size() , m = s.size();

        int i = 0 , j = 0;

        while(i < n && j < m) {
            if(str[i] == s[j]) {
                i++;
                j++;
            }

            else{
                j++;
            }
        }

        return i == n;
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans = "";
        for(auto str : dictionary) {
            if(IsSub(str , s)) {
                if(str.size() > ans.size()) ans = str;

                if(str.size() == ans.size()) {
                    ans = min(ans , str);
                }
            }
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