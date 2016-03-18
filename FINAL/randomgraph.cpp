/* CODE BY
		ABHISHEK KUMAR	
		 */

#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<set>
#include<time.h>
using namespace std;

#define mem(a,b) memset(a,(b),sizeof(a))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define loop(i,x) for(int i=0;i<x;i++)
#define looop(i,a,b) for(int i=a;i<=b;i++)
#define l(x) strlen(x)
#define ef else if
#define pb(a) push_back(a)

typedef long long int llu;

void optimizeIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
   
struct AdjListNode
{
    int dest;
    struct AdjListNode* next;
};
 
struct AdjList
{
    struct AdjListNode *head;  // pointer to head node of list
};
 
struct Graph
{
    int V;
    struct AdjList* array;
};
 
struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newNode =
            (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}
 
struct Graph* createGraph(int V)
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;
	graph->array = (struct AdjList*) malloc(V * sizeof(struct AdjList));
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;
 
    return graph;
}
 
void addEdge(struct Graph* graph, int src, int dest)
{
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
 
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}
 
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->V; ++v)
    {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (pCrawl)
        {
            printf("-> %d", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}
 
int main()
{
    
	srand (time(NULL));

	int n,m,a,b,h;
    cout<<"input number of nodes of graph\n";
    cin>>n;
	struct Graph* graph = createGraph(n);
	cout<<"input no. of edges\n";
	cin>>m;
	int a1[m];
	int a2[m];
	int p=0;
	a1[0]=-1;
	a2[0]=-1;
	while(m!=0){
		int flag=0;
		a = rand() % n;
		b = rand() % n;
		for(int i=0;i<p;i++)
		{
			if((a1[i]==a && a2[i]==b) || (a==b) || (a1[i]==b && a2[i]==a))
				flag=1;
		}
		if(flag==0){
			m--;
			//p++;
			a1[p]=a;
			a2[p]=b;
    		addEdge(graph, a1[p], a2[p]);
    		p++;
    	}
	}
	printGraph(graph);
	return 0;
}
