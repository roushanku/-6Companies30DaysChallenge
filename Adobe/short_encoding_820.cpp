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
    bool IsSubStr(string last , string str) {
        int n = last.size() , m = str.size();

        if(m > n) return false;
        int i = m-1 , j = n-1;
        while(i >= 0) {
            if(str[i] == last[j]) {
                i--;
                j--;
            }

            else return false;
        }

        return true;
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), []
        (const string& first, const string& second){
            return first.size() > second.size();
        });

        for(auto it : words) cout<<it<<" ";
        int ans = 0;

        int n = words.size();

        map <string ,int> mp;

        for(int i = 0 ; i < n ; i++) mp[words[i]]++;

        for(int i = 0 ; i < n ; i++) {
            int m = words[i].size();

            if(mp[words[i]] > 0) ans += (m+1);

            for(int j = m-1 ; j >= 0 ; j--) {
                string str = words[i].substr(j , m-j);
                if(mp[str] > 0) mp.erase(str);
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