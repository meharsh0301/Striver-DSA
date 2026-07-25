#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    cout << "Maximum consecutive 1s = "
         << obj.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}