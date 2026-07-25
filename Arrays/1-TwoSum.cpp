#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};   // <-- Missing semicolon added

int main() {
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target: ";
    cin >> target;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices are: " << result[0] << " " << result[1] << endl;
        cout << "Numbers are: " << nums[result[0]] << " + " << nums[result[1]]
             << " = " << target << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}