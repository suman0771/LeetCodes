class Solution {
struct State{
        int mask, node, dist;
    };
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        int totalVisited=(1<<n)-1;
        queue<State> q;
        set<int> visited;

        for(int i=0;i<n;i++){
            q.push({1<<i,i,0});
            visited.insert((1<<i)*16+i);
        }
        while(!q.empty()){
            State curr=q.front();
            q.pop();

            if(curr.mask==totalVisited) return curr.dist;
            for(int neighbour:graph[curr.node]){
                int new_mask=curr.mask | (1<<neighbour);
                int hash_value=new_mask*16+neighbour;

                if(visited.find(hash_value)==visited.end()){
                    visited.insert(hash_value);
                    q.push({new_mask,neighbour,curr.dist+1});
                }
            }
        }
        return -1;  
    }
};