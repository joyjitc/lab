#include <bits/stdc++.h>
using namespace std;

double d = 0;

double deter(int n, double mat[10][10])
{
    int c, subi, i, j, subj;
    double submat[10][10];

    if (n == 2)
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {	
        for(c = 0; c < n; c++)
        {
            subi = 0;
            for(i = 1; i < n; i++)
            {
                subj = 0;
                for(j = 0; j < n; j++)
                {
                    if (j == c)
                    {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
            d = d + (pow(-1 ,c) * mat[0][c] * deter(n - 1 ,submat));
        }
    }
    return d;
}

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
  cout<<"Input the number of Rows and Columns:: \n";
  cin>>r>>c;
  cout<<"Input elements to Matrix #1\n";
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      cin>>a[i][j];
    }
  cout<<"Input elements to Matrix #2\n";
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
   for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
}
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
  cout<<"Input the number of Rows and Columns:: \n";
  cin>>r>>c;
  cout<<"Input elements to Matrix #1\n";
  for(int i=0;i<r;i++)
    for (int j = 0; j < c; ++j)
    {
      cin>>a[i][j];
    }
  cout<<"Input elements to Matrix #2\n";
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
   for(int i=0;i<r;i++)
    {
        for (int j = 0; j < c; ++j)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
}
/*class mult
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
  cout<<"Input the number of Rows and Columns for Matrix #1:: \n";
  cin>>r1>>c1;
  cout<<"Input the number of Rows and Columns for Matrix #2:: \n";
  cin>>r2>>c2;
  if(c1!=r2)
  {
    cout<<"Incompatible Matrices\n";
    exit(0);
    f=1;
  }
  cout<<"Enter elements for Matrix #1\n";
  for(int i=0;i<r1;i++)
    for (int j = 0; j < c1; ++j)
    {
      cin>>a[i][j];
    }
  cout<<"Enter elements for Matrix #2\n";
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
*/

int main(void)
{     
    int option;
    while(1)
    {

        cout<<"What matrix operation would you like to perform ::\n1> Addition\n2> Subtraction\n3> Multiplication\n4> Determinant\n5> EXIT!!!\nChoose wisely::";
        cin>>option;
        switch(option)
        {
            case 1: add ob;
                    ob.input();
                    ob.addmat();
                    ob.disp();
                    break;
            case 2: sub obj;
                    obj.input();
                    obj.submat();
                    obj.disp();
                    break;

            /*case 3: mult obe;
                    obe.input();
                    obe.multmat();
                    obe.disp();
                    break;*/

            case 4: int n;
                    double mat[10][10];
                    int i, j;
                    cout<<"\nPlease input the order of the matrix::" ;
                    cin>>n;
                    cout<<"\nPlease input the elements of the matrix:>  "<<endl;
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("Matrix[%d][%d]::",i,j);
                            cin>>mat[i][j];
                        }
                        cout<<"\n";
                    }
                    cout<<"\nDeterminant :: "<<deter(n,mat)<<"\n";
                    break;
            case 5: exit(0);


        }
    }
    

    
    
}
