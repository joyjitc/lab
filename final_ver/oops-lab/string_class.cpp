#include <bits/stdc++.h>
using namespace std;
class my_string{
	public:
		char s[1000];
		int len(){
			int i=0;
			for(char c=s[i];c!='\0';i++,c=s[i]);
			return i;
		}
		void rev(){
			int le = len(),i,j;
			for( i=0,j=le-1;i<j;i++,j--)
			{
				char c = s[i];
				s[i]=s[j];
				s[j]=c;
			}
		}		
		void concat(my_string obj)
		{
			int le = len(),le2 = obj.len(),i,j=0;
			for(i=le;i<le+le2;i++,j++)
				this->s[i]=obj.s[j];
			s[i]='\0';
		}
		int comp(my_string obj){
			int le = len(),le2 = obj.len(),i=0;
			for(;i<le && i<le2;i++)
			{
				if(this->s[i]!=obj.s[i])
					return (this->s[i]-obj.s[i]);
			}
			if(le==le2)
				return 0;
			if(i==le)
				return -1*(int)obj.s[i];
			return (int)this->s[i];
		}
};
int main(void)
{
	cout<<"Enter string::";
	my_string obj,obj2;
	cin>>obj.s;
	cout<<"Length::"<<obj.len()<<endl;
	obj.rev();
	cout<<"Reverse String::"<<obj.s<<endl;
	cout<<"Enter another string::";
	cin>>obj2.s;
	cout<<obj.comp(obj2)<<endl;
	obj.concat(obj2);
	cout<<"Concatenated::"<<obj.s<<endl;
}
