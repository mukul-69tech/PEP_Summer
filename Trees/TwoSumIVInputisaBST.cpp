//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/



#include<iostream>
using namespace std;


class Solution {
private:
    TreeNode* helper(const std::vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr;
        }

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = helper(nums, left, mid - 1);
        root->right = helper(nums, mid + 1, right);

        return root;
    }

public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};