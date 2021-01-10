#include <iostream>

using namespace std;

int main()
{
    int n,a, k, s, d=0;

    cout<<"Enter the number of numbers:"<<endl;
    cin>>n;

    cout<<"Enter number K:"<<endl;
    cin>>k;

    cout<<"Enter numbers:"<<endl;
    while (n>0) 
    {
        cin>>a;
        if (a%k==0)
        {
            d++;
        }
        n--;
    }

    cout<<d;

    return 0;
}
