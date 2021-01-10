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
    cout<<"Диагонали матрицы не имеют пересечения "<<endl;
  }
  else 
  { 
    cout<<"Диагонали матрицы имеют пересечение "<<endl;
    cout<<"Общий элемент: "<<a[n/2][n/2];
  }

  system("pause");
  return 0;
}