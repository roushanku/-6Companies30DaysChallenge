// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
unordered_map <int , vector<char>> mp;
vector <string> ans;

void solve(int level , string &digits , string s) {
    int n = digits.size();
    if(level >= n) {
        if(s.size() > 0) ans.push_back(s);
        return;
    }

    int key = digits[level] - '0';
    for(auto &it : mp[key]) {
        s.push_back(it);
        solve(level+1  , digits , s);
        s.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
    int i = 2;
    for(char ch = 'a' ; ch <= 'z' ; ch += 3) {
        mp[i].push_back(ch);
        mp[i].push_back(ch+1);
        mp[i].push_back(ch+2);

        if(i == 7 || i== 9) {
            mp[i].push_back(ch+3);
            ch++;
        }
        i++;

    }

    for(auto &it : mp) {
        cout<<it.first<<":";
        for(auto i : it.second) cout<<i<<" ";
        cout<<"\n";
    }

    solve(0 , digits , "");
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.

    string digits;
    vector <string> ans = letterCombinations(digits);
return 0;
}