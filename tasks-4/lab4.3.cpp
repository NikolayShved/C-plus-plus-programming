#include <iostream>

using namespace std;

int main()
{
  int a;
    setlocale (LC_ALL, "Russian");
    cout<<"������� �����:"<<endl;
    cin>>a;
    if ((a>=1)&&(a<=10)&&(a%2==0)){
    cout<<"����� �����:"<<endl;
    }
    else{
    cout<<"����� �� �����:"<<endl;
    }
    return 0;
}
