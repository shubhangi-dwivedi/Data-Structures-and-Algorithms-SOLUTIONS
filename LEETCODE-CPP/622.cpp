//622. Design Circular Queue

class MyCircularQueue {
    vector<int> q;
    int f,r;
    bool reset;
    
    public:
    MyCircularQueue(int k) {
        q.resize(k);
        f=0;
        r=0;
        reset=true;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        
        if(f==r && reset)
            reset=false;
        
        q[r]=value;
        r=(r+1)%q.size();
        
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        
        f=(f+1)%q.size();
        if(f==r && !reset)
            reset=true;
        
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        
        return q[f];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        
        return q[(r+q.size()-1) % q.size()];
    }
    
    bool isEmpty() {
        if(f==r && reset)
            return true;
        
        return false;
    }
    
    bool isFull() {
        if(f==r && !reset)
            return true;
        
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */