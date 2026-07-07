#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n) {
    int left=0;
    int right =n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
    int i;
    int arr[]={1,2,3,4,5,6,99,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr , n );
    cout<<"reversed array is :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}