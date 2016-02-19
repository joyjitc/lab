#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class empl{
	char name[40];
	//char grade;
	float salary;
	int id;
	public:
		void getdata(void);
		void display(void);
};
void empl::getdata(void)
{
	char ch;

	//cin.get(ch);
	cout<<"Enter name::";
	cin.get(ch);
	//cin.getline(name,40);
    gets(name);
	cout<<"Enter Employee ID::";
	cin>>id;
	cout<<"Enter the salary::";
	cin>>salary;
	cout<<"\n";
}
void empl::display(void)
{
	cout<<"Name::" << name <<"\n";
	cout<<"Employee ID::"<<id<<"\nSalary::"<<salary<<"\n";
}
int main()
{
	system("cls");

	ofstream filin;
	int n;
	filin.open("empl.txt", ios::out |ios::app );
	if(!filin)
	{
		cout<<"Cannot open file!!\n";
		return 1;
	}
	cout<<"Enter number of empls\n";
	cin>>n;
	empl arts[n];
    cout<<"Enter details for "<<n<<" empls\n";
	for(int i=0;i<n;i++)
	{
		arts[i].getdata();
		filin.write((char *) & arts[i],sizeof(arts[i]));
	}
	filin.close();

	ifstream fout;
	fout.open("empl.txt", ios::in );
	fout.seekg(0,ios::beg);
	cout<<"The contents are shown :\n";
	for(int i=0;i<n;i++)
	{
		fout.read((char *) &arts[i],sizeof(arts[i]));
		arts[i].display();
	}
	fout.close();
	return 0;
}
