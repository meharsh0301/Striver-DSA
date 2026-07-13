#include <bits/stdc++.h>
using namespace std;

// 1. Print Name N Times
void printName(string name, int i, int n)
{
    if(i > n)
        return;

    cout << name << "\n";
    printName(name, i + 1, n);
}

// 2. Print 1 to N
void print1ToN(int i, int n)
{
    if(i > n)
        return;

    cout << i << " ";
    print1ToN(i + 1, n);
}

// 3. Print N to 1
void printNTo1(int n)
{
    if(n == 0)
        return;

    cout << n << " ";
    printNTo1(n - 1);
}

// 4. Sum of First N Numbers
int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

// 5. Factorial
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

// 6. Reverse Array
void reverseArray(int arr[], int left, int right)
{
    if(left >= right)
        return;

    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}

// 7. Palindrome Check
bool palindrome(string str, int left, int right)
{
    if(left >= right)
        return true;

    if(str[left] != str[right])
        return false;

    return palindrome(str, left + 1, right - 1);
}

// 8. Maximum Element in Array
int maximum(int arr[], int n, int index)
{
    if(index == n - 1)
        return arr[index];

    int maxi = maximum(arr, n, index + 1);

    if(arr[index] > maxi)
        return arr[index];
    else
        return maxi;
}

// 9. Print All Subsets
void printSubsets(int arr[], int n, int index, vector<int> &subset)
{
    if(index == n)
    {
        cout << "{ ";
        for(int x : subset)
            cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // Include current element
    subset.push_back(arr[index]);
    printSubsets(arr, n, index + 1, subset);

    // Exclude current element
    subset.pop_back();
    printSubsets(arr, n, index + 1, subset);
}

int main()
{
    int choice;

    cout << "\n===== RECURSION PROGRAMS =====\n";
    cout << "1. Print Name N Times\n";
    cout << "2. Print 1 to N\n";
    cout << "3. Print N to 1\n";
    cout << "4. Sum of First N Numbers\n";
    cout << "5. Factorial\n";
    cout << "6. Reverse Array\n";
    cout << "7. Palindrome Check\n";
    cout << "8. Maximum in Array\n";
    cout << "9. Print All Subsets\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            string name;
            int n;

            cin.ignore(); // Ignore leftover newline

            cout << "Enter name: ";
            getline(cin, name);

            cout << "Enter n: ";
            cin >> n;

            printName(name, 1, n);
            break;
        }

        case 2:
        {
            int n;
            cout << "Enter n: ";
            cin >> n;

            print1ToN(1, n);
            cout << endl;
            break;
        }

        case 3:
        {
            int n;
            cout << "Enter n: ";
            cin >> n;

            printNTo1(n);
            cout << endl;
            break;
        }

        case 4:
        {
            int n;
            cout << "Enter n: ";
            cin >> n;

            cout << "Sum = " << sum(n) << endl;
            break;
        }

        case 5:
        {
            int n;
            cout << "Enter n: ";
            cin >> n;

            cout << "Factorial = " << factorial(n) << endl;
            break;
        }

        case 6:
        {
            int arr[] = {1, 2, 3, 4, 5};
            int n = sizeof(arr) / sizeof(arr[0]);

            reverseArray(arr, 0, n - 1);

            cout << "Reversed Array: ";
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << endl;
            break;
        }

        case 7:
        {
            string str;

            cin.ignore();

            cout << "Enter a string: ";
            getline(cin, str);

            if(palindrome(str, 0, str.length() - 1))
                cout << "Palindrome\n";
            else
                cout << "Not Palindrome\n";

            break;
        }

        case 8:
        {
            int arr[] = {7, 12, 3, 25, 18};
            int n = sizeof(arr) / sizeof(arr[0]);

            cout << "Maximum = " << maximum(arr, n, 0) << endl;
            break;
        }

        case 9:
        {
            int arr[] = {1, 2, 3};
            int n = sizeof(arr) / sizeof(arr[0]);

            vector<int> subset;

            cout << "All Subsets:\n";
            printSubsets(arr, n, 0, subset);
            break;
        }

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}