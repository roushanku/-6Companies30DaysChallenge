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
    const int mod = 1e9 + 7;

    long long binpow(long long a, long long b) {
        if (b == 0)
            return 1;
        long long res = binpow(a, b / 2) % mod;
        if (b % 2)
            return (res * res % mod * a) % mod;
        else
            return (res * res) % mod;
    }

    int minNonZeroProduct(int p) {
        long long n = (1LL << p);
        long long second_last = (n - 2) % mod;

        long long pr = (n - 2) / 2;

        //we can make pr pair equal to second_last -> core of question

        long long temp = (n - 1) % mod;

        long long ans = binpow(second_last, pr) % mod;

        ans = (ans * temp) % mod;

        return int (ans);
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