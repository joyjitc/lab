#include<iostream>
using namespace std;
class Complex
{
	public:
	int real,imag;
	void setC()
	{
		cout<<"Enter the real and imaginary parts:";
		cin>>real>>imag;
	}
	void getC()
	{
		cout<<real<<"+"<<imag<<"i";
	}
	
	
		Complex operator+(Complex x)
		{
			Complex c;
			c.real=this->real+x.real;
			c.imag=this->imag+x.imag;
			return c;
		}
	
	
};
class Matrix
{
	int R,C;
	Complex c1[100][200];
	public:
		void setMatrix(int r,int c,Complex *data)
		{
			R=r;
			C=c;
			int p=0,i,j;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					
					c1[i][j]=*(data+p++);
					
				}
			}
		}
		void getMatrix()
		{
			int i,j;
			for(i=0;i<R;i++)
			{
				for(j=0;j<C;j++)
				{
					
					c1[i][j].getC();
					cout<<"    ";
				}cout<<endl;
			}
		}
		
		Matrix operator+(Matrix m)
		{
			int i,j;
			Matrix x;
			x.R=this->R;
			x.C=this->C;
			
			for(i=0;i<R;i++)
			{
				for(j=0;j<C;j++)
				{
					x.c1[i][j]=this->c1[i][j]+m.c1[i][j];
				}
			}
			
			return x;
			
		}
		
		
		
};


main()
{
	
	Complex arr[100];
	int i,r,c;
	cout<<"Enter rows and colums:";
	cin>>r>>c;
	for(i=0;i<r*c;i++)
	{
		arr[i].setC();
	}
	Matrix m1,m3;
	m1.setMatrix(r,c,arr);
	//m1.getMatrix();
	Matrix m2;
	m2.setMatrix(r,c,arr);
	//m2.getMatrix();
	m3=m1+m2;
	m3.getMatrix();
	
}

