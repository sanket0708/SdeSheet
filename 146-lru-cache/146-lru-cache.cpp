class Node{
    public:
    int key,value;
    Node *right,*left;
    
    Node(int key,int value){
        this->key=key;
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};
class LRUCache {
public:
    Node *head,*tail;
    int capacity,size;
    unordered_map<int,Node *> m;
    LRUCache(int capacity) {
        this->capacity=capacity;
        this->size=0;
        this->head=NULL;
        this->tail=NULL;
        
    }
    void delete_node(Node *p){
        if(p->left!=NULL){
            p->left->right=p->right;
        }
        else{
            head=p->right;
        }
        if(p->right!=NULL){
            p->right->left=p->left;
            
        }
        else{
            tail=p->left;
        }
        p->left=NULL;
        p->right=NULL;
    }
    
    void insert(Node *q){
       if (head == NULL)
        {
            head = tail = q;
        }
        else{
        tail->right = q;
        q->left = tail;
        tail = q;
        }

    }
    /*->if found then return val
    */
    int get(int key) {
        if (m.find(key)==m.end())
            return -1;
        Node *x=m[key];
        delete_node(x);
        insert(x);
        //insert the node at last
        
        return x->value;
    }
  
  void put(int key, int value) {
        Node *y=new Node(key,value);
        if(m.find(key)!=m.end()){
            m[key]->value=value;
            delete_node(m[key]);
            insert(m[key]);
        }else{
            m[key]=y;
            if(size==capacity){
                m.erase(head->key);
                delete_node(head);
                insert(y);
            }else{
                size+=1;//size of window increase
                insert(y);
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
