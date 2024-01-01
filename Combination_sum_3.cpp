// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

vector <vector<int>> ans;
vector <int> vec;
void solve(int level , int sum , int n , int k , vector <int> &v) {
    if(level > 10) return;

    if(sum > n) return;

    if(sum == n && v.size() == k) {
        ans.push_back(v);
        return;
    }

    //as the vector vec contain ele in sorted order dup will be handle itself
    for(int i = level ; i < vec.size() ; i++) {

        v.push_back(vec[i]);
        solve(i+1 , sum+vec[i] , n , k , v);
        v.pop_back();
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector <int> v;
    for(int i = 1 ; i <= 9 ; i++) vec.push_back(i);

    solve(0 , 0 , n , k , v);

    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
vector <vector <int>> vt = combinationSum3(3,13);
return 0;
}