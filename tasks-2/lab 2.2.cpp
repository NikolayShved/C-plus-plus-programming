#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    a/=10;
    e=a%10;
    cout<<b<<c<<d<<e<<endl;

    return 0;
}
