#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arr1[n][n];
    int arr2[n][n];
    for (int i = 0 ; i < n; i ++)
    {
        for (int j = 0;  j < i; j ++)
        {
            arr1[i][j] = n;
        }
            continue;
    }
    for (int i = n ; i > 0; i --)
    {
        for (int j = 0;  j < i; j ++)
        {
            arr1[i][j] = n;
        }
            continue;
    }
    //print 2d array arr1
    for (int i = 0 ; i < n; i ++)
    {
        for (int j = 0;  j < n; j ++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    //print 2d array arr2
    for (int i = 0 ; i < n; i ++)
    {
        for (int j = 0;  j < n; j ++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}