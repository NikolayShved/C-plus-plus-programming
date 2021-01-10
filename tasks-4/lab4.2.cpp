#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, max=0;

    cout<<"Enter five numbers:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    if ((a>max) && (a>b) &&(a>c) &&(a>d) &&(a>e))
    {
        max=a;
        cout<<"Maximum number: "<<max;
    }  
    else if ((b>max) && (b>a) &&(b>c) &&(b>d) &&(b>e))
    {
        max=b;
        cout<<"Maximum number: "<<max;
    }  
    else if ((c>max) && (c>b) &&(c>a) &&(c>d) &&(c>e))
    {
        max=c;
        cout<<"Maximum number: "<<max;
    }  
    else if ((d>max) && (d>b) &&(d>c) &&(d>a) &&(d>e))
    {
        max=d;
        cout<<"Maximum number: "<<max;
    }  
    else if ((e>max) && (e>b) &&(e>c) &&(e>d) &&(e>a))
    {
        max=e;
        cout<<"Maximum number: "<<max;
    }

    return 0;
}
