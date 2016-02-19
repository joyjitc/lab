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

int main(void)
{
    int n;
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

    cout<<"\nDetererminant :: "<<deter(n,mat)<<"\n";
}
