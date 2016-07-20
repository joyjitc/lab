#include <stdio.h>
#include <cstdlib>
int main()
{
	int ari[250000],arj[250000],n,t,count,temp;
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
				scanf("%d",&temp);
				ari[temp-1]=i;
				arj[temp-1]=j;
			}
		}
		n=n*n;
		for(i=0;i<n-1;i++)
		{
			count+=abs(ari[i]-ari[i+1])+abs(arj[i]-arj[i+1]);
		}
	printf("%d\n",count);
	}
}
