/*
=========================================================
PATTERN REFERENCE GUIDE (n = 5)
=========================================================

Pattern 1 : Solid Square

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


---------------------------------------------------------

Pattern 2 : Right Triangle

*
* *
* * *
* * * *
* * * * *


---------------------------------------------------------

Pattern 3 : Number Triangle

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


---------------------------------------------------------

Pattern 4 : Pyramid

    *
   ***
  *****
 *******
*********


---------------------------------------------------------

Pattern 5 : Inverted Pyramid

*********
 *******
  *****
   ***
    *


---------------------------------------------------------

Pattern 6 : Diamond

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *


---------------------------------------------------------

Pattern 7 : Star Diamond (using rows)

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*


---------------------------------------------------------

Pattern 8 : Hollow Square

* * * * *
*       *
*       *
*       *
* * * * *


---------------------------------------------------------

Pattern 9 : Binary Triangle

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

NOTE:
Your current code has a bug because start is redeclared
inside if/else blocks.

Correct version:

for(int i=0;i<n;i++){
    int start=(i%2==0)?1:0;
    for(int j=0;j<=i;j++){
        cout<<start<<" ";
        start=1-start;
    }
    cout<<endl;
}

---------------------------------------------------------

Pattern 10 : Number Crown

1        1
12      21
123    321
1234  4321
1234554321

(Note: spacing depends on console font)


---------------------------------------------------------

Pattern 11 : Continuous Number Triangle

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


---------------------------------------------------------

Pattern 12 : Alphabet Triangle

A
A B
A B C
A B C D
A B C D E


---------------------------------------------------------

Pattern 13 : Reverse Alphabet Triangle

A B C D E
A B C D
A B C
A B
A


---------------------------------------------------------

Pattern 14 : Same Character Triangle

A
B B
C C C
D D D D
E E E E E


=========================================================
CHOICE TABLE
=========================================================

1  -> Solid Square
2  -> Right Triangle
3  -> Number Triangle
4  -> Pyramid
5  -> Inverted Pyramid
6  -> Diamond
7  -> Star Diamond
8  -> Hollow Square
9  -> Binary Triangle
10 -> Number Crown
11 -> Continuous Number Triangle
12 -> Alphabet Triangle
13 -> Reverse Alphabet Triangle
14 -> Same Character Triangle

=========================================================
*/
#include <bits/stdc++.h>
using namespace std;
int n,i , j , k ;
void pattern1(int n){
    int i, j ;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout <<j <<" ";
        }
        cout << endl;
    }

}
void pattern4(int n){
    for(int i = 0; i<n;i++){
        for(int k = 0; k<n-i-1; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int k = 0; k<n-i-1; k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i = 0; i<n;i++){
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*n-(2*i + 1); j++){
            cout<<"*";
        }
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i = 0; i<n;i++){
        for(int k = 0; k<n-i-1; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int k = 0; k<n-i-1; k++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 1; i<n;i++){
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*n-(2*i + 1); j++){
            cout<<"*";
        }
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
     }
}
void pattern9(int n){
    int start=1;
    for (int i = 0; i <n; i++){
        if(i%2==0){
            int start=1;
        } else{
            int start = 0;
        }
        for(int j=0;j<i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    
}
void pattern10(int n){
    int space=2*(n-1);
    for(int i =1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=0;k<=space;k++){
            cout<<" ";
        }
        for(int j = i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
void pattern11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start+=1;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i =0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern13(int n){
    for(int i=n-1;i>=0;i--){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0; i<n; i++){

        char ch='A';
        int breakpoint=i;

        for(int k=0; k<n-i-1; k++){
            cout<<" ";
        }

        for(int j=0; j<2*i+1; j++){

            cout<<ch;

            if(j<breakpoint)
                ch++;
            else
                ch--;
        }

        cout<<endl;
    }
}
void pattern16(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {

        int stars;
        if (i < n)
            stars = i + 1;
        else
            stars = 2 * n - i - 1;

        int spaces = 2 * (n - stars);

        // Left wing
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }

        // Middle gap
        for (int j = 0; j < spaces; j++) {
            cout << "  ";
        }

        // Right wing
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}



int main(){
    int choice, n ;
    cout<<"Enter the pattern to print: ";
    cin >> choice;
    cout<<"enter the height of the pattern: ";
    cin >> n;
    switch(choice){
        case 1:
            pattern1(n);
            break;
        case 2:
            pattern2(n);
            break;
        case 3:
            pattern3(n);
            break;
        case 4:
            pattern4(n);
            break;
        case 5:
            pattern5(n);
            break;
        case 6:
            pattern6(n);
            break;
        case 7:
            pattern7(n);
            break;
        case 8:
            pattern8(n);
            break;
        case 9:
             pattern9(n);
             break;
        case 10:
             pattern10(n);
             break;
        case 11:
             pattern11(n);
             break;
        case 12:
             pattern12(n);
             break;
        case 13:
             pattern13(n);
             break;
        case 14:
             pattern14(n);
             break;
        case 15:
             pattern15(n);
             break;
        case 16:
             pattern16(n);
             break;
        default:
            cout<<"Invalid input"<<endl;
    }
    return 0;
}