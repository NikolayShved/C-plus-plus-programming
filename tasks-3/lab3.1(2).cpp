#include <iostream>

using namespace std;

int main()
{
  setlocale (LC_ALL,"Russian");
 int a,c,b=0,s=0, k=1,f=1;
cout<<"������� ����� a: "<<endl;
  cin>>a;
  c=a^16;
   cout<<"����� � ��������� �����: "<<endl;
 cout<<c<<endl;
  for (a;a!=0;b+=a%2*k){
    a/=2;
    k*=10;
  }
   cout<<"����� � � �������� ������� ����������: "<<endl;
 cout<<b<<endl;
for (c;c!=0;s+=c%2*f){
    c/=2;
    f*=10;
  }
  cout<<"����� � ��� ����� � �������� �������: "<<endl;
cout<<s<<endl;

    return 0;
}
