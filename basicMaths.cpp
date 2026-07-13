#include <bits/stdc++.h>
using namespace std;

//---------------- PALINDROME ----------------
void palindrome()
{
    int num, temp, rev = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if(rev == num)
        cout << num << " is a Palindrome Number."<<endl;
    else
        cout << num << " is NOT a Palindrome Number."<<endl;
}

//---------------- HCF / GCD ----------------
void hcf()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while(b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << "HCF = " << a<<endl;
}

//---------------- ARMSTRONG ----------------
void armstrong()
{
    int num, temp, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int count = 0;
    int copy = num;

    while(copy != 0)
    {
        count++;
        copy /= 10;
    }

    temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == num)
        cout << num << " is an Armstrong Number.";
    else
        cout << num << " is NOT an Armstrong Number.";
}

//---------------- DIVISORS ----------------
void divisors()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Divisors are: ";

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << " ";
    }
    cout<<endl;
}

//---------------- NTH FIBONACCI ----------------
void nthFibonacci()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    if(n == 0)
    {
        cout << 0;
        return;
    }

    if(n == 1)
    {
        cout << 1;
        return;
    }

    int a = 0, b = 1, c;

    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Nth Fibonacci Number = " << b<<endl;
}

//---------------- POSITION OF FIBONACCI ----------------
void fibonacciPosition()
{
    int num;

    cout << "Enter Fibonacci Number: ";
    cin >> num;

    int a = 0, b = 1, c;
    int position = 1;

    if(num == 0)
    {
        cout << "Position = 0";
        return;
    }

    while(b < num)
    {
        c = a + b;
        a = b;
        b = c;
        position++;
    }

    if(b == num)
        cout << "Position = " << position;
    else
        cout << "Number is NOT present in Fibonacci Series.";
}

//---------------- PRIME ----------------
void prime()
{
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if(n <= 1)
        isPrime = false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << n << " is Prime.";
    else
        cout << n << " is NOT Prime.";
}

//---------------- MAIN ----------------
int main()
{
    int choice;

    cout << "\n========== MENU ==========\n";
    cout << "1. Check Palindrome Number\n";
    cout << "2. Find HCF / GCD\n";
    cout << "3. Check Armstrong Number\n";
    cout << "4. Print All Divisors\n";
    cout << "5. Print Nth Fibonacci Number\n";
    cout << "6. Find Position of Fibonacci Number\n";
    cout << "7. Check Prime Number\n";
    cout << "8. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            palindrome();
            break;

        case 2:
            hcf();
            break;

        case 3:
            armstrong();
            break;

        case 4:
            divisors();
            break;

        case 5:
            nthFibonacci();
            break;

        case 6:
            fibonacciPosition();
            break;

        case 7:
            prime();
            break;

        case 8:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}