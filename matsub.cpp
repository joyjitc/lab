#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

class sub
{
public:
  int a[100][100];
  int b[100][100];
  int sum[100][100];
  int r,c;

  void input(void);
  void submat(void);
  void disp(void);

};

void sub::input()
{
  cout<<"Enter the rows and columns \n";
  cin>>r>>c;
  cout<<"Enter elements for 1st matrix\n";
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      cin>>a[i][j];
    }
  cout<<"Enter elements for 2nd matrix\n";
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      cin>>b[i][j];
    }
}

void sub::submat()
{
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      sum[i][j]=a[i][j]-b[i][j];
    }
}

void sub::disp()
{
cout<<"\n\n\n";
for(int i=0;i<40;i++)
            cout<<"-";
  cout<<endl;
  cout<<"The two matrices are:\n";

  cout<<"Matrix A:";

  for(int i=0;i<15;i++)
            cout<<" ";
  cout<<"Matrix B:"<<endl;
  for(int i=0;i<r;i++)
    {   for (int j = 0; j < c; ++j)
        {
          cout<<a[i][j]<<" ";

        }
        for(int i=0;i<21;i++)
            cout<<" ";
        for (int j = 0; j < c; ++j)
        {
          cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"\n\nSubtraction is:\n";
    for(int i=0;i<40;i++)
            cout<<"-";
    cout<<endl;



  for(int i=0;i<r;i++)
  {
    for (int j = 0; j < c; ++j)
    {
      cout<<sum[i][j]<<"  ";
    }
    cout<<endl;
  }
}


int main()
{
   sub ob;
   ob.input();
   ob.submat();
   ob.disp();

}
