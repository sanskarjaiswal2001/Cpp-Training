#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int tmp = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            continue;
        }
        else 
        {
            tmp = i;
            break;
        }
    }
    for (int i = tmp; i < str.length();i++)
    {
        cout << str[i];
    }
}