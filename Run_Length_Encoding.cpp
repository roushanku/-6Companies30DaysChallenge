// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
    string src;
    cin>>src;

    int ct = 1;
    string ans;
    int n = src.size();
    for(int i = 1 ; i < src.size() ; i++) {
        if(src[i] == src[i-1]) ct++;
        
        else{
            ans.push_back(src[i-1]);
            ans += (to_string(ct));
            ct = 1;
        }
    }
    ans.push_back(src[n-1]);
    ans += (to_string(ct));
    
    cout<< ans <<"\n";
return 0;
}