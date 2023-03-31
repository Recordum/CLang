#include "linkedlist.h"
#include <stdlib.h>
// linkedlist 구현 push,remove,get

linkedList *new_linkedList(){
    linkedList *link = (linkedList*)malloc(sizeof(linkedList));
    return link;
}
void add(linkedList* link, int value) {
    Node *head = link->head_node;
    Node *last = link->last_node;
    Node *node = (Node *) malloc(sizeof(node));
    node->value = value;
    if (head == NULL) {
        node->index = 0;
        link->head_node = node;
        link->last_node = node;
        return;
    }
    if (last->next_node == NULL){
        last->next_node = node;
        node->index = last -> index + 1;
        link -> last_node = node;
        return;
    }

}
int main(){
    linkedList *list = new_linkedList();
    add(list,3);
    add(list,4);
    add(list,5);
    add(list,6);
    add(list,7);

}