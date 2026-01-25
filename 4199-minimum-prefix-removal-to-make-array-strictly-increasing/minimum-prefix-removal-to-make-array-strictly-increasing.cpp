class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i< nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                count = i;
            }
        }
        return count;
    }
};