#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};

int main() {
    int n;

    cout << "Enter the size of the Array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the " << n << " elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;

    if (obj.check(arr)) {
        cout << "Array is Sorted and Rotated.";
    } else {
        cout << "Array is NOT Sorted and Rotated.";
    }

    return 0;
}