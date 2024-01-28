// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
class LRUCache {
public:
    list <int> dll; //jo aage h wo LRU h
    map <int , pair<list<int> :: iterator , int>> mp;
    int n;
    LRUCache(int capacity) {
        n = capacity;
    }
    
    void makeRecUsed(int key) {
        auto it = mp[key].first;
        
        dll.erase(it);

        dll.push_front(key);

        mp[key].first = dll.begin();
    }
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;

        int ans = mp[key].second;

        makeRecUsed(key);
        return ans;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            mp[key].second = value;
            makeRecUsed(key);
        }

        else{
            n--;
            dll.push_front(key);
            mp[key] = {dll.begin() , value};
        }

        if(n < 0) {
            int back_ele = dll.back();
            mp.erase(back_ele);
            
            dll.pop_back();
            n++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
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