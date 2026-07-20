#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
          int removeDuplicate(vector<int>& nums){
            int n=nums.size();
            if(n==0) return 0;
            int i=0;
            for(int j=1;j<n;j++){
                if(nums[j]!=nums[i]){
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1;
          }
};
int main(){
    int n;

    cout << "Enter the size of the Array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the " << n << " elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution obj;
    int k=obj.removeDuplicate(nums);
    cout << "Number of unique elements: " << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    

    return 0;
}