#include <iostream>
using namespace std;
int fact (int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int m = n;
    int sum = 0;
    int temp;
    while (n>0)
    {
        temp = n % 10;
        sum += fact (temp);
        n = n/10;
    }
    if (sum == m)
    {
        cout << "yes";
    }
    else 
    {
        cout << "No";
    }
}