#include <bits/stdc++.h>
using namespace std;

//---------------- 1. Print Name N Times ----------------
void printName(string name, int i, int n)
{
    if(i > n)
        return;

    cout << name << endl;
    printName(name, i + 1, n);
}

//---------------- 2. Print 1 to N ----------------
void print1ToN(int i, int n)
{
    if(i > n)
        return;

    cout << i << " ";
    print1ToN(i + 1, n);
}

//---------------- 3. Print N to 1 ----------------
void printNTo1(int n)
{
    if(n == 0)
        return;

    cout << n << " ";
    printNTo1(n - 1);
}

//---------------- 4. Sum of First N Numbers ----------------
int sumN(int n)
{
    if(n == 0)
        return 0;

    return n + sumN(n - 1);
}

//---------------- 5. Factorial ----------------
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

//---------------- 6. Reverse Array ----------------
void reverseArray(int arr[], int left, int right)
{
    if(left >= right)
        return;

    swap(arr[left], arr[right]);

    reverseArray(arr, left + 1, right - 1);
}

//---------------- 7. Fibonacci ----------------
int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

//---------------- 8. Palindrome Check ----------------
bool palindrome(string str, int left, int right)
{
    if(left >= right)
        return true;

    if(str[left] != str[right])
        return false;

    return palindrome(str, left + 1, right - 1);
}

//---------------- 9. Maximum Element ----------------
int maximum(int arr[], int n, int index)
{
    if(index == n - 1)
        return arr[index];

    int maxi = maximum(arr, n, index + 1);

    return (arr[index] > maxi) ? arr[index] : maxi;
}

//---------------- 10. Print All Subsets ----------------
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

    // Include
    subset.push_back(arr[index]);
    printSubsets(arr, n, index + 1, subset);

    // Exclude
    subset.pop_back();
    printSubsets(arr, n, index + 1, subset);
}

//---------------- MAIN ----------------
int main()
{
    int choice;

    cout << "\n========== RECURSION MENU ==========\n";
    cout << "1. Print Name N Times\n";
    cout << "2. Print 1 to N\n";
    cout << "3. Print N to 1\n";
    cout << "4. Sum of First N Numbers\n";
    cout << "5. Factorial\n";
    cout << "6. Reverse Array\n";
    cout << "7. Fibonacci Number\n";
    cout << "8. Palindrome Check\n";
    cout << "9. Maximum Element in Array\n";
    cout << "10. Print All Subsets\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            string name;
            int n;

            cin.ignore();

            cout << "Enter Name: ";
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
            break;
        }

        case 3:
        {
            int n;

            cout << "Enter n: ";
            cin >> n;

            printNTo1(n);
            break;
        }

        case 4:
        {
            int n;

            cout << "Enter n: ";
            cin >> n;

            cout << "Sum = " << sumN(n);
            break;
        }

        case 5:
        {
            int n;

            cout << "Enter number: ";
            cin >> n;

            cout << "Factorial = " << factorial(n);
            break;
        }

        case 6:
        {
            int n;

            cout << "Enter size of array: ";
            cin >> n;

            int arr[n];

            cout << "Enter elements:\n";

            for(int i = 0; i < n; i++)
                cin >> arr[i];

            reverseArray(arr, 0, n - 1);

            cout << "Reversed Array:\n";

            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";

            break;
        }

        case 7:
        {
            int n;

            cout << "Enter n: ";
            cin >> n;

            cout << n << "th Fibonacci Number = "
                 << fibonacci(n);

            break;
        }

        case 8:
        {
            string str;

            cin.ignore();

            cout << "Enter String: ";
            getline(cin, str);

            if(palindrome(str, 0, str.length() - 1))
                cout << "Palindrome";
            else
                cout << "Not Palindrome";

            break;
        }

        case 9:
        {
            int n;

            cout << "Enter size of array: ";
            cin >> n;

            int arr[n];

            cout << "Enter elements:\n";

            for(int i = 0; i < n; i++)
                cin >> arr[i];

            cout << "Maximum = "
                 << maximum(arr, n, 0);

            break;
        }

        case 10:
        {
            int n;

            cout << "Enter size of array: ";
            cin >> n;

            int arr[n];

            cout << "Enter elements:\n";

            for(int i = 0; i < n; i++)
                cin >> arr[i];

            vector<int> subset;

            cout << "\nAll Subsets:\n";

            printSubsets(arr, n, 0, subset);

            break;
        }

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}