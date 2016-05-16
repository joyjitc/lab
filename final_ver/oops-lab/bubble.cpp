#include<iostream>
using namespace std;
template < typename T > void bubble_sort( T a[], int n )
{
    int i,j;
    T temp ;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
	int a[7]={13,16,32,5,2,67,45};
	char b[4]={'s','b','d'};
	string c[5]={"jdashkd","oriwoeww","dsaijai","roeie","jsdksha"};
	bubble_sort(a,7);
	for(int i=0;i<6;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	bubble_sort(c,5);
	for(int j=0;j<5;j++)
		cout<<c[j]<<"\t";
	cout<<endl;
}