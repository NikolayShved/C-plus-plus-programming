#include <iostream>

using namespace std;

int main()
{
    int n, a, d=0, s=0, k=0;
setlocale (LC_ALL, "Russian");
cout<<"������� ���������� �����:"<<endl;
cin>>n;
   cout<<"������� �����:"<<endl;
   while (n>0) {
    cin>>a;
    if (a>0){
    d++;
    } if (a<0){
    s++;
    }if (a==0){
    k++;
    }
    n--;
   }
   cout<<"���������� �������������: "<<d<<endl;
 cout<<"���������� �������������: "<<s<<endl;
 cout<<"���������� �����: "<<k<<endl;
    return 0;
}
