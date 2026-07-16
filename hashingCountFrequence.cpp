#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int hash[100] = {0};

    for(int i = 0; i < n; i++)
        hash[arr[i]]++;

    for(int i = 0; i < 100; i++)
    {
        if(hash[i] > 0)
            cout << i << " occurs "<< hash[i]<< " times\n";
    }

    return 0;
}