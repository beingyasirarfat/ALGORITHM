#include <bits/stdc++.h> 
using namespace std;
struct Node
{
        int data;
        struct Node* next;
};

void Insert(struct Node** Head_Ref, int data){
        struct Node* new_node = (struct Node*) malloc( sizeof(struct Node));
        new_node->data = data;
        new_node->next = (*Head_Ref);
        *Head_Ref = new_node;
}

void PushBack(struct Node** head_ref, int new_data){
        struct Node* last = *head_ref;
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->next = NULL;
        if(*head_ref == NULL ){
                *head_ref = new_node;
                return;
        }
        while( last->next != NULL ){
                last = last->next;
        }
        last->next = new_node;
        return;
}


void InsertAt(struct Node** head_ref, int location, int data ){
        struct Node * last = *head_ref;
        struct Node * new_node = (struct Node*) malloc( sizeof( struct Node));
        new_node->data = data;

        for(size_t i=0;i<location && last->next != NULL;i++){
                last = last->next;
        }

        new_node->next = last->next;

        last->next = new_node;


}
void Print(struct Node* node){
        while(node != NULL ){
                cout<< node->data <<endl;
                node = node->next;
        }
}
int main(){
        struct Node* Head = NULL;
        struct Node* First = NULL;
        struct Node* Second = NULL;

        Head = (struct Node*) malloc( sizeof( struct Node ));
        First = (struct Node*) malloc( sizeof( struct Node ));
        Second = (struct Node*) malloc( sizeof( struct Node ));

        Head->data = 56;
        Head->next = First;
        First->data  = 654;
        First->next = Second;
        Second->data = 23563;
        Second->next = NULL;
        Insert(&Head,100);
        Insert(&Head,500);
        PushBack(&Head,3000);
        InsertAt(&Head,0,99);
        Print(Head);
}
