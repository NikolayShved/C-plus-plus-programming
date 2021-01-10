#include <iostream>

using namespace std;

int main()
{
  int a;
    setlocale (LC_ALL, "Russian");
    cout<<"Введите число:"<<endl;
    cin>>a;
    if ((a>=1)&&(a<=10)&&(a%2==0)){
    cout<<"Число супер:"<<endl;
    }
    else{
    cout<<"Число не супер:"<<endl;
    }
    return 0;
}
