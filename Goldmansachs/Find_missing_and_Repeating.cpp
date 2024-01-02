// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long expected = 1LL * (n) * (n+1) / 2;
        
        long long sum = 0;
        for(int i = 0 ; i < n ; i++) sum += arr[i];
        
        int dup = -1;
        
        for(int i = 0 ; i < n ; i++) {
            int id = abs(arr[i]);
            
            if(arr[id-1] < 0) {
                dup = id;
            }
            
            else{
                arr[id-1] *= (-1);
            }
        }
        
        int missing = expected - sum + dup;
        
        return {dup , missing};
    }
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
    int n;
    cin>>n;

    vector <int> arr(n);
    for(int i = 0 ; i < n ; i++) cin>>arr[i];

    vector <int> ans = findTwoElement(arr , n);

    cout<<ans[0]<<" "<<ans[1]<<"\n";
    
return 0;
}