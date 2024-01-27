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
    void computeLPS(vector <int> &LPS , string &pat) {
            int n = pat.size();
            int len = 0; // len of longest pre which was also suff
            
            LPS[0] = 0;
            int i = 1;
            
            while(i < n) {
                if(pat[i] == pat[len]) {
                    len++;
                    LPS[i] = len;
                    i++;
                }
                
                else{
                    if(len != 0) len = LPS[len-1];
                    
                    else {
                        LPS[i] = 0;
                        i++;
                    }
                }
            }
        }
        vector <int> KMP(string pat, string txt)
        {
            //code here
            int n = txt.size() , m = pat.size();
            
            //lps[i] = longest proper prefix of pat[0..i] which is also suffix
            
            vector <int> LPS(m , 0);
            
            computeLPS(LPS , pat);
            
            int i = 0 , j = 0;
            vector <int> ans;
            while(i < n) {
                if(txt[i] == pat[j]) {
                    i++;
                    j++;
                }
                
                if(j == m) {
                    ans.push_back(i-m); 
                    j = LPS[j-1]; // yhi to fayda h KMP ki j ko 0 pr nhi bhejna pad rha h
                }
                
                else if(txt[i] != pat[j]) {
                    if(j != 0) j = LPS[j-1];
                    else i++;
                }
            }
            
            return ans;
            
        }
    bool IsPossible(vector <int> &sb , int i , int k , vector <int> &sa) {
        int l = 0 , r = sb.size()-1;
        
        while(l <= r) {
            int mid = l + (r-l) / 2;
            
            if(sb[mid] >= sa[i]-k && sb[mid] <= sa[i]+k) return true;
            
            else if(sb[mid] < sa[i]-k) l = mid+1;
            
            else r = mid-1;
        }
        
        return false;
    }
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector <int> sa = KMP(a , s);
        vector <int> sb = KMP(b , s);
        
        for(auto it : sa) cout<<it<<" ";
        cout<<"\n";
        
        for(auto it : sb) cout<<it<<" ";
        cout<<"\n";
        
        sort(sa.begin() , sa.end());
        sort(sb.begin() , sb.end());
        
        vector <int> ans;
        
        for(int i = 0 ; i < sa.size() ; i++) {
            if(IsPossible(sb , i , k , sa)){
                ans.push_back(sa[i]);
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