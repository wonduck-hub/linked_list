#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void print_node(node_t* head) {
    node_t* p = head;

    while (p != NULL) {
        printf("%d\n", p->value);
        p = p->next;
    }
}

void destroy(node_t* head) {
    node_t* p = head;

    while (p != NULL) {
        node_t* tmp;
        tmp = p->next;
        free(p);
        p = tmp;
    }
}

void insert_front( node_t** p_head, int val) {
    node_t* new_node;

    new_node = malloc(sizeof(node_t));
    new_node->value = val;

    new_node->next = *p_head;
    *p_head = new_node;
}

void insert_sorted(node_t** p_head, int val) {
    node_t** pp = p_head;
    node_t* new_node;

    new_node = malloc(sizeof(node_t));
    new_node->value = val;

    while ((*pp) != NULL) {
        if ((*pp)->value >= val) {
            break;
        }

        pp = &(*pp)->next;
    }

    new_node->next = *pp;
    *pp = new_node;
}

void remove_node(node_t** p_head, int val) {
    node_t** pp = p_head;

    while (*pp != NULL) {
        if((*pp)->value == val) {
            node_t* tmp = *pp;
            *pp = (*pp)->next;
            free(tmp);
            break;
        }

        pp = &(*pp)->next;
    }
}