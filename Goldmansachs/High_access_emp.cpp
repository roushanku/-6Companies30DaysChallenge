// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
int last_two (int n) {
    int num = (n % 10);
    n /= 10;
    num += ((n%10) * 10);
    return num;
}
int first (string s) {
    string t;
    t.push_back(s[0]);
    t.push_back(s[1]);
    
    int n = stoi(t);
    int num = (n % 10);
    n /= 10;
    num += (10 * (n % 10));
    return num;
}
vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
    map <string,vector<string>> mp;
    for(auto it : access_times) {
        string time = it[1];
        string c = it[0];
        mp[c].push_back(time);
    }
    
    vector <string> ans;
    // for(auto it : mp) {
    //     cout<<it.first<<"\n";
    //     for(auto i : it.second) cout<<i<<" ";
    //     cout<<"\n";
    // }
    
    for(auto it : mp) {
        int size = it.second.size();
        vector <string> v = it.second;
        sort(v.begin() , v.end());
        for(int i = 0 ; i < size ; i++) {
            int t = stoi(v[i]);
            //cout<<t<<" ";
            int ct = 1;
            for(int j = i+1 ; j < size ; j++) {
                int temp = stoi(v[j]);
                //cout<<temp - t<<" ";
                int ft = first(v[i]);
                int st = first(v[j]);
                int f = last_two(t);
                int s = last_two(temp);
                cout<<ft<<" "<<st<<"\n";
                cout<<f<<" "<<s<<"\n";
                if(ft == st) {
                    cout<<abs(f-s)<<"\n";
                    if(abs(f-s) < 60) ct++;
                }

                else if(abs(ft-st) <= 1){
                    int c = 0;
                    if(ft < st) {
                        c += (60 - f);
                        c += s;
                        cout<<c<<"\n";
                        if(c < 60) ct++;
                    }

                    else{
                        c += (60-s);
                        c += f;
                        cout<<c<<"\n";
                        if(c < 60) ct++;
                    }
                }
                }
            if(ct >= 3) {
                // cout<<"ct"<<"\n";
                ans.push_back(it.first);
                break;
            }
        }
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.
    vector<vector<string>> v = {};

    vector <string> ans = findHighAccessEmployees(v);

return 0;
}