#include <iostream>
#include <tr1/unordered_map>
using namespace std;
typedef unsigned long long ll;
tr1::unordered_map<ll,ll> memo;
int main(){
	yyin = fopen("x.cpp","r");
	yyout = fopen("y.cpp","w");
	yylex();
	return 0;
}

	
ll exch(ll n)
{
	if(memo.find(n)!= memo.end())
		return memo[n];
	if(n <= 11)
		return n;
	else
	{
		ll X = exch(n/2) + exch(n/3) + exch(n/4);
		memo[n] = X;
		return X;
	}		
}

int main()
{
	ios::sync_with_stdio(false);
	long n;
	int t=10;
	while(t--)
	{
		cin>>n;
		cout<<exch(n)<<endl;
	}

	return 0;
}
