#include<iostream>
#include <list>
using namespace std;
 
class Graph
{
    int V;    
    list<int> *adj;    
    void DFSUtil(int v, bool visited[]);  
public:
    Graph(int V);   
    void addEdge(int v, int w);   
    void DFS(int v);     
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
void Graph::DFS(int v)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    DFSUtil(v, visited);
}
 
int main()
{
	int n,m,a,b,h;
    cout<<"input number of nodes of graph\n";
    cin>>n;
	Graph g(n);
	cout<<"input no. of edges\n";
	cin>>m;
	cout<<"input edges\n";
	while(m--){
		cin>>a>>b;
    g.addEdge(a,b);
}
cout<<"input start vertex\n";
cin>>h;
    cout << "Following is Depth First Traversal\n";
    g.DFS(h);
 
    return 0;
}
