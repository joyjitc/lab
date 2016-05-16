#include <bits/stdc++.h>
using namespace std;
template <typename T> class Matrix
{
	public:
		T matrix[100][100];
		int r,c;
		Matrix(int c , int r)
		{
			this->r = r;
			this->c = c;
		}
		void populate()
		{
			int i,j;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cin>>matrix[i][j];
				}
			}
		}
		void print()
		{
			int i,j;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<matrix[i][j]<<" ";
				}
				cout<<endl;
			}	
		}
		
};
int main(void)
{
	Matrix<string> one(2,2);
	one.populate();
	one.print();
}