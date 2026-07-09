#include <iostream>
using namespace std;
//-------------------- GCD --------------------
void GCD()
{
    int a, b;

    cout << "Enter two numbers : ";
    cin >> a >> b;

    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD = " << a << endl;
}

//---------------- Armstrong ------------------

void Armstrong()
{
    int num, original, digit;
    int sum = 0;

    cout << "Enter number : ";
    cin >> num;

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    cout << endl;
}

//--------------- Divisors --------------------

void Divisors()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    cout << "Divisors are : ";

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << " ";
    }

    cout << endl;
}

//-------------- nth Fibonacci ----------------

void Fibonacci()
{
    int n;

    cout << "Enter n : ";
    cin >> n;

    if(n == 0)
    {
        cout << 0 << endl;
        return;
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int first = 0;
    int second = 1;
    int next;

    for(int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    cout << "Fibonacci Number = " << second << endl;
}

//--------- Position of Fibonacci -------------

void Position()
{
    int n;

    cout << "Enter Fibonacci Number : ";
    cin >> n;

    if(n == 0)
    {
        cout << "Position = 0";
        return;
    }

    int first = 0;
    int second = 1;
    int next;
    int position = 1;

    while(second < n)
    {
        next = first + second;
        first = second;
        second = next;
        position++;
    }

    if(second == n)
        cout << "Position = " << position << endl;
    else
        cout << "Number is not present in Fibonacci Series" << endl;
}

//--------------- Prime -----------------------

void Prime()
{
    int n;
    bool prime = true;

    cout << "Enter number : ";
    cin >> n;

    if(n <= 1)
    {
        prime = false;
    }
    else
    {
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if(prime)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    cout << endl;
}

//---------------- Main ------------------------

int main()
{
    int choice;

    cout << "========== MENU ==========\n";
    cout << "1. GCD / HCF\n";
    cout << "2. Armstrong Number\n";
    cout << "3. Print All Divisors\n";
    cout << "4. nth Fibonacci Number\n";
    cout << "5. Position of Fibonacci Number\n";
    cout << "6. Prime Number\n";
    cout << "7. Exit\n";

    cout << "\nEnter Choice : ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            GCD();
            break;

        case 2:
            Armstrong();
            break;

        case 3:
            Divisors();
            break;

        case 4:
            Fibonacci();
            break;

        case 5:
            Position();
            break;

        case 6:
            Prime();
            break;

        case 7:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}