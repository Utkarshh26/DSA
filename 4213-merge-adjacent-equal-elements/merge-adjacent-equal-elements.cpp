class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector <long long> stk;
        for (int x : nums){
            long long cur = x;
            while (!stk.empty() && stk.back() == cur){
                cur += stk.back();
                stk.pop_back();
            }
            stk.push_back(cur);
        }
        return stk;
    }
};