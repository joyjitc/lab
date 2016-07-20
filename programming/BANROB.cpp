#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	long m;
	double p=0;
	double money;
	double nil;
	double temp;
	while(t--)
	{
	    nil=0;
	    money=1000000000.00;
		scanf("%ld %lf",&m,&p);
		if(m==1)
		{
			printf("%.2f %.2f\n",money,nil);

		}
		else if(p<=0.5)
		{
			printf("%.2f %.2f\n",money/2,money/2);

		}
		else if(p>0.5)
		{
		    temp=money*pow(p,m-1);
            
			if(temp<=money/2)
				printf("%.2f %.2f\n",money/2,money/2);
			else
			{
				if(m%2==0)
				printf("%.2f %.2f\n",nil,temp);

				else
				printf("%.2f %.2f\n",temp,nil);

			}

		}
	}
}
