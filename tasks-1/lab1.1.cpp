#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double y,x,ex, temp;

    cin>>x;

    temp= sin (x);
    ex= pow(M_E,x);
    y=temp+3*ex;

    cout<<y<<endl;

    return 0;
}