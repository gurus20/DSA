#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void insert(int data)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = data;
  temp->next = NULL;

  if (head == NULL)
  {
    head = temp;
  }

  if (current == NULL)
  {
    current = head;
  }
  else
  {
    current->next = temp;
    current = temp;
  }
}

int main()
{
  int data;

  while (1)
  {
    scanf("%d", &data);
    if (data == -1)
    {
      break;
    }
    else
    {
bi        insert(data);
    }
  }

  struct node *temp = head;
  while (temp->next != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }

  return 0;
}