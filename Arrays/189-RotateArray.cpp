#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 0)
            return;

        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    int n;

    cout << "Enter the size of the Array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter how many times to rotate: ";
    cin >> k;

    Solution obj;
    obj.rotate(nums, k);

    cout << "Array after rotating elements: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}