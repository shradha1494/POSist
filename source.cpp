#include<bits/stdc++.h>   
using namespace std;
int refernceid ;
static int  nodenumber ; 
char* timestamp(){
 	 time_t now = time(0);
     char* date = ctime(&now);
     return date;
}
 struct data 
{
    int id, value;
    string ownername; 
    data(){
        this->id=id;
        this->value=value;
        this->ownername=ownername;
    }
};
struct node 
{ 
 int nodeid;
 int time=timestamp();
 int nodenumber;
 float value ;
 string ownername ;
 unordered_map<int ,list<int>,list<string>>m;  
 int key;                                        
 m[key].push_back(time);
 m[key].push_back(t);
 m[key].push_back(nodenumber);
 m[key].push_back(nodeid);
 m[key].push_back(referenceid);
 m[key].push_back(genesisReference);
}
node newnode(int id,int value,string ownername,int key) 
{
	node *p;
	p=new node();
	p->nodeid=id;
	p->value=value;
	p->ownername=ownername;
	p->key=key;
	return node;
}
int main()
{
 	int ref=-1;
 	int count;
 	int num;
 	cin>>num;
 	int id,value,key=0;
 	string ownername;
 	for(int i=0;i<num;i++) 
 	{	
 	    cin >> id >> value >> ownername;
 	    node *t;
 	    t=newnode(id,value,ownername,key);
 	    key++;
    }
 	if(referenceid==nodenumber)
 	{
 		return ref;
	 }
	 
 	return 0;
 }
