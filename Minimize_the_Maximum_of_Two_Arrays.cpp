// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
    long long l = 1 , r = 1e15;

    long long ans = 1e15;

    while(l <= r) {
        long long mid = l + (r-l) / 2;
        long long d1 = (mid / divisor1) , d2 = (mid / divisor2);

        long long gcd = __gcd(divisor1 , divisor2);
        long long lcm = (1LL * divisor1 * divisor2) / gcd;

        //common div
        long long cd = (mid / lcm);
        long long extra = (mid - d1 -d2 + cd);

        //(d2 - cd) -> num only div by divisor2
        long long extra1 = max(uniqueCnt1 - (d2 - cd) , 1LL*0);
        long long extra2 = max(uniqueCnt2 - (d1 - cd) , 1LL*0);

        if(extra1 + extra2 <= extra) {
            ans = min(ans , mid);
            r = mid-1;
        }

        else l = mid+1;
    }

    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.

    int divisor1 , divisor2 , uniqueCnt1 , uniqueCnt2;
    cin >> divisor1 >> divisor2 >> uniqueCnt1 >> uniqueCnt2;

    cout<< minimizeSet(divisor1, divisor2, uniqueCnt1, uniqueCnt2) <<"\n";
return 0;
}