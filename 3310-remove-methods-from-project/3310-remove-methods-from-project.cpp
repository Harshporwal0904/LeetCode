class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        vector<bool> sus(n, false);
        // vector<int> indeg(n,0);
        
        for(auto &edge: invocations){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            // indeg[v]++;

        }


        queue<int> que;
        que.push(k);
        sus[k] = true;

        while(!que.empty()){
            int ele = que.front();
            que.pop();

            for(auto &next : adj[ele]){
                if(!sus[next]){ 
                    que.push(next);
                    sus[next] = true;
                    // indeg[next]--;

                }
            }

        }


        // for(auto &inv : invocations){
        //     int u = inv[0];
        //     int v = inv[1];
        //     if(!sus[u] && sus[v]){
        //         vector<int> temp;
        //         for(int i  = 0 ; i < n; i++){
        //             temp.push_back(i);
        //         }

        //         return temp;
        //     }
        // }

        vector<int> ans;
        for(int i  = 0; i < n; i++){
            // if(sus[i] && indeg[i] != 0) return 
            if(!sus[i]) ans.push_back(i);
        }

        for(auto &inv : invocations){
            int u = inv[0];
            int v = inv[1];
            if(!sus[u] && sus[v]){
                vector<int> temp;
                for(int i  = 0 ; i < n; i++){
                    temp.push_back(i);
                }

                return temp;
            }
        }

        return ans;



    }
};