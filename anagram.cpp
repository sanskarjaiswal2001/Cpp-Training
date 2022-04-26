#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    string a;
    string b;
    cin >> a >> b;
    int lena = a.length();
    int lenb = b.length();
    if (lena != lenb)
    {
        cout << "not anagram";
    }
    else
    {
        int i;
        int j;
        int count = 0;
        for (i = 0; i < lena; i++)
        {
            for (j = 0; j < lenb; j++)
            {
                if (a[i] == b[j])
                {
                    count++;
                }
            }
        }
        if (count == lena)
        {
            cout << "anagram";
        }
        else
        {
            cout << "not anagram";
        }
    }
}