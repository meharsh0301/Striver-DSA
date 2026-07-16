#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int hash[26] = {0};

    for (char c : s)
    {
        if (isalpha(c))      // Check if it's a letter
        {
            c = tolower(c);  // Convert uppercase to lowercase
            hash[c - 'a']++;
        }
    }

    cout << "\nFrequency of each letter:\n";

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 0)
        {
            cout << char(i + 'a') << " occures " << hash[i] <<"tmes"<< endl;
        }
    }

    return 0;
}