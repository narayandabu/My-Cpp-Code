#include <iostream>
#include "Queue_with_array.hpp"


using namespace std;
const int n=7;

void BFS(int visited[],int graph[][n]){   // USes Queues to traverse a graph 
    Queue<int> q(40);
    int node;
    int i=0;
    int a=0;
    cout<<a<<" ";
    visited[a]=1;
    q.Qinsert(a);
    while (!q.Qis_empty())
    {
        int node = q.Qdelete();
        for (int i = 0; i < 7; i++)
        {
            if (graph[node][i]==1 and visited[i]==0)
            {
                cout<<i<<" ";
                visited[i]=1;
                q.Qinsert(i);
            }
            
        }
        
    }
}
void DFS(int visited [],int graph[][n],int i){  // Uses stacks or Recursive Function calls to traverse.
    int j;
    cout<<i<<" ";
    visited[i]=1;
    for (int j = 0; j < n; j++){
        if (graph[i][j]==1 and visited[j]!=1 )
        {
            DFS(visited,graph,j);
        }
        
    }
    


}

int main (){

    
    int visited[7]={0,0,0,0,0,0,0};
    int graph[7][n]={
       //0,1,2,3,4,5,6
        {0,1,1,1,0,0,0},  // 0
        {1,0,1,0,0,0,0},  // 1
        {0,1,0,1,1,0,0},  // 2
        {1,0,1,0,1,0,0},  // 3
        {0,0,1,1,0,1,1},  // 4
        {0,0,0,0,1,0,0},  // 5
        {0,0,0,0,1,0,0},  // 6
    };
    DFS(visited,graph,6);
    cout<<endl;
    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < 7; j++)
    //     {
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    BFS(visited,graph);
    



    return 0;
}