

#include<iostream>

using namespace std;
int m,n;

class addmatrix
{
    public:

int m,n, c, d, first[10][10], second[10][10], sum[10][10];
void inputdata()
{


   
   cout << "Enter the number of rows and columns of matrix ";
   cin >> m >> n;
   cout << "Enter the elements of first matrix\n";

   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         cin >> first[c][d];

   cout << "Enter the elements of second matrix\n";

   for ( c = 0 ; c < m ;c++ )
      for ( d = 0 ; d < n ; d++ )
            cin >> second[c][d];
}
void display()
{
   
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         sum[c][d] = first[c][d] + second[c][d];

   cout << "Sum of entered matrices:-\n";
   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
        {
         cout <<  sum[c][d];
        }
     cout<<  endl; 
   }
   
}
};
main()
{
	addmatrix X;
	X.inputdata();
	X.display();
	return 0;
}
