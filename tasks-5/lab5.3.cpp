#include <iostream>

using namespace std;

int main()
{
    int n, a, d=0, s=0, k=0;

    cout<<"Enter the number of numbers:"<<endl;
    cin>>n;

    cout<<"Enter numbers:"<<endl;
    while (n>0) 
    {
        cin>>a;
        if (a>0)
        {
            d++;
        } 
        else if (a<0)
        {
            s++;
        }
        else if (a==0)
        {
            k++;
        }
        n--;
    }

    cout<<"Number of positive: "<<d<<endl;
    cout<<"Number of negative: "<<s<<endl;
    cout<<"Number of zeros: "<<k<<endl;

    return 0;
}
