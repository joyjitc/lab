#include<bits/stdc++.h>

using namespace std;

int main()
{
	while(1)
	{
		cout<<"1)Addition\n2)Multiplication\n3)Factorial\n4)Subtraction\n5)Exit\nEnter choice:  ";
		int c;
		cin>>c;
		if(c==5)
		break;
		if(c==1)
		{
			char num1[10000],num2[10000];
			int sum[10004];
			cout<<"Enter first number\n";
			cin>>num1;
			cout<<"Enter second number\n";
			cin>>num2;
			int l1,l2;
			l1=strlen(num1);
			l2=strlen(num2);

			int carry = 0;
			int k = 0;
			int i = l1 - 1;
			int j = l2 - 1;
			for (; i >= 0 && j >= 0; i--, j--, k++) 
			{
				sum[k] = (num1[i]-48 + num2[j]-48 + carry) % 10;
				carry = (num1[i]-48 + num2[j]-48 + carry) / 10;
			}
			if (l1 > l2) 
			{

				while (i >= 0) 
				{
					sum[k++] = (num1[i]-48 + carry) % 10;
					carry = (num1[i--]-48 + carry) / 10;
				}

			} 
			else if (l1 < l2) 
			{
				while (j >= 0) 
				{
					sum[k++] = (num2[j]-48 + carry) % 10;
					carry = (num2[j--]-48 + carry) / 10;
				}
			} 
			else 
			{
				if (carry > 0)
				sum[k++] = carry;
			}
			cout<<"Result: ";
			for (k--; k >= 0; k--)
			cout<<sum[k];
			cout<<endl;

		}

		if(c==2)
		{
			int a[10000],b[10000];
    		int ans[20000]={0};
		    int i,j,tmp;
		    char s1[10001],s2[10001];
		    cout<<"Enter first number\n";
		    cin>>s1;
		    cout<<"Enter second number\n";
		    cin>>s2;
		    int l1 = strlen(s1);
		    int l2 = strlen(s2);
		    for(i = l1-1,j=0;i>=0;i--,j++)
		    {
		        a[j] = s1[i]-'0';
		    }
		    for(i = l2-1,j=0;i>=0;i--,j++)
		    {
		        b[j] = s2[i]-'0';
		    }
		    for(i = 0;i < l2;i++)
		    {
		        for(j = 0;j < l1;j++)
		        {
		            ans[i+j] += b[i]*a[j];
		        }
		    }
		    for(i = 0;i < l1+l2;i++)
		    {
		        tmp = ans[i]/10;
		        ans[i] = ans[i]%10;
		        ans[i+1] = ans[i+1] + tmp;
		    }
		    for(i = l1+l2; i>= 0;i--)
		    {
		        if(ans[i] > 0)
		            break;
		    }
		    cout<<"Product : ";
		    for(;i >= 0;i--)
		    {
		        cout<<ans[i];
		    }
		    cout<<endl;
		}

	if(c==3)
	{
		long i,j,k,m;
    	int a[20000];
    	long long n;
    	cout<<"Enter number\n";
	    cin>>n;
	    if(n==0 || n==1)
	    {
	        cout<<"1\n";
	        continue;
	    }
	    else
	    {
	        a[0]=1;
	        m=1;
	        for(i=2;i<=n;i++)
	        {
	            long temp=0,x;
	            for(j=0;j<m;j++)
	            {
	            	x=a[j]*i+temp;
	                a[j]=x%10;
	                temp=x/10;
	            }

	            while(temp>0)
	            {
	                a[m]=temp%10;
	                temp=temp/10;
	                m++;
	            }
	        }
	        for(k=m-1;k>=0;k--)
	        {
	            cout<<a[k];
	        }
	        cout<<endl;
        }

	}
	if(c==4)
	{
		char a[1000];
	    char b[1000];
	    int  c[1000]={0};
	    int  d[1000]={0};
	    int  e[1000]={0};
	    char f[1000];
	    int i,j,g;
	    cout << "Enter the first number: ";
	    cin >>a;
	    cout << "Enter the second number: ";
	    cin >>b;
	    int l1=strlen(a);
	    int l2=strlen(b);
	    for(i=l1-1;i>=0;i--)
	    {
	        c[l1-1-i]=a[i]-'0';
	    }
	    for(i=l2-1;i>=0;i--)
	    {
	        d[l2-1-i]=b[i]-'0';
	    }
	    if(l1>l2)
	        g=l1;
	    else
	        g=l2;
	    for(i=0;i<g;i++)
	    {
	        int cf=c[i]-d[i];
	        if(cf<0)
	            {e[i]=cf+10;c[i+1]-=1;}
	        else
	            e[i]=cf;
	    }
	    j=0;
	    if(e[g]!=0)
	    {
	        f[j]='-';
	        j++;
	    }
	    for(i=g-1;i>=0;i--)
	    {
	        f[j]=e[i]+'0';
	        j++;
	    }
	    cout << f<<endl;
	}
	

	}
	return 0;
}