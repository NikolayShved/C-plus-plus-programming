#include <iostream>

using namespace std;

int main()
{
       int n, a, d=0;
setlocale (LC_ALL, "Russian");
cout<<"¬ведите количество чисел:"<<endl;
cin>>n;
   cout<<"¬ведите числа:"<<endl;
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
