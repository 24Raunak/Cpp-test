// solved using hash maps
#include <bits/stdc++.h>
using  namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (mp.count(need)) {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 5, 43, 8, 4, 43};
    int target = 51;
    Solution myObj;
    vector<int> result = myObj.twoSum(nums, target);
    if(!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solutions found";
    }
    return 0;
}