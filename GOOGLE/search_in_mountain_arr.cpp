// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key

 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
//  class MountainArray {
// //     public:
// //       int get(int index);
// //         int length();
// //  };
 

class Solution {
public:
    int findPeak(MountainArray &mountainArr) {
        int n = mountainArr.length();
        int l = 0 , r = n-1;

        while(l <= r) {
            int mid = l + (r-l) / 2;

            if(mountainArr.get(mid) < mountainArr.get(mid+1)) l = mid+1;

            else r = r = mid-1;
        }
        return l;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int id = findPeak(mountainArr);
        int n = mountainArr.length();

        int l = 0 , r = id;

        int ans = -1;

        //itering in left part -> increasing part of mountain
        while(l <= r) {
            int mid = l + (r-l) / 2;

            if(mountainArr.get(mid) == target){
                ans = mid;
                break;
            }

            else if(mountainArr.get(mid) > target) r = mid-1;
            else l = mid+1;
        }

        if(ans != -1) return ans;

        //itering in right part -> decreasing part of mountain
        l = id , r = n-1;

        while(l <= r) {
            int mid = l + (r-l) / 2;

            if(mountainArr.get(mid) == target) {
                ans = mid;
                break;
            }

            else if(mountainArr.get(mid) > target) l = mid+1;

            else r = mid-1;
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