// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
    int val , freq;
    // map <int , int> mp;
    // deque <int> dq;
    int ct = 0;
    void DataStream(int value, int k) {
        val = value , freq = k;
    }

    bool consec(int num) {
        //apr 1 -> using deque and map
        // dq.push_back(num);
        // mp[num]++;

        // //keeping only k ele in deque
        // if(dq.size() > freq) {
        //     int ele = dq.front();
        //     mp[ele]--;
        //     if(mp[ele] == 0) mp.erase(ele);
        //     dq.pop_front();
        // }

        // int f = mp[val];

        // return f >= freq;
        
        //apr2 -> using count only
        if(val == num) ct++;

        else ct = 0;

        return ct >= freq;
    }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.

    
return 0;
}