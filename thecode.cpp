#include<iostream>
using namespace std;



typedef struct bst

{

    int data;

    struct bst *lchild,*rchild;

}bst;





class theFunction
{
    public:
    bst *insert_node(bst **);
    bst *create();
    

    
};

bst *create()

{

    bst *temp;

    static int i=1;

    temp=(bst*)malloc(sizeof(bst));

    printf("\n ENTER %d NODE: ",i);;

    ++i;

    scanf("%d",&temp->data);

    temp->lchild=NULL;

    temp->rchild=NULL;

    return temp;

}

bst *insert_node(bst **p)

{

    static bst *temp1,*temp2;

    bst *newnode;

    newnode=create();

	if((*p)==NULL)

	{

		(*p)=newnode;

		(*p)->lchild=(*p)->rchild=NULL;

	}

	else

	{

		temp1=(*p);

		while(temp1!=NULL)

		{

			temp2=temp1;

			if(newnode->data<temp1->data)

				temp1=temp1->lchild;

			else

				temp1=temp1->rchild;

		}

		if(temp2->data>newnode->data)

		{

		    temp2->lchild=newnode;

			temp2=temp2->lchild;

			temp2->lchild=temp2->rchild=NULL;

		}

		else

		{

		    temp2->rchild=newnode;

			temp2=temp2->rchild;

			temp2->lchild=temp2->rchild=NULL;

		}

	}

	return (*p);

}

5


int main()
{
    system("cls");
    int n,i;
    bst *root;
    root=NULL;
    printf("\nBinary Search tree\n");
    printf("\t........\n\n");
    printf("Enter the no of nodes of binary tree");
    scanf("%d",&n);
    while(n-->0)
    {
        root=insert_node(&root);
    }

    return 0;

}


