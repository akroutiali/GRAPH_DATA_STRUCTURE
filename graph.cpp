#include <bits/stdc++.h>
using namespace std;

class graph
{
	public:
		map<int,vector<int>>adj;
	        void addEdge(int v,int w)
		{
                  adj[v].push_back(w);
		}
                void print()
		{
			for(int i=0;i<adj.size();i++)
			{
				cout<<i<<"====="<<endl;
				for(int j=0;j<adj[i].size();j++)
				{
					cout<<adj[i][j]<<endl;
				}
			}
		}
};
int main()
{
	graph gh;
	gh.addEdge(0,1);
	gh.addEdge(0,2);
	gh.addEdge(1,2);
	gh.addEdge(2,0);
	gh.addEdge(2,3);
	gh.addEdge(3,3);
	gh.print();
}
