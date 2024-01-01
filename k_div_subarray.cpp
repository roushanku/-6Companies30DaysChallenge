// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int countDistinct(vector<int>& nums, int k, int p) {
    set <vector<int>> st;

    int n = nums.size();

    for(int i = 0 ; i < n ; i++) {
        vector <int> v;
        int div = 0;

        for(int j = i ; j < n ; j++) {
            v.push_back(nums[j]);
            if(nums[j] % p == 0) div++;

            if(div <= k) {
                st.insert(v);
            }
        }
    }

    int ans = st.size();

    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
    vector <int> nums;
    int k , p;
    int ans = countDistinct(nums , k , p);
return 0;
}