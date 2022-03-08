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
	for(auto it=adj.begin(); it !=adj.end();it++)
	{
		cout<<it->first<<"========"<<endl;
		for(auto sec=it->second.begin();sec!=it->second.end();sec++)
		{
			cout<<*sec<<" "<<endl;
		}
	}

}
void Graph::DFS(int start)
{

stack<int> s;
// add start element to the stack 
s.push(start);
while(!s.empty())
{
	int curr=s.top();
	//pop element from the stack 
	s.pop();
	//check if element is already  seen 
	if(!seen[curr])
	{
		//mark element as seen 
		seen[curr]=true;
		cout<<curr<<endl;
	}
	//add the adjacenet element to the stack if element is already seen don't add it 
	for(int i=0;i<adj[curr].size();i++)
	{
            if(!seen[adj[curr][i]])
	    {
	       s.push(adj[curr][i]);
	    }
	}

}}


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
