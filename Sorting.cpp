#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray before sorting:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    int choice;

    cout << "\n\n===== MENU =====\n";
    cout << "Choose the following sorting technique:\n";
    cout << "1.Selection Sort\n2.Bubble sort\n3.Insertion sort\n";
    cin >> choice;

    switch (choice) {
    case 1:
        selectionSort(arr, n);
        break;
    case 2:
        bubbleSort(arr, n);
        break;
    case 3:
        insertionSort(arr, n);
        break;
    default:
        cout << "Invalid input! Try again.\n";
        return 0;
    }

    cout << "\nArray after sorting:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}