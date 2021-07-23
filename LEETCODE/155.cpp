//155. Min Stack

class MinStack {
public:
    /** initialize your data structure here. */
    /*MinStack() {
        
    }*/
    stack<pair<int,int>>st;
    
    void push(int val) {
        if(st.size()==0)
            st.push({val,val});
        else{
            int min_ele=st.top().second;
            min_ele=min(val,min_ele);
            st.push({val,min_ele});
        }
            
    }
    
    void pop() {
        if(st.size()==0)
            return;
        st.pop();
    }
    
    int top() {
        int x=st.top().first;
        return x;
    }
    
    int getMin() {
        int x=st.top().second;
        return x;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */