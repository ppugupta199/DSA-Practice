#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
} *first = NULL;
void create (int A[],int n){
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
}
int main()
{

    return 0;

}