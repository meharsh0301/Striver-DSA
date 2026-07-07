#include <bits/stdc++.h>
using namespace std;

int digit_count(int num) {
    if (num == 0)
        return 1;

    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int reverse_digit(int num) {
    int reverse = 0;
    int digit;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return reverse;
}

bool checkPalindrom(int num , int reverse){
}
int main() {
    int num;
    int choice;
    cout << "Enter the number: ";
    cin >> num;
    cout<<"Enter the following option - 1.Count the digit , 2.Reverse of number , 3.Check the palindrom :";
    cin>>choice;
    int digits = digit_count(num);
    int reverse = reverse_digit(num);
    switch(choice){
        case 1:
            cout << "The number of digits in num is: " << digits << endl;
            
        case 2:
            cout << "The reverse of number is: "<< setw(digits) << setfill('0') << reverse << endl;
            break;  
    }

    return 0;
}