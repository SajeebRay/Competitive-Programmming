#include<stdio.h>
#include<stdlib.h>

struct Link

{

    int data;

    struct Link *next;

}*head=NULL,*temp=NULL,*last=NULL;

void create()

{

    int n,i;

    printf("Enter your node size  ");

    scanf("%d",&n);///n=3

    for(i=1;i<=n;i++)

    {

        temp = (struct Link*)malloc(sizeof(struct Link));

        printf("Enter the value of %d number node ",i);

        scanf("%d",&temp->data);

        if(head==NULL){

           head = temp;

        }

        else{

            last->next=temp;

        }

        last = temp;

    }

    last->next=NULL;

    printf("Node creation successfull\n");



}

void display()

{
    struct Link *temp;
    temp = head;
    while(temp!=NULL)

    {

        printf("%d->",temp->data);

        temp = temp->next;

    }

    printf("NULL\n");

}

main()

{

    create();

    display();

    display();

    display();

}


/*#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	char ch;
	struct node *next;
	struct node *prev;
};
struct node *head, *tail, *temp, *newnode;
void create();
void display_forword();
void display_reverse(struct node *head);
int main()
{
	create();
	display_forword();
	display_reverse(head);

	return 0;
}
void display_forword()
{
	temp = head;
	while (temp != NULL)
	{
		printf("%d %c\n", temp->data, temp->ch );
		temp = temp->next ;
	}
}
void create()
{
	int choice = 1;
	head = NULL;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		scanf("%d %c", &newnode->data, &newnode->ch );
		newnode->next = NULL;
		newnode->prev = NULL;

		if (head == NULL)
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			tail = newnode;
		}
	}
}
void display_reverse(struct node *head)
{

	if (head == NULL)
		return;
	else
	{
		(display_reverse(head->next));
		printf("%d %c\n", head->data, head->ch);
	}
}
*/

/*#include<stdio.h>

int main()
{
    printf("\"WELLCOME\"\n");

    return 0;
}
*/
