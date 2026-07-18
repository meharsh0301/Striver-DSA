#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the size of an Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" number of elements :";
    for(int i=0 ; i<n;i++) cin>>arr[i];
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The largest element of array is :"<<largest<<endl;
    return 0;
}