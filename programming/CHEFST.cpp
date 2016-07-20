#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long t,n1,n2,m,temp,hell;
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2>>m;
        if(n1<n2)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        if(m>=n2)
        {
            cout<<n1-n2<<"\n";
            continue;
        }
        hell=(m*(m+1))/2;
        if(hell>=n2)
        {
            cout<<n1-n2<<"\n";
           continue;
        }
        else
        {
           cout<<n1+n2-(2*hell)<<"\n";
           continue;
        }
    }
    return 0;
}
