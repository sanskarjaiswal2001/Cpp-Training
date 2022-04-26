//write a program to print square root of a number without using sqrt() function.
#include <iostream>
using namespace std;
int main (){
    int count = 0;
    int n;
    cin >> n;
    int i = 1;
    while (n >= 0)
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            n = n - i;
            count ++;
            i = i + 2;
        }
    }
    cout << count << endl;
}
