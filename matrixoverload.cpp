 #include <bits/stdc++.h>
 using namespace std;
 class matrix
 {
 public:
 	int mat[3][3];
 	void input()  
  	{  
  		int i,j;
  		cout<<"\nEnter the values for ::\n";

  		for(i=0;i<3;i++)
  		{
  			for(j=0;j<3;j++)
  			{
  				printf("Matrix[%d][%d]:",i,j);
  				cin>>mat[i][j];
  			}
  		}  		
  	}  
  void display()  
  { 
  cout<<"\nEntered matrix is ::\n";
  		int i,j;
  		for(i=0;i<3;i++)
  		{


  			for(j=0;j<3;j++)
  			{
  				cout<<mat[i][j]<<" ";
  			}
  			cout<<"\n";
  		}  		

  }  
  matrix operator+(matrix a)
  {
  	matrix c;
  	int i,j;
  	for(i=0;i<3;i++)
  	{
  		for(j=0;j<3;j++)
  		{
  			c.mat[i][j]=matrix[i][j]+a.matrix[i][j];
  		}			
  	}  
   return c;  
  } 
  matrix operator-(matrix a)
  {
  	matrix c;
  	int i,j;
  	for(i=0;i<3;i++)
  	{
  		for(j=0;j<3;j++)
  		{
  			c.mat[i][j]=matrix[i][j]-a.matrix[i][j];
  		}			
  	}  
   return c;  
  } 
 }
 int main()  
 {  
 int ch;  
  
 comp a,b,c;
    
 do  
 {  
  cout<<"\n1.Addition \n2.Subtraction";  
  cout<<"\n3.Exit";  
  cout<<"\nEnter the choice :";  
  cin>>ch;  
  switch(ch)  
  {  
  case 1:  
       cout<<"\nEnter The First Complex Number:";  
       a.read();  
       a.display();  
       cout<<"\nEnter The Second Complex Number:";  
       b.read();  
       b.display();  
       c=a+b;  
       c.display();  
       break;  
  case 2:  
       cout<<"\nEnter The First Complex Number:";  
       a.read();  
       a.display();  
       cout<<"\nEnter The Second Complex Number:";  
       b.read();  
       b.display();  
       c=a-b;  
       c.display();  
       break;  
  case 3:  
       cout<<"\nEnter The First Complex Number:";  
       a.read();  
       a.display();  
       cout<<"\nEnter The Second Complex Number:";  
       b.read();  
       b.display();  
       c=a*b;  
       c.display();  
       break;  
  case 4:  
       cout<<"\nEnter The First Complex Number:";  
       a.read();  
       a.display();  
       cout<<"\nEnter The Second Complex Number:";  
       b.read();  
       b.display();  
       c=a/b;  
       c.display();  
       break;  
  case 5:
  	   cout<<"\nEnter Complex Number:";  
       a.read();  
       a.display();
       float mod;
       mod=sqrt(a.i*a.i+a.r*a.r);
       cout<<"\nThe Modulus is ::"<<mod;
       break;		

  case 6:
       cout<<"\nEnter Complex Number:";  
       a.read();  
       a.display();
       c=!a;
       c.display();
       /*cout<<"The Conjugate is "<<a.r<<" + "<<"("<<-a.i<<")i";*/
       break;  

  }  
  }while(ch!=3);  
  return 0;
 }  