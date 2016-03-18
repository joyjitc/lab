/* CODE BY
		ABHISHEK KUMAR */

#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<set>
using namespace std;

#define mem(a,b) memset(a,(b),sizeof(a))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define loop(i,x) for(long long int i=0;i<x;i++)
#define looop(i,a,b) for(long long int i=a;i<b;i++)
#define l(x) strlen(x)
#define ef else if
#define pb(a) push_back(a)

typedef long long int llu;

typedef struct s{
	vector<string> v;
}list;

void optimizeIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main()
{
 	optimizeIO();
	
	list arr[26];
	char inp[50];
	cout<<"Enter number of names you wanna enter"<<endl;
	int n;
	cin>>n;
	while(n--)
	{
		cout<<"Enter the name"<<endl;
		cin>>inp;
		llu sum=0;
		loop(i,strlen(inp))
		{
			sum+=inp[i];
		}
		sum=sum%26;
		arr[sum].v.pb(inp);
	}
	
	cout<<"Hash table:\n";
	loop(i,26)
	{
		loop(j,arr[i].v.size())
			cout<<arr[i].v[j]<<" ";
		cout<<endl;
	}
	
	cout<<"Enter name you want to search"<<endl;
	string s;
	cin>>s;
	llu kok=0;
	loop(i,s.length())
		kok+=s[i];
	kok = kok%26;
	
	llu flag=0;
	if(arr[kok].v.size()>0)
	{
		loop(k,arr[kok].v.size())
		{
			if(arr[kok].v[k]==s)
			{
				flag=1;
 			}
		}
	}
	
	if(flag==1)
		cout<<"found"<<endl;
	else
		cout<<"Not found"<<endl;
	
	return 0;
}

