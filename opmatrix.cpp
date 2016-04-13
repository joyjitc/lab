#include <bits/stdc++.h>
using namespace std;

class comp
{
public:
	float x;
	float y;
	comp(float ,float);
	void display();
	comp operator+ (comp);
	comp operator- (comp);
	comp operator* (comp);
	comp operator/ (comp);
	comp operator~ ();
	comp operator- ();
};

comp::comp(float a=0,float b=0)
{
	x=a;
	y=b;
}
comp comp::operator~()
{
	comp temp;
	temp.x=x;
	temp.y=-y;	
	return temp;	
}
comp comp::operator-()
{
	comp temp;
	temp.x=-x;
	temp.y=-y;	
	return temp;
}

/*void comp::add(comp a)
{
	x=x+a.x;
	y=y+a.y;
}*/
comp comp::operator+(comp b)
{
	comp temp;
	temp.x= x+b.x;
	temp.y= y+b.y;
	return temp; 
}
comp comp::operator-(comp b)
{
	comp temp;
	temp.x= x-b.x;
	temp.y= y-b.y;
	return temp; 
}
comp comp::operator*(comp a)
{
	comp temp;
	temp.x=x*a.x-y*a.y;
	temp.y=x*a.y+y*a.x;
	return temp;
}
comp comp::operator/(comp a)
{
	comp temp;
	float s=a.x*a.x+a.y*a.y;
	//cout<<"s"<<s<<endl;
	temp.x=(x*a.x+y*a.y)/s;
	//cout<<"temp.x::"<<temp.x<<endl;
	temp.y=(y*a.x-x*a.y)/s;
	//cout<<"temp.y::"<<temp.y<<endl;
	return temp;
}
void comp::display()
{
	if(y<0)
	{
		float b=-y;
		cout<<x<<"-i"<<b<<"\t";
	}
	else
	{
		cout<<x<<"+i"<<y<<"\t";
	}
}

int main()
{
	comp a[10][10], b[10][10],c[10][10];
	int i,j,m,n,u,v;
	cout<<"\nEnter the number of rows and columns for Matrix A:::\n\n";
	cin>>m>>n;


	// x denotes number rows in matrix A
	// y denotes number columns in matrix A

	cout<<"\n\nEnter elements for Matrix A :::\n\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"x=";
			cin>>a[i][j].x;
			cout<<"y=";
			cin>>a[i][j].y;
		}
		cout<<"\n";
	}
	cout<<"\nEnter the number of rows and columns for Matrix B:::\n\n";
	cin>>u>>v;
	cout<<"\n\nEnter elements for Matrix B :::\n\n";
	for(i=0;i<u;i++)
	{
		for(j=0;j<v;j++)
		{
			cout<<"x=";
			cin>>b[i][j].x;
			cout<<"y=";
			cin>>b[i][j].y;
		}
		cout<<"\n";
	}

	cout<<"matrix A::"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j].display();
		}
		cout<<"\n";
	}
	cout<<"matrix B::"<<endl;
	for(i=0;i<u;i++)
	{
		for(j=0;j<v;j++)
		{
			b[i][j].display();
		}
		cout<<"\n";
	}
	cout<<"\nAddition ::"<<endl;
	for(i=0;i<m||i<u;i++)
	{
		for(j=0;j<n||j<v;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m||i<u;i++)
	{
		for(j=0;j<n||j<v;j++)
		{
			c[i][j].display();
		}
		cout<<"\n";
	}
	cout<<"Subtration ::"<<endl;
	for(i=0;i<m||i<u;i++)
	{
		for(j=0;j<n||j<v;j++)
		{
			c[i][j]=a[i][j] - b[i][j];
		}
	}
	for(i=0;i<m||i<u;i++)
	{
		for(j=0;j<n||j<v;j++)
		{
			c[i][j].display();
		}
		cout<<"\n";
	}
	comp d[10][10];
	cout<<"Multiplication::"<<endl;
	if(n==u)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<v;j++)
			{
				for(int k=0;k<u;k++)
				{
					a[i][j]=a[i][j]*b[i][j];
					d[i][j] = d[i][j] + a[i][j];
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<v;j++)
		{
			d[i][j].display();
		}
		cout<<"\n";
	}



	return 0;
}