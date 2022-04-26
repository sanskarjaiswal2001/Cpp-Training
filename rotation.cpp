#include <iostream>
#include <cstring>
using namespace std;
int main (){
    string s;
    int n;
    char r;
    string one = "";
    string two = "";
    string final;
    cin >> s >> n >> r;
    if (r == 'R')
    {
        n = s.length()-n;
    }
    for (int i = 0; i < s.length(); i ++)
    {
        if (i < n)
        {
            two += s[i];
        }
        else 
        {
            one += s[i];
        }
    }
    final = one + two;
    cout << final;
}