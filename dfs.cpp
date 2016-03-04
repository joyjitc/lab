#include<bits/stdc++.h>
using namespace std; 
int G[10][10],n;
bool visited[10];

void bfs( int v )
{
    int i, front, rear;
    int que[10];
    front = rear = -1;
 
    cout<<v<<" ";
    visited[ v ] = true;        
    rear++;
    front++;
    que[ rear ] = v;
 
    while ( front <= rear )
        {
            v = que[ front ];
            front++;
 
            for ( i = 0;i < n;i++ )
                {
 
                    if ( G[ v ][ i ] == 1 && visited[ i ]== false )
                        {
                            cout<<i<<" ";
                            visited[ i ] = true;
                            rear++;
                            que[ rear ] = i;
                        }
                }
        } 
}

int main()
{
    int i,j;
    cout<<"Enter number of vertices:";
   
    cin>>n;
    cout<<"Enter adjecency matrix of the graph:";
   
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            cin>>G[i][j];
 
   for(i=0;i<n;i++)
        visited[i]=false;
 
    bfs(0);
}