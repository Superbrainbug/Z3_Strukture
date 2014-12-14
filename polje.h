
struct que{
    telement elem[10000];
    int front,rear;
};

int AddOne(int n){
    return (n+1)%10000;
}

que *InitQ(que *Q){
    Q = new que;
    Q->front = 0;
    Q->rear = 9999;
    return Q;
}

bool IsEmptyQ(que *Q){
    if(AddOne(Q->rear) == Q->front) return true;
    else return false;
}
    
telement FrontQ(que *Q){
    return Q->elem[Q->front];
}

void EnQueueQ(telement p, que *Q){
    int n;
    if(Q->rear == 9999) n=0;
    else n = Q->rear+1;
    Q->elem[n] = p;
    Q->rear = n;
}

void DeQueueQ(que *Q){
    if(IsEmptyQ(Q)) cout << "Red je prazan!" << endl;
    else{
        if(Q->front==9999) Q->front=0;
        else Q->front++;
    }
}
