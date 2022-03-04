********************************GRAPH*******************
1-Overrow 

GRAPH is a  non linear data structure  consisting of vertices and edges  .

madrid---- Paris-------Amesterdam 

-madrid is a vertex.
-the connexion  between madrid and paris is an edge 
-path :the sequence of vertice to go through one vertex to another:
to go  from madrid to Amesterdam the path is [madrid ,Paris ,Amesterdam]
-Path lenght :the number of vertex in the path 
-Cycle :is a path where the starting point and the endpoint are the same vertex 
-Connectivity :if there is at least one path between two vertice ,these two vertices are connected 
-Degree of vertex :(applies to unweighted graph) is the number of edge connected to an vertex
-IN-Degree :is concept in the directed graph ex:IN-Degree of A is 1
-OUT-Degree :is concept in the directed GRAPH ex:Out-Degree of A is 2

A------>B------>C
         ------->D

type of graph : 

Undirected Graph  :the edge between any two vertices is undirected "do not have a direction ".
A-------B
 -------
DIRECTED Graph :the edge between any two vertex is directed "have a direction" graph is directional 
A----->B
Weighted Graph :each edge in the graph has an associate weight (metric,time ,distance)

    0.5
A---------B

2-DISJOINT SET


 ****quick find implementation of the Disjoint Set*********
 

 -the idea is declare a vector as parentroot where the index represent the vertex and the value represent the parentvertex
 When initializing a union-find constructor, we need to create an array of size NN with the values equal to the corresponding array indices; this requires linear time.


 Each call to union will require O(N)O(N) time because we need to traverse through the entire array and update the root vertices for all the vertices of the set that is going to be merged into another set

 The connected operation takes O(1)O(1) time since it involves the two find calls and the equality check operation.

 ====>time complexity :O(n) space complexity O(n)