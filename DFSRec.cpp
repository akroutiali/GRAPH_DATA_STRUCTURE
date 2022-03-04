#include <bits/stdc++.h>
using namespace std;

class Graph
{
	public:
		map<int,vector<int>> adj;
		map<int,bool> seen;

	        void addEdge(int v,int w);
		void print();
		void DFS(int start);
};

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::print()
{
	for(int i=0;i<adj.size();i++)
	{
		cout<<i<<"========";
		for(int j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<" "<<endl;
		}
	}

}


void Graph::DFS(int start)
{
cout<<start<<endl;
seen[start]=true;
for(int i=0;i<adj[start].size();i++)
{
	if(!seen[adj[start][i]])
	{
           DFS(adj[start][i]);
	}
}
}

int main()
{
Graph gh;
gh.addEdge(0, 1);
gh.addEdge(0, 2);
gh.addEdge(1, 2);
gh.addEdge(2, 0);
gh.addEdge(2, 3);
gh.addEdge(3, 3);
gh.print();
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
gh.DFS(1);

}

/*
 * time complexity O(v+e)
 */
