#include<iostream>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

class add
{
public:
  int a[100][100];
  int b[100][100];
  int sum[100][100];
  int r,c;

  void input(void);
  void addmat(void);
  void disp(void);

};

void add::input()
{
  cout<<"Enter the rows and columns \n";
  cin>>r>>c;
  cout<<"Enter elements for 1st matrix\n";
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      cin>>a[i][j];
    }
  cout<<"enter elements for 2nd matrix\n";
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      cin>>b[i][j];
    }
}

void add::addmat()
{
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      sum[i][j]=a[i][j]+b[i][j];
    }
}

void add::disp()
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

    cout<<"\n\nAddition is:\n";
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
   add ob;
   ob.input();
   ob.addmat();
   ob.disp();

}
