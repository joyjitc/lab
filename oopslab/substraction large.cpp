#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000];
    char b[1000];
    int  c[1000]={0};
    int  d[1000]={0};
    int  e[1000]={0};
    char f[1000];
    int i,j,g;
    cout << "Enter the first number: ";
    cin >>a;
    cout << "Enter the second number: ";
    cin >>b;
    int l1=strlen(a);
    int l2=strlen(b);
    for(i=l1-1;i>=0;i--)
    {
        c[l1-1-i]=a[i]-'0';
    }
    for(i=l2-1;i>=0;i--)
    {
        d[l2-1-i]=b[i]-'0';
    }
    if(l1>l2)
        g=l1;
    else
        g=l2;
    for(i=0;i<g;i++)
    {
        int cf=c[i]-d[i];
        if(cf<0)
            {e[i]=cf+10;c[i+1]-=1;}
        else
            e[i]=cf;
    }
    j=0;
    if(e[g]!=0)
    {
        f[j]='-';
        j++;
    }
    for(i=g-1;i>=0;i--)
    {
        f[j]=e[i]+'0';
        j++;
    }
    cout << f<<endl;

    return 0;
}
