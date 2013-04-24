#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void number1 ();
void number2 ();
void number3 ();
void number4 ();
void number5 ();
void number6 ();
void number7 ();

typedef struct node
{
	int data;
	struct node *pNext;
} Node;

Node *makeNode (int data);
void insertInOrder (Node **pList, int data);
Node *reverseOrder (Node *pList);
void printList (Node *pList);
