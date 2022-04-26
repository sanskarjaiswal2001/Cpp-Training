#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
bool palindrome(int area)
{
    int n = area;
    int rev = 0;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (rev == area)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main (){
    int a,b,c;
    double s;
    double area;
    double pal;
    cin >> a >> b >> c;
    s = a + b + c;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if (palindrome(area))
        cout << "palindrome";
    else
        cout << "not palindrome";
}