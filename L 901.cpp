class StockSpanner {
public:
stack<pair<int,int>> st;
int index=-1;
    StockSpanner() {
        
    }
    
    int next(int price) {
        index++;
        while(!st.empty() && st.top().second<=price) st.pop();
        if(st.empty()){
            st.push({index,price});
            return index+1;
        }
        int result=st.top().first;
        st.push({index,price});
        return index-result;
    }
};
