#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<<"Insert the number:"<<endl;
    cin>>a;

    if ((a>=1)&&(a<=10)&&(a%2==0))
    {
        cout<<"Number fits!"<<endl;
    }
    else
    {
        cout<<"Number doesn't fit!"<<endl;
    }

    return 0;
}
