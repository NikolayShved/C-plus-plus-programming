#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int d;
    cin>>d;
    const int s=4;
  std::bitset <8> bits(d);
  bits.set(s);
  cout<<bits<<endl;
  bits.flip(s);
  cout<<bits;
    return 0;
}
