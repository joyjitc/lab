#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class graph
{
  public:
  int e,v;
  int **adj;

  void creategraph();
}g;

void graph::creategraph()
{
  int u,v;
    //graph *g=new graph;
  cout<<"Enter the no. of vertices::";
  cin>>g.v;
  adj=new int*[g.v];

  for(int i=0;i<g.v;i++)
    adj[i]=new int [g.v];

    int max=1,min=0;
        static bool first = true;
       if ( first )
       {
          srand(time(NULL)); //seeding for the first time only!
          first = false;
       }
    int r;
  for (int i = 0; i < g.v; ++i)
  {
    for (int ji = 0; ji < g.v; ++ji)
    {


       r=min + rand() % (max - min+1);
      adj[i][ji]=r;
    }
  }


  for (int i = 0; i < g.v; ++i)
  {
    for (int ji = 0; ji < g.v; ++ji)
    {

      cout<<adj[i][ji]<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  bool choice=1; 
  while(choice==1)
  {
     g.creategraph();
     cout<<"Do you want to continue?\n1 for Yes, 0 for No\nChoose Wisely!!\n";
     cin>>choice;
  }
 
  return 0;
}


int random(int min, int max) //range : [min, max)
{

}

