#include <iostream>

using namespace std;

int main()
{
    int n,a, k, s, d=0;
setlocale (LC_ALL, "Russian");
cout<<"¬ведите количество чисел:"<<endl;
cin>>n;
cout<<"¬ведите число K:"<<endl;
cin>>k;
 cout<<"¬ведите числа:"<<endl;
   while (n>0) {
    cin>>a;
    if (a%k==0){
    d++;
    }
    n--;
   }
   cout<<d;
    return 0;
}
