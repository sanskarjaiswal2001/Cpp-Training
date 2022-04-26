#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cin >> n;
    int arr[n];
    int fin[n];
    int l = 0;
    int r = n-1;
    for (int i = 0 ;i < n; i ++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ; i < n ; i ++)
    {
        for (int j = 0; j < n - i - 1; j ++)
        {
            if (arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0 ;i < n; i ++)
    {
        if (i % 2 ==0)
        {
            fin[l] = arr[i];
            l++;
        }
        else 
        {
            fin[r] = arr[i];
            r--;
        }
    }
    for (int i = n - 1  ;i >= 0; i --)
    {
        cout << fin[i]<< " ";
    }
}