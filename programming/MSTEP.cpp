#include <stdio.h>
#include <cstdlib>
int main()
{
	int ar[500][500],n,t,count,s,ti,tj,flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i,j;
		count=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&ar[i][j]);
			}
		}
		flag=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if (1==ar[i][j])
				{
					flag=1;
					break;
				}
			}
		if(flag==1)
			break;
		}
		ti=i,tj=j;
		for(s=2;s<=n*n;s++)
		{
			flag=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if (s==ar[i][j])
					{
						flag=1;
						break;
					}
				}
			if(flag==1)
				break;
			}
            count+=abs(i-ti)+abs(j-tj);
            ti=i,tj=j;
		}
		printf("%d\n",count);

	}
}
