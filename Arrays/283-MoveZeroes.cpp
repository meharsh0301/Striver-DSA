#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
       void moveZeroes(vector<int>& nums){
            int j=0;
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    swap(nums[i],nums[j]);
                    j++;
                }
            }
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
    obj.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}