#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, z, y;
    double temp, p;

    cin>>x;
    cin>>z;

    temp=log (x);
    p=atan(z/x);
    y=15/temp+p*1,5;

    cout<<y<<endl;

    return 0;
}