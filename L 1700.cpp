class Solution {
public:
    int countStudents(vector<int>& stud, vector<int>& sand) {
        int n1=stud.size();
        int n2=sand.size();
        queue<int> q;
        stack<int> s;
        for(int i=0; i<n1;i++) q.push(stud[i]);
        for(int i=n2-1; i>=0;i--) s.push(sand[i]);
        int c=0;
        while(!q.empty() && c!=q.size()){
            if(q.front()==s.top()){
                q.pop();
                s.pop();
                c=0;
            }
            else{
                int t=q.front();
                q.pop();
                q.push(t);
                c++;
            }
        }
        return c;
    }
};
