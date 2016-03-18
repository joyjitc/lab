#include<bits/stdc++.h>
using namespace std;

class com
{
	public:
		int a,b;
		void add(int,int);
		void subtract(int,int);
		void multiply(int,int);
		void divide(int,int);
		void modulo();
		void conjugate();
};
void com::add(int x,int y)
{
	int s1=a+x;
	int s2=b+y;
	cout<<"Result : "<<s1<<" +i "<<s2<<endl;
}
void com::subtract(int x,int y)
{
	int s1=a-x;
	int s2=b-y;
	cout<<"Result : "<<s1<<" +i "<<s2<<endl;
}
void com::multiply(int x,int y)
{
	int m1=((a*x)-(b*y));
	int m2=((a*y)+(b*x));
	cout<<"Result : "<<m1<<" +i "<<m2<<endl;
}
void com::divide(int x,int y) 
{
	float r=(x*x)+(y*y);
	float m1=((a*x)+(b*y))/r;
	float m2=((b*x)-(a*y))/r;
	cout<<"Result : "<<m1<<" +i "<<m2<<endl;
}
void com::modulo()
{
	float r=sqrt((a*a)+(b*b));
	cout<<"Result : "<<r<<endl;
}
void com::conjugate()
{
	int l=-b;
	cout<<"Result : "<<a<<" +i "<<l<<endl;
}
int main()
{
	com c;
	cout<<"Enter real part of complex no. : ";
	cin>>c.a;
	cout<<"Enter imaginary part of complex no. : ";
	cin>>c.b;
	int l,m,ch;
	while(1)
	{
		cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for modulo, 6 for conjugate, 7 for exit."<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"Enter real part of complex no. : ";
				 cin>>l;
				 cout<<"Enter imaginary part of complex no. : ";
				 cin>>m; 
				 c.add(l,m);
				 break;
			case 2 : cout<<"Enter real part of complex no. : ";
				 cin>>l;
				 cout<<"Enter imaginary part of complex no. : ";
				 cin>>m; 
				 c.subtract(l,m);
				 break;
			case 3 : cout<<"Enter real part of complex no. : ";
				 cin>>l;
				 cout<<"Enter imaginary part of complex no. : ";
				 cin>>m; 
				 c.multiply(l,m);
				 break;
			case 4 : cout<<"Enter real part of complex no. : ";
				 cin>>l;
				 cout<<"Enter imaginary part of complex no. : ";
				 cin>>m; 
				 c.divide(l,m);
				 break;
			case 5 : c.modulo();
				 break;
			case 6 : c.conjugate();
				 break;
			case 7 : exit(0);
			default : cout<<"Wrong choice"<<endl;
		}
	}
	return 0;
}
	

	
