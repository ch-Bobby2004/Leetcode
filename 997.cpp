 vector<int> indegree(n+1);
        vector<int> outdegree(n+1);
        
        for(vector<int> &vec : trust) {
            indegree[vec[1]]++;
            outdegree[vec[0]]++;
        }
        
        for(int i = 1; i<n+1; i++) {
            if(indegree[i] == n-1 && outdegree[i] == 0)
                return i;
        }
        
        return -1;