
 
struct elementi{
	telement el;
	elementi *slj;
};
struct que{
	elementi *f,*r;
};
  
 
que* InitQ(que *Q){
	elementi *nov=new elementi;
	Q = new que;
	nov->slj=NULL;
	Q->r=nov;
	Q->f=nov;
	return Q;
}
telement FrontQ(que *Q){
   return Q->f->slj->el;
}
void EnQueueQ(telement izb, que *Q){
	elementi *nov=new elementi;
	nov->el = izb;
	nov->slj=NULL;
	Q->r->slj=nov;
	Q->r=nov;
}
void DeQueueQ(que *Q){
	elementi *brisi = Q->f;
	Q->f = brisi->slj;
    delete brisi;
}
bool IsEmptyQ(que *Q){
	if(Q->r==Q->f)
		return true;
	return false;
}
 
