#include <iostream>

using namespace std;

int main()
{
int a, b, c, d, e, max=0;
    setlocale (LC_ALL, "Russian");
    cout<<"������� ���� �����:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if ((a>max) && (a>b) &&(a>c) &&(a>d) &&(a>e)){
    max=a;
    cout<<"������������ �����: "<<max;
    }  if ((b>max) && (b>a) &&(b>c) &&(b>d) &&(b>e)){
    max=b;
    cout<<"������������ �����: "<<max;
    }  if ((c>max) && (c>b) &&(c>a) &&(c>d) &&(c>e)){
    max=c;
    cout<<"������������ �����: "<<max;
    }  if ((d>max) && (d>b) &&(d>c) &&(d>a) &&(d>e)){
    max=d;
    cout<<"������������ �����: "<<max;
    }  if ((e>max) && (e>b) &&(e>c) &&(e>d) &&(e>a)){
    max=e;
    cout<<"������������ �����: "<<max;
    }

return 0;

}
