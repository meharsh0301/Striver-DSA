#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    cout << "The single number is: "
         << obj.singleNumber(nums) << endl;

    return 0;
}