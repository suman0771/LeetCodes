class Solution {
public:
    int visited[205];
    void check(vector<int> v[],int it)
    {
        if(visited[it]) 
            return;
        visited[it]=1;
        for(int i=0;i<v[it].size();i++)
            check(v,v[it][i]);
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        /*
        1  1  0        1 -<-->- 2 
        1  1  0         
        0  0  1
        */
        int ans=0; 
        vector<int> v[isConnected.size()];
        for(int i=0;i<isConnected.size();i++)
            for(int j=0;j<isConnected[i].size();j++)
                if(isConnected[i][j])v[i].push_back(j);
        for(int i=0;i<isConnected.size();i++)
            if(!visited[i])
            {
                check(v,i);
                ans++;
            }
        return ans;
    }
};