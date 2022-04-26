//write a program to print the matrix in a spiral manner
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int k=0;
    int l=0;
    int m=n-1;
    int p=n-1;
    while(k<=m && l<=p){
        for(int i=l;i<=p;i++){
            cout<<a[k][i]<<" ";
        }
        k++;
        for(int i=k;i<=m;i++){
            cout<<a[i][p]<<" ";
        }
        p--;
        for(int i=p;i>=l;i--){
            cout<<a[m][i]<<" ";
        }
        m--;
        for(int i=m;i>=k;i--){
            cout<<a[i][l]<<" ";
        }
        l++;
    }
    return 0;
}