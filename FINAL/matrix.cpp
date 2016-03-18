#include<iostream>
#include<math.h>
using namespace std;
class matrix
{
	public :
	int deter(int **mat,int row,int col)
	{
		int result=0;
		int **subMat=new int*[row-1];
		for(int i = 0; i < row-1; i++)
		{
    			subMat[i] = new int[col-1];
		}
		if(row!=col)
		{
			cout << "Determinant can't be calculated"<<endl;
		}
		else
		{
			if(row==2)
			{
				return mat[0][0]*mat[1][1]-mat[1][0]*mat[0][1];
			}
			else
			{
				for(int i=0;i<col;i++)
				{
					int subRow=0,subCol=0;
					for(int j=1;j<row;j++)
					{	
						subCol=0;
						for(int z=0;z<col;z++)
						{
							if(z==i)
							continue;
							else
							{
								subMat[subRow][subCol]=mat[j][z];
								subCol++;
							}
						}
						subRow++;
					}
					
					result=result+pow(-1,i)*deter(subMat,subRow,subCol)*mat[0][i];
				}
			}
		}
		return result;
	}	
};
int main(void)
{
	int row,col;
	cout <<"Enter number of row and col"<<endl;
	cin >> row >> col;
	int **a = new int*[row];
	for(int i = 0; i < row; ++i)
	{
    		a[i] = new int[col];
	}
	cout <<"Enter values of matrix"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin >> a[i][j];
		}
	}
	matrix m;
	cout <<"Value of determinant is : "<<m.deter(a,row,col)<<endl;
	return 0;
}
