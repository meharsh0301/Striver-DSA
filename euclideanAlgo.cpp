#include <bits/stdc++.h>
using namespace std;

void euclidean() {
    int a, b, result = 1, temp;

    cout << "Enter the two numbers to find their GCD: ";
    cin >> a >> b;

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    while (result != 0) {
        result = a % b;
        a = b;
        b = result;
    }

    cout << "The GCD is " << a << endl;
}

int main() {
    euclidean();
    return 0;
}