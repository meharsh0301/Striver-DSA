#include <bits/stdc++.h>
using namespace std;

// Function to find the kth largest element
int findKthLargest(vector<int>& nums, int k)
{
    // Create a Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;

    // Traverse the array
    for(int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);

        // Keep only k largest elements
        if(pq.size() > k)
        {
            pq.pop();
        }
    }

    return pq.top();
}

int main()
{
    int n, k;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    // Check if k is valid
    if(k <= 0 || k > n)
    {
        cout << "Invalid value of k!" << endl;
        return 0;
    }

    int ans = findKthLargest(nums, k);

    cout << "\nThe " << k << "th largest element is: " << ans << endl;

    return 0;
}