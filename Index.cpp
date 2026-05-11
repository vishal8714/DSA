//BFS - Graph traversal

#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph{

    public:

     unordered_map<int, list<int>> adj;
     


     void addNode(int u, int v){

        adj[u].push_back(v);
        adj[v].push_back(u);
     }


     void printBFS(int x){

        queue<int> q;
        q.push(x);
        unordered_map<int, bool > visited;

        while(!q.empty()){


            int x = q.front();
            cout<<x, " , ";

            for(int i : adj[x]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                }
            }

            visited[x] = true;
            q.pop();
            

        }
     }
};

int main(){

    Graph g;
    g.addNode(1,2);
    g.addNode(2,3);
    g.addNode(1,3);
    g.addNode(3,7);
    g.addNode(2,4);
    g.addNode(4,5);
    g.addNode(5,6);
    g.addNode(6,7);
    g.addNode(6,7);

    g.printBFS(5);

}