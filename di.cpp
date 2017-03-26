#include <bits/stdc++.h>
using namespace std;
// int minpath(int AB[][],int cur_pos,int cur_side,int size,int cur_sum)
// {

// }
int main()
{
	ios::sync_with_stdio(false);
	// double tc,ve,vy,l,t;
	// double ans;
	// cin>>tc;
	// while(tc--)
	// {
	// 	cin>>ve>>vy>>l>>t;
	// 	ans = ((l/ve)-(l/(ve+vy)))/t;
	// 	if(ans>1)
	// 		ans = 1.0;
	// 	cout<<ans<<endl;

	// }
	int T,N,K,P,AB[2][1000];
	cin>>T;
	
	while(T--){
		sum = 0;
		cin>>N>>K>>P;


		for(int i=0; i<N; i++){
			cin>>AB[0][i];
		}
		for(int i=0; i<N; i++){
			cin>>AB[1][i];
		}
		


		int pos = 0, int side, int sum = 0;

		int min;
		int min_pos;


		if(AB[0][0]<AB[1][0]){
			sum += AB[0][0];
			side = 0;
		}
		else{

			sum += AB[1][0];
			side = 1;
		}



		while(pos < N-1){

			if(pos+k>N){
				pos = N;
			}
			else{
				pos += k;
			}


		}
		cout<<sum<<endl;






	}







	
	
	return 0;
}
