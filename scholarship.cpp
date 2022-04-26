#include <iostream>
#include <cstring>
using namespace std;
int main (){
    int age;
    int y;
    double fi;
    int a;
    int m;
    int att;
    cin >> age >> y >> fi >> a >> m >> att;
    if (y>=2021 && a <= 2 && fi <= 200000 && (18<=age<21) && m >= 60)
    {
        cout << "Eligible"<<endl;
    }
    else if ((a>2 || (200000<fi<250000)) && m>=80 && att >= 90)
        {
            cout << "partially eligible";
        }
    else
    {
        cout << "not eligible";
    }
}