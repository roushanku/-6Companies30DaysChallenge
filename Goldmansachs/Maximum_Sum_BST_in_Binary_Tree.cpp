// J.S.R -- *roush*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds; //find_by_order //order_of_key
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


//apr : 1
// class Solution {
// public:
//     int sum = 0;

//     vector <long long> Subtree(TreeNode* root) {
//         //{sum , mn , mx}
//         if(root == NULL) return {0 , INT_MAX , INT_MIN};

//         vector <long long> l = Subtree(root -> left);
//         vector <long long> r = Subtree(root -> right);

//         //checking for valid BST
//         if(l[2] < root -> val && r[1] > root -> val) {
//             sum = max(1LL*sum , l[0] + r[0] + root -> val);
//             return {l[0] + r[0] + root -> val , min(l[1] , 1LL*root->val) , max(r[2] , 1LL*root->val)};
//         }

//         return {max(l[0] , r[0]) , INT_MIN , INT_MAX};
//     }

//apr 2 : optimized
class Nodeval{
    public:
    long long sum , mn , mx;

    Nodeval(long long sum , long long mn , long long mx) {
        this -> sum = sum;
        this -> mn = mn;
        this -> mx = mx;
    }
 };

class Solution {
public:
    int sum = 0;
    Nodeval Subtree(TreeNode* root) {
        if(root == NULL) return Nodeval(0 , INT_MAX , INT_MIN);

        auto left = Subtree(root->left);
        auto right = Subtree(root->right);

        if(left.mx < root->val && right.mn > root->val) {
            //valid bst
            sum = max(1LL*sum , left.sum + right.sum + root->val);
            return Nodeval(left.sum + right.sum + root->val , min(left.mn,1LL*root->val) , max(right.mx , 1LL*root->val));
        }

        //invalid bst
        return Nodeval(max(left.sum , right.sum) , INT_MIN , INT_MAX);
    }
    int maxSumBST(TreeNode* root) {
        int ans = max(1LL*0 , Subtree(root)[0]);
        return sum;
    }
};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//patience Bro , thoda sa logic soch k try ur own test case
//hadbad m kaafi gadbad kie ho islie aaram s -> You will do best for Youself
//First, solve the problem. Then, write the code.

}
return 0;
}