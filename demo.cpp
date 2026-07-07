#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    float b;
    char ch;
    string s;

    cout<<"Enter the values of a ,b , ch and s :"<<endl;
    cin >> a;
    cin >> b;
    cin >> ch;
    cin.ignore();
    getline(cin, s);

    cout <<"entered vale of a,b,ch and s are :"<< a << "\n" << b << "\n" << ch << "\n" << s;
   
    return 0;
}