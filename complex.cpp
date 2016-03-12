 #include <bits/stdc++.h>
 using namespace std;
 class comp  
 {  
  public:  
  int i,r;  
  
  void read()  
  {  
  cout<<"\nEnter Real Part:";  
  cin>>r;  
  cout<<"Enter Imaginary Part:";  
  cin>>i;  
  }  
  void display()  
  {  
  cout<<"\n= "<<r<<"+"<<i<<"i";  
  }  
  comp operator+(comp a2)  
  {  
  comp a;  
  a.r=r+a2.r;  
  a.i=i+a2.i;  
  return a;  
  }  
  comp operator-(comp a2)  
  {  
  comp a;  
  a.r=r-a2.r;  
  a.i=i-a2.i;  
  return a;  
  }  
  comp operator*(comp a2)  
  {  
  comp a;  
  a.r=(r*a2.r)-(i*a2.i);  
  a.i=(r*a2.i)+(i*a2.r);  
  return a;  
  }  
  comp operator/(comp a2)  
  {  
  comp a;  
  a.r=((r*a2.r)+(i*a2.i))/((a2.r*a2.r)+(a2.i*a2.i));  
  a.i=((i*a2.r)-(r*a2.i))/((a2.r*a2.r)+(a2.i*a2.i));  
  return a;  
  }  
  /*comp operator  
  {  
  comp a;  
  a.r=r;  
  a.i=-i; 
  return a;  
  }  */
 };  
 int main()  
 {  
 int ch;  
  
 comp a,b,c;  
 do  
 {  
  cout<<"\n1.Addition \n2.Substraction";  
  cout<<"\n3.Mulitplication \n4.Division ";  
  cout<<"\n5.Modulus \n6.Conjugate \n7.Exit";  
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
       c=b-a;  
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
  case 6:
       cout<<"\nEnter Complex Number:";  
       a.read();  
       a.display();
       cout<<"The Conjugate is "<<a.r<<" + "<<"("<<-a.i<<")i";
       break;  

  }  
  }while(ch!=7);  
  return 0;
 }  