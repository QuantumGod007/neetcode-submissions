class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<long long> check_mul;
        int n= nums.size();
        for(int i=0;i<n;i++) {
            if(check_mul.count(nums[i])) {
                return true;
            }
            check_mul.insert(nums[i]);
        }
        return false;
    }
};