class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int numsSize = nums.size();
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
    }
};