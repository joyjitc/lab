#include<iostream>
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
  cout<<"Enter the number of <edges> & <vertices>";
  cin>>g.e>>g.v;
  adj=new int*[g.v];

  for(int i=0;i<g.v;i++)
    adj[i]=new int [g.v];
  for (int i = 0; i < g.v; ++i)
  {
    for (int ji = 0; ji < g.v; ++ji)
    {
      adj[i][ji]=0;
    }
  }

  for (int i = 0; i < g.e; ++i)
  {
    cout<<"Enter Edge <start> & <end> Point ::";
              cin>>u>>v;
              adj[u][v]=1;
              //adj[v][u]=1;        //for undirected graphs
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
  g.creategraph();
  return 0;
}
