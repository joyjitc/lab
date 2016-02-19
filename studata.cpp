//this file is to access students data bast using file operations in c++
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
 int choice;
 cout<<"choose one of the following operations "<<endl;
string input;
int counter=1;
int k=4;

 while(1){
 cout<<"enter 1 to enter the details"<<endl;
 cout<<"enter 2 for retreving students data"<<endl;
 cout<<"enter 3 for quitting"<<endl;
cin>>choice;
 if(choice ==1 )
 {
      ofstream file;
      file.open("students_database.txt");
     int number;
string name;
int roll_no;
string dept;
int total_marks;
cout<<"enter the number of stduents"<<endl;
cin>>number;
     while(number>0){
      cout<<"enter the name of the student"<<endl;
       cin>>name;
       file <<"NAME : "<<name<<"\n";
       cout<<"enter the roll no of the student"<<endl;
       cin>>roll_no;
       file <<"ROLL NO: "<<roll_no<<endl;
       cout<<"enter the dept"<<"\n";
       cin>>dept;
       file <<"DEPARTMENT: "<<dept<<endl;
       cout<<"enter the total marks obtained by the student"<<"\n";
       cin>>total_marks;
       file <<"TOTAL MARKS: "<<total_marks <<"\n";
        number--;
      }
      file.close();
 }
 else if(choice ==2)
 {
     int flag =0;
     string enter_name;
     cout<<"enter the name of the student"<<endl;
     cin>>enter_name;
   ifstream file("students_database.txt");
          while(!file.eof())
            {
                getline(file, input);
                string sub = input.substr(7, input.length());
            if(sub.compare(enter_name) == 0){
              getline(file, input);
               cout<<input<<endl;
                getline(file, input);
                 cout<<input<<endl;
                  getline(file, input);
            cout<<input<<endl;
            flag++;
            break;
            }
            }
            if(flag ==0){
                cout<<"NO SUCH STUDENTS FOUND "<<endl;
   }
 }
 else if(choice==3)
 {
   break;
 }

 else {
    cout<<"THIS IS A WRONG OPTION ...PLEASE CHOOSE ANOTHER ONE "<<endl;
 }
   }
    return 0;
}
