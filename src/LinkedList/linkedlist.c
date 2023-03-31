#include "linkedlist.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
// linkedlist 구현 push,remove,get

linkedList *new_linkedList(){
    linkedList *link = (linkedList*)malloc(sizeof(linkedList));
    return link;
}
void add(linkedList* link, int value) {
    Node *head = link->head_node;
    Node *last = link->last_node;
    Node *node = (Node *) malloc(sizeof(Node));
    node->value = value;
    if (head == NULL) {
        link->head_node = node;
        link->last_node = node;
        return;
    }
    if (last->next_node == NULL){
        last->next_node = node;
        link -> last_node = node;
        return;
    }
}

int get(linkedList* link, int find_index) {
    Node *node = link->head_node;
    int index = 0;
    while(true) {
        Node *next_node = node->next_node;
        if (index == find_index) {
            int value = node->value;
            return value;
        }
        if (next_node == NULL){
            break;
        }
        index ++;
        node = next_node;
    }
    printf("IndexOutOfRange");
    exit(0);
}

void insert(linkedList *link, int insert_index, int value) {
    Node *head = link -> head_node;
    int index = 0;
    if (insert_index < 0){
        printf("IndexOutOfRange");
        exit(0);
    }
    if (head == NULL){
        if (insert_index == 0){
            add(link,value);
            return;
        }
        printf("IndexOutOfRange");
        exit(0);
    }
    Node *insert_node = (Node *) malloc(sizeof(Node));
    insert_node->value = value;
    Node *node = link->head_node;
    if (insert_index == 0){
        insert_node->next_node = head;
        link->head_node = insert_node;
        return;
    }
    while (true) {
        Node *next = node->next_node;
        if (next == NULL){
            printf("IndexOutOfRange");
            exit(0);
        }
        if (index == insert_index - 1) {
            node->next_node = insert_node;
            insert_node->next_node = next;
            return;
        }
        node = next;
        index ++;
    }
}

void delete(linkedList *link, int delete_index){
    Node *head = link -> head_node;
    int index = 0;
    if (delete_index < 0){
        printf("IndexOutOfRange");
        exit(0);
    }
    if (head == NULL){;
        printf("IndexOutOfRange");
        exit(0);
    }
    Node *node = link->head_node;
    if (delete_index == 0){
        Node *new_head = head->next_node;
        free(head);
        link->head_node = new_head;
        return;
    }
    while (true) {
        Node *next = node->next_node;
        if (next == NULL){
            printf("IndexOutOfRange");
            exit(0);
        }
        if (index == delete_index-1) {
            if (next->next_node != NULL) {
                Node *new_next = next->next_node;
                free(next);
                node->next_node = new_next;
                return;
            }
            free(next);
            return;
        }
        node = next;
        index ++;
    }
}
int main(){
    linkedList *list = new_linkedList();
    add(list,3);
    add(list,4);
    printf("%d\n",get(list,1));
    insert(list,1,10);
    insert(list,0,100);
    delete(list,3);
    printf("%d\n",get(list,0));
    printf("%d\n",get(list,1));
    printf("%d\n",get(list,2));


}