#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a vector of pairs to store elements and their original indices
        vector<pair<int, int>> numWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            numWithIndex.push_back({nums[i], i});
        }

        // Sort the array of pairs based on the first element (the number itself)
        sort(numWithIndex.begin(), numWithIndex.end());

        // Initialize two pointers
        int l = 0;
        int r = numWithIndex.size() - 1;

        // Use two pointers to find the two numbers that add up to the target
        while (l < r) {
            int sum = numWithIndex[l].first + numWithIndex[r].first;

            if (sum == target) {
                // Return the original indices of the two numbers
                return {numWithIndex[l].second, numWithIndex[r].second};
            } else if (sum < target) {
                // Move the left pointer to the right to increase the sum
                l++;
            } else {
                // Move the right pointer to the left to decrease the sum
                r--;
            }
        }

        // Return empty vector if no solution is found (though the problem guarantees one)
        return {};
    }
};
