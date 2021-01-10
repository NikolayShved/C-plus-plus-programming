#include <iostream>

using namespace std;

int main()
{
   int n, a, d=0;

   cout<<"Enter the number of numbers:"<<endl;
   cin>>n;

   cout<<"Enter numbers:"<<endl;
   while (n>0) 
   {
       cin>>a;
       if (a%2!=0)
       {
          d += a;
       }
       n--;
   }

   cout<<d;

   return 0;
}
