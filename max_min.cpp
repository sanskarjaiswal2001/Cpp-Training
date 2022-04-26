#include <iostream>
using namespace std;
int main (){
    int max = 0;
    int min = 0;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array: " << endl;
    for (int i = 0 ;i < n; i ++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ;i < n; i ++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "max : " << max << endl << "min : " << min;
}