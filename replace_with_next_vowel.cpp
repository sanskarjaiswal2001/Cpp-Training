#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int vow = 0;
    int cons = 0;
    for (int i = 0 ; i < str.length(); i++)
    {
        if (islower(str[i]))
        {
            switch (str[i])
            {
                case 'a': str [i] = 'e'; break;
                case 'e': str [i] = 'i'; break;
                case 'i': str [i] = 'o'; break;
                case 'o': str [i] = 'u'; break;
                case 'u': str [i] = 'a'; break;
            } 
        }
        else
        {
            switch (str[i])
            {
                case 'A': str [i] = 'E'; break;
                case 'E': str [i] = 'I'; break;
                case 'I': str [i] = 'O'; break;
                case 'O': str [i] = 'U'; break;
                case 'U': str [i] = 'A'; break;
            } 
        }
    }
    cout << str << endl;
    
}