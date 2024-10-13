// 1. what is Graph
// -> Graph is data structure that have node and edges 

// 2. What are types of graphs
// -> Different types of graphs are
//    1. Directed graphs: it have direction in edges
//    2. Undirected graphs: it have no direction in edges
//    3. Weighted graphs: it have weight in edges
//    4. circular graphs: it have circular fashion edges 



#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Graph{
  public:
  // here we store node as key and differnet type of edges that is connecteed to it
  unordered_map<T, list<T>> adjList;

  // Function to add edge to graph
  void addEdge(int u, int v, bool directed){
    // if is not directed then we will add edge
    adjList[u].push_back(v);
    if(!directed){
      // which means this not directed
      // then we hav to add bidirectional edges
      adjList[v].push_back(u);
    }
  }

  void printAdjacencyMatrix(){
    for(auto node:adjList){
      cout<<node.first<<" ->";
      for(auto neighbour:node.second){
        cout<<" "<<neighbour;
      }
      cout<<endl;
    }
  }

  void bfs(int src, unordered_map<int,bool> &visted){
    // using queue 
    queue<int> q;

    // adding the first edge 
    q.push(src);
    visted[src] = true;

    while(!q.empty()){
      int frontNode = q.front();
      q.pop();

      cout<<frontNode<<", ";

      // now iterate to its neighbour and check that they are visited earlier or not
      for(auto neighbour:adjList[frontNode]){
        if(!visted[neighbour]){
          // check that is visted or not 
          // if not then add them in queue for further operation
          // then also mark it visted to further computation on that node 
          q.push(neighbour);
          visted[neighbour] = true;
        }
      }
    }
  }

  void dfs(int src, unordered_map<int,bool> &visited){
    cout<<src<<", ";
    visited[src] = true;

    for(auto neighbour:adjList[src]){
      if(!visited[neighbour]){
        dfs(neighbour, visited);
      }
    }
  }

  bool checkCycleUsingBFS(int src, unordered_map<int,bool> &visited){
    queue<int> q;
    unordered_map<int,int> parent;

    q.push(src);
    visited[src] = true;
    parent[src] = -1;

    while(!q.empty()){
      int frontNode = q.front();
      q.pop();

      for(auto nbr:adjList[frontNode]){
        if(!visited[nbr]){
          q.push(nbr);
          visited[nbr] = true;
          parent[nbr] = frontNode;
        }
        else{
          // means we have found that is marked visited earlier 
          // now we have to check that that is node is parent or not
          // if parent then no problem 
          // if not then it is cycle in graph
          if(nbr!=parent[nbr]){
            cout<<"Cycle Found\n";
            return true;
          }
        }
      }
    }
    return false;
  }

};

int main() {
  Graph<int> g;
  g.addEdge(0, 1, true);
  g.addEdge(0, 2, true);
  g.addEdge(1, 2, true);
  g.addEdge(2, 3, true);
  g.addEdge(2, 4, true);
  cout<<"\nAdjacency Matrix: \n";
  g.printAdjacencyMatrix();

  g.printAdjacencyMatrix();

  unordered_map<int, bool> visted1;
  // unordered_map<int, bool> visted2;
  // cout<<"\nBFS Traversal: ";
  // g.bfs(0,visted1);
  // cout<<"\nDFS Traversal: ";
  // g.dfs(0,visted2);

  bool hasCycle = g.checkCycleUsingBFS(0, visted1);
  if(!hasCycle){
    cout<<"\nGraph is not cyclic\n";
  }

  return 0;
}