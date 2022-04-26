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
        switch (tolower(str[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vow++;
                break;
            default:
                cons++;
                break;
        } 
    }
    cout << "Vowels : " << vow << endl << "Consonants: " << cons << endl;
    
}