#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x=80;
	double m;
	int a,b;
	int st,en;
	cin>>a>>b;
	//cout<<"x"<<endl<<"y"<<endl;
	for(int i=a;i<=b;i+=4)
	{
		m=float(i)*3.1415/180.0;
		m=sin(m);
		m*=40;
		if(m>0){
			st=60;
			en=60+int(m);
		}
		else{
			st=60+int(m);
			en=60;
		}
		//cout<<i<<" "<<st<<" "<<en<<" "<<m<<endl;
		for(int j=0;j<120;++j){
			if(j==st || j==en){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
