class MedianFinder {
public:
    priority_queue<int>maxHeap;
    priority_queue<int, vector<int>, greater<int>>minHeap;
    double median=-1;
    
    int signum(int a, int b){
        if(a==b)
            return 0;
        
        else if(a>b)
            return 1;
        
        else
            return -1;
        
    }
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        switch(signum(maxHeap.size(), minHeap.size())){
            case 0:if(num>median){
                minHeap.push(num);
                median=minHeap.top();
            }
                
                else{
                    maxHeap.push(num);
                    median=maxHeap.top();
                }
                break;
                
            case 1:if(num>median){
                minHeap.push(num);
                median=(double(minHeap.top())+maxHeap.top())/2;
            }
                
                else{
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                    maxHeap.push(num);
                    median=(double(minHeap.top())+maxHeap.top())/2;
                }
                break;
                
            case -1:if(num>median){
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(num);
                median=(double(minHeap.top())+maxHeap.top())/2;
            }
                
                else{
                    maxHeap.push(num);
                    median=(double(minHeap.top())+maxHeap.top())/2;
                }
                break;
        }
    }
    
    double findMedian() {
        return median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */