#include <iostream>

using namespace std;

int main()
{
int a, b, c, d, e, max=0;
    setlocale (LC_ALL, "Russian");
    cout<<"Введите пять чисел:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if ((a>max) && (a>b) &&(a>c) &&(a>d) &&(a>e)){
    max=a;
    cout<<"Максимальное число: "<<max;
    }  if ((b>max) && (b>a) &&(b>c) &&(b>d) &&(b>e)){
    max=b;
    cout<<"Максимальное число: "<<max;
    }  if ((c>max) && (c>b) &&(c>a) &&(c>d) &&(c>e)){
    max=c;
    cout<<"Максимальное число: "<<max;
    }  if ((d>max) && (d>b) &&(d>c) &&(d>a) &&(d>e)){
    max=d;
    cout<<"Максимальное число: "<<max;
    }  if ((e>max) && (e>b) &&(e>c) &&(e>d) &&(e>a)){
    max=e;
    cout<<"Максимальное число: "<<max;
    }

return 0;

}
