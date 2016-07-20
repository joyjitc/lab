#include <stdio.h>
#include <algorithm>
int a[20000];
int main()
{
	int t,m,result,i;
	unsigned int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%u %d",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		std::sort(a,a+m);
		result=0;
		m=m-1;
		i=0;
		while(m>0)
		{

			if(m-a[i]>=0)
			{
				result+=a[i];
				m-=a[i];
				i++;
				if(m>0)
					m--;
			}
			else
			{
				result+=m;
				m=0;
			}
		}
		printf("%d\n",result);


	}
}
