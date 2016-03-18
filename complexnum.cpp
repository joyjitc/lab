#include <bits/stdc++.h>
using namespace std;
 
class Complex
{
    private:
        int real;
        int imag;    
 
    public:
        Complex(double r = 0, double i = 0): real(r), imag(i) {};
 
        void setComplex(void)
        {
            cout << "Enter the real and imaginary parts : ";
            cin >> this->real;
            cin >> this->imag;
		cin>>imag;
		cout<<"\nThe entered complex number is "<<real<<" + i"<<imag<<endl;

		}
	complexnum();
	~complexnum();
	
};