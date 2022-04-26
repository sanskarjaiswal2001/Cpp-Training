#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string s;
    cout << "enter to check : " << endl;
    getline(cin,s);
    int l = 0;
    int r = s.length() - 1;
    while (l<=r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
            if (l==r || r == l+1)
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
            break;
        }
    }
}