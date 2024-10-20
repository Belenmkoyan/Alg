#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> numberGame(std::vector<int>& nums) {
        std::vector<int> arr; 
        std::make_heap(nums.begin(), nums.end(), std::greater<int>());

        while (nums.size() > 1) {
            std::pop_heap(nums.begin(), nums.end(), std::greater<int>());
            int alice = nums.back(); 
            nums.pop_back();

            std::pop_heap(nums.begin(), nums.end(), std::greater<int>()); 
            int bob = nums.back(); 
            nums.pop_back();

            arr.push_back(bob);
            arr.push_back(alice);
        }

        return arr;
    }
};
