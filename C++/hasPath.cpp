#include<bits/stdc++.h>
using namespace std;
class Edge {
public:
  int src;
  int nbr;
  int wt;

  Edge(int src, int nbr, int wt) {
    this->src = src;
    this->nbr = nbr;
    this->wt = wt;
  }
};

bool hasPath(vector<Edge> graph[] , int src , int dest , vector<bool>visited){
    if(src == dest) return true;
    visited[src] = true;
    for(Edge edge : graph[src]){
        if(visited[edge.nbr] == false){
            bool nbrHasPath = hasPath(graph , edge.nbr , dest , visited);
            if(nbrHasPath == true){
                return true;
            }
        }
    }
    return false;
}
int main() {
  int vtces;
  cin >> vtces;
  vector<Edge>graph[vtces];

  int edges;
  cin >> edges;
  for (int i = 0; i < edges; i++) {
    int v1 ;
    int v2 ;
    int wt ;
    cin >> v1 >> v2 >> wt;
    graph[v1].push_back(Edge(v1, v2, wt));
    graph[v2].push_back(Edge(v2, v1, wt));
  }

  int src;
  cin >> src;
  int dest;
  cin >> dest;
  vector<bool> visited(vtces , false);
  bool foundPath = hasPath(graph , src , dest , visited);
  if(foundPath == true){
    cout << "true"<< endl;
  }else{
    cout << "false" << endl;
  }

}   
