class Solution {
public:
    
    //dfs function which helps to find the safe nodes by the logic as:-
    //if a node is a part of a cycle it cannot be a safe node
    //thus we use the code for finding out cycles in a directed graph using dfs and 
    //modify it to apply it for this question
    
    bool dfs(vector<vector<int>>& graph , vector<int>& vis , vector<int>& pathVis , int node,
            vector<int>& check){
        //marking the vis and pathVis array for current node
        vis[node] = 1;
        pathVis[node] = 1;
        
        //iterating through all the graph nodes
        for(int i = 0 ; i < graph[node].size() ; i++){
            //we call the dfs function only if the node is not yet visited
            if(vis[graph[node][i]] == -1){
                //we call the dfs function and if it returns a true then it leads to a cycle
                //thus it cannot be a safe node
                //thus we mark the check as -1 as it can never be a safe node.
                //we alse return true so that its adjacent nodes are also part of cycle
                //and thus they too can't be a safe node.
                if(dfs(graph , vis , pathVis , graph[node][i] , check)){
                    check[graph[node][i]] = -1;
                    return true;
                }
                
                //also if the node is already visited
                //we check for two cases
                //1) if the node is also pathVisited then its part of the cycle as it lies 
                //int the path of the node thus its a proper cycle and it can't be a safe node 
                //thus we return true after marking it as not a safe node
                
                //2) if the node is not pathVisited then it was visited because of some other 
                //node path thus its not a cycle so we dont' do anything
                
            }else{
                if(pathVis[graph[node][i]] == 1){
                    check[graph[node][i]] = -1;
                    return true;
                }
            }
        }
        //if all the nodes for the current path had been checked and if it has come here then
        //it means that this is a safe node and all its previous calls also could be safe 
        //nodes thus we mark it as safe node and then return false as no cycle has been detected
        //we also unmark the pathVis as the path has ended
        
        pathVis[node] = -1;
        check[node] = 1;
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        //no of nodes
        int n = graph.size();
        //visited array
        vector<int> vis(n , -1);
        //path visited array
        vector<int> pathVis(n , -1);
        //array we use to mark the safe nodes in
        vector<int> check(n , -1);
        
        //array storing the final answer
        vector<int> ans;
        
        //iterating all the nodes and calling the dfs function if its not already visited
        
        for(int i = 0 ; i < n ; i++){
            if(vis[i] == -1){
                dfs(graph , vis , pathVis , i , check);
            }
        }
        
        //adding the safe nodes marked in check into the ans array
        for(int i = 0 ; i < n ; i++){
            if(check[i] == 1){
                ans.emplace_back(i);
            }
        }
        
        return ans;
    }
};
