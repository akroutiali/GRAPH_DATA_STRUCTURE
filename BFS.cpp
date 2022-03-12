#include<vector>
#include <map>
#include <queue>
#include <iostream>
using namespace std;

class graph{
	public:
	map<int,bool>seen;
	map<int ,vector<int>>adj;

	void addEdge(int v,int w)
	{
		adj[v].push_back(w);
	}
	void print()
	{
		for(auto it=adj.begin();it !=adj.end();it++)
		{
			cout<<"==========="<<it->first<<endl;
			for(auto vec=it->second.begin();vec!=it->second.end();vec++)
			{
				cout<<*vec<<endl;
			}

		}
	}

	void BFS(int start)
	{
          queue<int>q;
	  q.push(start);

	  while(!q.empty())

	  {
             int curr=q.front();
	      q.pop();
	      if(!seen[curr])
	      {
                  cout<<curr<<endl;
		  seen[curr]=true;
	      }

	      for(int i=0;i<adj[curr].size();i++)
	      {
		      if(!seen[adj[curr][i]])
			{

                          q.push(adj[curr][i]);
		        }

	      }


	}
	}
	};

	int main()
	{
           graph g;
	   g.addEdge(0,1);
	   g.addEdge(0,2);
	   g.addEdge(0,3);
	   g.addEdge(1,0);
	   g.addEdge(1,3);
	   g.addEdge(1,4);
	   g.addEdge(4,0);
	   g.addEdge(4,5);
	   g.print();
	   cout<<"print the graph following BFS approach"<<endl;
	   g.BFS(0);
	   return 0;

	}

	/*
	 *
	 *time complexity (v+E)
	 space complexity (v)
	 *
	 *
	 *
	 * */
