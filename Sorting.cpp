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

void merge(int arr[],int low , int mid , int high){
    vector<int> temp;
    int left=low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high ; i++){
        arr[i]= temp[i-low];
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}
int partition(int arr[],int low , int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low ; j<high ; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int arr[],int low , int high){
    if(low<high){
        int pIndex=partition(arr , low, high);
        quickSort(arr , low , pIndex-1);
        quickSort(arr , pIndex+1 , high);
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
    cout << "1.Selection Sort\n2.Bubble sort\n3.Insertion sort\n3.Merge sort\n4.Quick sort\n";
    cout << "Choose the following sorting technique:";
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
    case 4:
        mergeSort(arr,0, n-1);
        break;
    case 5:
        quickSort(arr,0, n-1);
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