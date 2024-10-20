class Solution {
public:
    int fillCups(vector<int>& amount) {
        std::make_heap(amount.begin(),amount.end());
        int count = 0 ;
        while (amount[0] > 0 || amount[1] > 0 || amount[2] > 0){
        
            amount[0]-=1;
            std::pop_heap(amount.begin(),amount.end());

            amount[0]-=1;
            std::pop_heap(amount.begin(),amount.end());

            count+=1;
        }
        return count;
    }
};
