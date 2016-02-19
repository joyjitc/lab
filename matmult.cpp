#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

class mult
{
public:
  int a[100][100];
  int b[100][100];
  int sum[100][100];
  int r1,c1,r2,c2,f=0;

  void input(void);
  void multmat(void);
  void disp(void);

};

void mult::input()
{
  cout<<"Enter the rows and columns for Matrix 1  \n";
  cin>>r1>>c1;
  cout<<"Enter the rows and columns for Matrix 2 \n";
  cin>>r2>>c2;
  if(c1!=r2)
  {
    cout<<"Can't Multiply\n";
    exit(0);
    f=1;
  }
  cout<<"Enter elements for 1st matrix\n";
  for(int i=0;i<r1;i++)
    for (int j = 0; j < c1; ++j)
    {
      cin>>a[i][j];
    }
  cout<<"Enter elements for 2nd matrix\n";
  for(int i=0;i<r2;i++)
    for (int j = 0; j < c2; ++j)
    {
      cin>>b[i][j];
    }
}

void mult::multmat()
{
  if(f==1)
    exit(0);
  for(int i=0;i<r1;i++)
   {  //int res=0;
    for (int j = 0; j < c1; ++j)
    {
      for(int k=0;k<r1;k++)
       sum[i][j]+=a[i][k]*b[k][j];

    }
   }
}

void mult::disp()
{
  if(f==1)
    exit(0);
cout<<"\n\n\n";
for(int i=0;i<40;i++)
            cout<<"-";
  cout<<endl;
  cout<<"The two matrices are:\n";

  cout<<"Matrix A:";

  for(int i=0;i<15;i++)
            cout<<" ";
  cout<<"Matrix B:"<<endl;
  for(int i=0;i<r1;i++)
    {   for (int j = 0; j < c1; ++j)
        {
          cout<<a[i][j]<<" ";

        }
    }

    for(int i=0;i<21;i++)
            cout<<" ";

        for (int j = 0; j < c2; ++j)
        {
          cout<<b[i][j]<<" ";

        }
        cout<<endl;


    cout<<"\n\nMultiplication is:\n";
    for(int i=0;i<40;i++)
            cout<<"-";
    cout<<endl;



  for(int i=0;i<r1;i++)
  {
    for (int j = 0; j < c1; ++j)
    {
      cout<<sum[i][j]<<"  ";
    }
    cout<<endl;
  }
}


int main()
{
   mult ob;
   ob.input();
   ob.multmat();
   ob.disp();

}
