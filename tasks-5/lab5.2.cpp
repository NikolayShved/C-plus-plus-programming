#include <iostream>

using namespace std;

int main()
{
       int n, a, d=0;
setlocale (LC_ALL, "Russian");
cout<<"������� ���������� �����:"<<endl;
cin>>n;
   cout<<"������� �����:"<<endl;
   while (n>0) {
    cin>>a;
    if (a%2!=0){
    d=d+a;
    }
    n--;
   }
   cout<<d;

    return 0;
}
