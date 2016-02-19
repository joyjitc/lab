#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student{
	char name[40];
	//char grade;
	float marks;
	int eng,maths,science,history,hindi;
	public:
		void getdata(void);
		void display(void);
};
void student::getdata(void)
{
	char ch;

	//cin.get(ch);
	cout<<"Enter name:";
	cin.get(ch);
	//cin.getline(name,40);
    gets(name);
	cout<<"Enter marks for English:";
	cin>>eng;
	cout<<"Enter marks for Maths:";
	cin>>maths;
	cout<<"Enter marks for Science:";
	cin>>science;
	cout<<"Enter marks for Hindi:";
	cin>>hindi;
	cout<<"Enter marks for History:";
	cin>>history;
	cout<<"\n";
}
void student::display(void)
{
	cout<<"Name:" << name <<"\t";
	cout<<"\nSubjects Are:\nEnglish:"<<eng<<"\nHindi:"<<hindi<<"\nmaths:"<<maths<<"\nhistory:"<<history<<"\nScience:"<<science<<"\nTotal Marks:"<<maths+history+science+hindi+eng<<"\t"<<"\n";
}
int main()
{
	system("cls");

	ofstream filin;
	int n;
	filin.open("student.txt", ios::out |ios::app );
	if(!filin)
	{
		cout<<"Cannot open file!!\n";
		return 1;
	}
	cout<<"Enter number of students\n";
	cin>>n;
	student arts[n];
    cout<<"Enter details for "<<n<<" students\n";
	for(int i=0;i<n;i++)
	{
		arts[i].getdata();
		filin.write((char *) & arts[i],sizeof(arts[i]));
	}
	filin.close();

	ifstream fout;
	fout.open("student.txt", ios::in );
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
