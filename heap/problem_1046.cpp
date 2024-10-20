class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) {
            return stones[0];
        }
        std::make_heap(stones.begin(),stones.end());
        while(stones.size() > 1){
            int first = stones[0];
            std::pop_heap(stones.begin(),stones.end());
            int second = stones[0];
            stones.pop_back();
            std::pop_heap(stones.begin(),stones.end());
            stones.pop_back();

            if (first != second) {
                int res = first - second;
                stones.push_back(res);
                std::push_heap(stones.begin(),stones.end());

            }
        }
        if (stones.size() == 1) {
            return stones[0];
        }
        else return 0;
    }
};
