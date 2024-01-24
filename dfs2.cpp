class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>umap;
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            umap[u].push_back(v);
            umap[v].push_back(u);
        }
        vector<bool>visited(n,false);
        visited[source]=true;
        queue<int>q;
        q.push(source);
        while(!q.empty())
        {
            int v=q.front();
            q.pop();
            vector<int>temp=umap[v];
            for(int i=0;i<temp.size();i++)
            {
                if(visited[temp[i]]==false)
                {
                    visited[temp[i]]=true;
                    q.push(temp[i]);
                }
            }
        }
        return visited[destination];
    }
};
 int main()
 {
    int tc;
    cin>>tc;
    while(tc--)
    {
        int V,E;
        cin>>V>>E;
        vector<int>adj[];
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
     Solution obj;
     vector<int>v=obj.
    }
 }