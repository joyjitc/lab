  #include <bits/stdc++.h>
  #define _ ios_base::sync_with_stdio(0);cin.tie(0);

  using namespace std;

  int main()
  {
    int t,i,temp;
    long long int ans,n,num;

    long a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        temp=a[0];
        num=1;
        for(i=1;i<n;i++)
        {
            if(a[i]>=temp)
            {
                num++;
                temp=a[i];
            }

            else
            {
                ans+=((num+1)*num)/2;
                temp=a[i];
                num=1;
            }

        }

         ans+=((num+1)*num)/2;
         cout<<ans<<endl;




    }


    return 0;
  }
