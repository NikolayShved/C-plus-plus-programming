#include <iostream>

using namespace std;

int main()
{
    int n, a, d=0, s=0, k=0;
setlocale (LC_ALL, "Russian");
cout<<"Введите количество чисел:"<<endl;
cin>>n;
   cout<<"Введите числа:"<<endl;
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
   cout<<"Количество положительных: "<<d<<endl;
 cout<<"Количество отрицательных: "<<s<<endl;
 cout<<"Количество нулей: "<<k<<endl;
    return 0;
}
