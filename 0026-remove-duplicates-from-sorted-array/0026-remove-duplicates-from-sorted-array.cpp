class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    unordered_map<int, int> freqMap;
        int k = 0;
        for (int num : nums) {
            if (freqMap[num] == 0) {
                nums[k++] = num;
            }
            freqMap[num]++;
        }
        return k;
    }
};
