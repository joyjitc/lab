#include<iostream>
using namespace std;
template < typename T > void bubble_sort( T a[], int n )
{
    int i,j;
    //t temp;
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
	int a[6]={1,2,3,4,4,3};
	char b[4]={'s','b','d'};
	bubble_sort(a,6);
	cout<<"\nSorted Order Integers: ";
	for(int i=0;i<6;i++)
		cout<<a[i]<<"\t";
	bubble_sort(b,4);

	cout<<"\nSorted Order Characters: ";
	for(int j=0;j<4;j++)
		cout<<b[j]<<"\t";
}