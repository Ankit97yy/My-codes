#include<iostream>
using namespace std;
struct node{
	int data;
	node* link;
};
node *head=NULL;

node* node_creation(){
	node* temp;
	temp=new node();
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	temp->data=num;
	temp->link=NULL;
	return temp;
}

void insertion_end(){
	node* p=head;
	if(head==NULL)
		head=node_creation();
	else{
		while(p->link!=NULL)
			p=p->link;
		p->link=node_creation();
	}
}
void insertion_head(){
	node *temp;
	temp=node_creation();
	temp->link=head;
	head=temp;
}

int lenght(){
	node *p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->link;
	}
	return count;
}

void insertion_specifi(){
	cout<<"in which position do you want to insert"<<endl;
	int pos;
	cin>>pos;
	node* p=head;
	for(int i=0;i<pos-2;i++){
		p=p->link;
	}
	node *temp=p->link;
	p->link=node_creation();
	p->link->link=temp;
}
void traverse(){
	node *p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->link;
	}
}

void deletion(){
	int pos;
	cout<<"enter a position"<<endl;
	cin>>pos;
	if(pos>lenght())
		cout<<"position does not exist"<<endl;
	else{
		if(pos==1){
			node *temp;
			temp=head;
			head=temp->link;
			temp->link=NULL;
			free(temp);
		}
		else{
			node *p=head,*q;
			for(int i=1;i<pos-1;i++){
				p=p->link;
			}
			q=p->link;
			p->link=q->link;
			q->link=NULL;
			free(q);
		}
	}
}
void choice(int num){
	switch(num){
		case 1:
			insertion_end();
			break;
		case 2:
			insertion_head();
			break;
		case 3:
			traverse();
			break;
		case 4:
			insertion_specifi();
			break;
		case 5:
			deletion();
			break;
		default:
			break;
	}
}
int main(){
	int num;
	while(num!=6){
		cout<<"enter your choice"<<endl;
		cin>>num;
		choice(num);
	}	
}
