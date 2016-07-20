#include <stdio.h>
#include <math.h>
int i,k,a_i,b_i;
long long s;
double a_k,b_k;
double x=sqrt(2),y=sqrt(3);
double A=x+(x*y);
double B=x-(x*y);
double C=2*((x*x)+(x*x*y*y));
double AC=A/C;
double BC=B/C;
/*float a(int k,int i);
float b(int k,int i);*/
int main()
{
	scanf("%d %d %lld",&i,&k,&s);
	scanf("%d %d",&a_i,&b_i);
	double ans;
	double ta=a_i;
    double tb=b_i;
	long t;
	if(k>i)
	{
		t=k-i;
		while(t--)
		{
			a_k=B*ta+A*tb;
			b_k=A*ta-B*tb;
			ta=a_k;
			tb=b_k;

		}
	}
	else if(i>k)
	{
		t=i-k;
		while(t--)
		{
			a_k=BC*ta+AC*tb;
			b_k=AC*ta-BC*tb;
			ta=a_k;
			tb=b_k;


		}
	}
	else
	{
		a_k=a_i;
		b_k=b_i;
	}
	ans=a_k+b_k;

	long long n;
	int e;

	if(s>0)
	{
		n=s/63;
		e=s%63;
		while(n--)
			{
				ans=(double)ans/9.223372e+18;
			}
		while(e--)
		{
			ans=(double)ans/2;
		}
	}
	else if (s<0)
	{
		s=(-1)*s;
		n=s/63;
		e=s%63;
		while(n--)
			{
				ans=(double)ans*9.223372e+18;
			}
		while(e--)
		{
			ans=(double)ans*2;
		}
	}


	printf("%f",ans);
}
/*float a(int k,int i)
{
	if(k>i)
		return (B*a(k-1,i)+A*b(k-1,i));
	else if(k<i)
		return (BC*a(k+1,i)+AC*b(k+1,i));
	else
		return a_i;
}
float b(int k,int i)
{
	if(k>i)
		return (A*a(k-1,i)-B*b(k-1,i));
	else if(k<i)
		return (AC*a(k+1,i)-BC*b(k+1,i));
	else
		return b_i;
}*/
