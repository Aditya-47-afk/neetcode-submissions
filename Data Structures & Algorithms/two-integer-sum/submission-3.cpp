class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> h;
        for (int i = 0; i < nums.size(); i++){
            h[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++){
            int t = target - nums[i];
            if (h.count(t) && h[t] != i){
                return {i, h[t]};
            }
        }
        return {};
    }
};
