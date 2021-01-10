#include<iostream>

using namespace std;

int main()
{
  int c, n;
 
  cout<<"Enter the size of the matrix: ";
  cin>>n;

  int **a=new int *[n];
  for (int i=0;i<n;i++)
  {
	  a[i]= new int [n];
  }

  cout<<"Entering elements:"<<endl;
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
      cout<<endl;
  }

  cout<<"Replacing diagonals:"<<endl;
  for (int i=0;i<n;i++)
  {
    c=a[i][i];
    a[i][i]=a[n-i-1][i];
    a[n-i-1][i]=c;
   
  }

  for (int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
	{
       cout<<a[i][j]<<" ";
     }
	  cout<<endl;
  }

  if (n%2==0)
  {
    cout<<"Matrix diagonals have no intersection"<<endl;
  }
  else 
  { 
    cout<<"The diagonals of the matrix have intersection"<<endl;
    cout<<"Common element: "<<a[n/2][n/2];
  }

  system("pause");
  return 0;
}