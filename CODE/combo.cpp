#include<stdio.h>
#include<string.h>
char * sum(char [],char []);
char * mul(char [],char []);
char * sub(char [],char []);
char c[1000];
char mul1[1000];
int main()
{
	char a[1000],b[1000];
	char *c;
	char n;
	printf("enter  + for summation\n - for subtraction\n * for multiplication\n");
	scanf("%s",&n);
	printf("enter the first number\n");
	scanf("%s%s",a,b);
	switch(n){
		case '+':{
			
			c=sum( a ,  b);
			printf("summation is =%s",c);
			break;
			
	    }
	    
	    	case '*':{
			
			c=mul( a , b);
				printf("multiplication is =%s",c);
			break;
			
	    }
	    
	    	/*case '-':{
			
			c=sub( a, b);
				printf("subtraction is =%s",c);
			break;
			
	    }*/
	}
	return 0;

}

char * mul(char a[],char b[])
{
	 
    char c[1000];
    char temp[1000];
    int la,lb;
    int i,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;
    la=strlen(a)-1;
        lb=strlen(b)-1;
   
        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }
   
    k=0;
    r=0;
    for(i=0;i<=la+lb;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                sum = sum + temp[y+i];
             }
             //sum = sum + temp[y+i];
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul1[j++]=c[i] + 48;
    }
    mul1[j]='\0';
    return mul1;
	
}
char * sum(char a[],char b[])
{
	char temp[1000];
	int  la=strlen(a)-1;
      int   lb=strlen(b)-1;
   
        for(int i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(int i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }
        int add, r=0,k=0;
        if(la>lb){
        	int j=lb;
        for(int i=la;i>=0;i--)
		{
        add=(a[i]+b[j]+r)%10;
        temp[k++]=add;
        r=(a[i]+b[j]+r)/10;
        j--;
		}
		temp[k++]=r;
	             }
		else
		{
			int j=la;
			
			 for(int i=lb;i>=0;i--)
		{
        add=(a[i]+b[j]+r)%10;
        temp[k++]=add;
        r=(a[i]+b[j]+r)/10;
        j--;
        
		}
		temp[k++]=r;
	}
	int 	j=0;
	
		 for(int i=k-2;i>=0;i--){
         c[j++]=temp[i] + 48;
    }
    c[j]='\0';
    return c;
}
/*char * sub(char a[],char b[])
{
		char temp[1000];
	int  la=strlen(a)-1;
      int   lb=strlen(b)-1;
   
        for(int i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(int i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }
        int add, r=0,k=0;
        if(la>lb)
        for(int i=la,int j=lb;i>=0;i--,j--)
		{
        add=(a[i]-b[j]+r)%10;
        temp[k++]=add;
        r=(la+lb+r)/10;
		}
		else
		{
			
			
			 for(int i=lb,int j=la;i>=0;i--,j--)
		{
        add=(la+lb+r)%10;
        temp[k++]=add;
        r=(la+lb+r)/10;
        
        
		}
		temp[k++]=r;
	int 	j=0;
	char c[1000];
		 for(int i=k-1;i>=0;i--){
         c[j++]=temp[i] + 48;
    }
    c[j]='\0';
    return c;
}*/






