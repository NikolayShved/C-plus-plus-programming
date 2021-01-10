#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    setlocale (LC_ALL, "Russian");
    cout<<"¬ведите три числа:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if ((a+b+c>=1)&&(a+b+c<=10)){
    cout<<a-b<<endl;
    }
    else{
        cout<<a*b*c<<endl;
    }
    return 0;
}
