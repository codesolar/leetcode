class MyHashMap {
    ArrayList<int[]> h;
    int m;
    public MyHashMap() {
        m=10007;
        h=new ArrayList<>(m);
        for(int i=0;i<m;i++){
            h.add(i,new int[2]);
            h.get(i)[0]=-1;
            h.get(i)[1]=-1;
        }
    }
    
    public void put(int key, int value) {
        int k=key%m;
        int i=k;
        int e=k-1;
        while(i<m && (h.get(i)[0]!=-1 && h.get(i)[0]!=key) ){
            i=i+1;
        }
        if(i==m){
            i=0;
            while(i<e && (h.get(i)[0]!=-1 && h.get(i)[0]!=key)){
                i+=1;
            }
        }
        if(h.get(i)[0]==-1 || h.get(i)[0]==key)
        {
            h.get(i)[0]=key;
            h.get(i)[1]=value;
        }
        
    }
    
    public int get(int key) {
        int k=key%m;
        int i=k;
         int e=k-1;
        while(i<m && h.get(i)[0]!=key){
            i=(i+1);
        }
          if(i==m){
            i=0;
            while(i<e && h.get(i)[0]!=key){
                i+=1;
            }
        }
        if(i==e){
            return -1;
            
        }
        return h.get(i)[1];
    }
    
    public void remove(int key) {
        int k=key%m;
        int i=k;
         int e=k-1;
        while(i<m && h.get(i)[0]!=key){
            i+=1;
        }
          if(i==m){
            i=0;
            while(i<e && h.get(i)[0]!=key){
                i+=1;
            }
        }
        if(h.get(i)[0]==key){
            h.get(i)[0]=-1;
            h.get(i)[1]=-1;
        } 
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */