#include<iostream>
#include<vector>
using namespace std;

class node
{
	private:
			int data;
			node *left;
			node *right;
	public:
			node()
			{
				data = 0;
				left=NULL;
				right=NULL;
			}
			node(int d)
			{
				data = d;
				left=NULL;
				right=NULL;
			}
			void setnode(int d)
			{
				data=d;
			}
			void setnodeleft(node *d)
			{
				left=d;
			}
			void setnoderight(node *d)
			{
				right=d;
			}
			void getnode()
			{
				cout << data << left << right;
			}
			
};

class TBT
{
	
	public:
			node root;
			TBT()
			{
				
			}

			
};

int main()
{
	TBT t;
	t.root.getnode();
}
//try catch

