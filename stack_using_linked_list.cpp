#include<iostream>
using namespace std;

struct node{
	int info;
	node *next;
};

class stack{
	private:
		node *top,*temp;
		int size, count;
	public:
		stack()
		{
			cout<<"Enter size of list for enter values "<<endl;
			cin>>size;
			count =0;
		}
		
		void push(int x)
		{
			if(top==NULL)
			{
				top=new node();
				top->info=x;
				top->next=NULL;
				count++ ;
			}
			if(size==count)
			{
				return ;
			}
			temp=new node();
			temp->info=x;
			temp->next=top;
			top=temp;
			count++;
		}
		void pop()
		{
			if(top!=NULL)
		 	{
		 		top=temp->next;
				delete temp;
				temp=NULL;	
			}
			else
			{
				return ;
			}
		}
		void print()
		{
			cout<<"The top value is = "<<top->info<<endl;
		}
};


int main(){
	
	stack s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	
	cout<<"After the push function call "<<endl;
	s.print();
	
	s.pop();
	cout<<"After the pop function call "<<endl;
	s.print();
	return 0;
}
