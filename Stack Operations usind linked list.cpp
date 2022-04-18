#include<stdio.h>
#include<stdlib.h> 
struct node
{
	int data;
	struct nodenext;
	void push();
	void pop();
	void peek();
	void display();
	void main()
	{
		int choice;
		while(1)
		{
			printf("\n \t 1. Push\n\t 2. pop\n\t 3. peek\n\t 4. display\n\t 5. exit\n\t");
			printf("\n enter your choice");
			scanf("%d",&choice);
			Switch(choice)
			{
				case 1: push();
				        break;
				        case 2: pop();
				                break;
				                case 3: peek();
				                        break;
				                        case 4: display();
				                                break;
				                                case 5: exit(0);
			}
		}
	}
	void Push()
	{
		struct node*new node;
		int elements;
		printf("\n enter elements into push");
		scanf("%d",&elements);
		new node=(struct node*)malloc(size of(struct node))
		new node->data=elements;
		new node->next=top;
		if (top==NULL)
		{
			top=newnode;
		}
	}
	void Pop()
	{
		struct node*ptr;
		if(top==NULL)
		{
			printf("stack is empty");
		}
		else
		{
			ptr=top;
			printf("%d is deleted";ptr->data);
			top=top->next;
			free(ptr);
		}
	}
	void Peek()
	{
		printf("\n%d is top most node in stack",top->data);
	}
	void Display()
	{
		struct node*ptr;
		ptr=top;
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
