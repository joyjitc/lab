#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
    cout<<"Enter the lower limit and the upper limit respectively :";
 float rad1,rad2,i;
 cin>>rad1>>rad2;
 for(i=rad1;i<=rad2;i=i+.1)
 	{
 	    if(i>0)

 		cout<<setw(30+(20*sin(i)))<<"*"<<endl;

 		/*cout<<sin(i)<<"\n";*/
 	}


}
