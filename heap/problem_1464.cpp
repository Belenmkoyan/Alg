class Solution {
public:
    int maxProduct(vector<int>& nums) {
        std :: make_heap(nums.begin(),nums.end());
        int res1 = nums[0]-1;
        
        std :: pop_heap(nums.begin(),nums.end());
        nums.pop_back();
        int res2 = nums[0] - 1;
        int product = res1 * res2;

        return product;
         }
};
