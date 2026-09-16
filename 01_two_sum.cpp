#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa;
        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];
            if (mapa.count(complemento)) {
                return {mapa[complemento], i};
            }
            mapa[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> res = sol.twoSum(nums, target);
    cout << "Indices encontrados: [" << res[0] << ", " << res[1] << "]" << endl;
    return 0;
}