#ifndef CLANG_LINKEDLIST_H
#define CLANG_LINKEDLIST_H

typedef struct {
    int value;
    struct Node *next_node;
} Node;

typedef struct {
    Node *head_node;
    Node *last_node;
} linkedList;

#endif //CLANG_LINKEDLIST_H
