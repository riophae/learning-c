#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
  int val;
  struct node * next;
} node_t;

node_t * new_node(int);
int is_tail_node(node_t *);
node_t * get_tail(node_t *);
void push(node_t **, int);
int pop(node_t **);
int shift(node_t **);
void unshift(node_t **, int);
void print_linked_list(node_t *);

int
main(void) {
  // -1 0 1 2
  node_t * head = new_node(2);
  assert(head->val == 2);

  assert(shift(&head) == 2);
  assert(head == NULL);

  unshift(&head, 2);
  assert(get_tail(head)->val == 2);

  push(&head, 1);
  assert(head->val == 1);

  push(&head, 0);
  assert(head->val == 0);

  push(&head, -1);
  assert(head->val == -1);

  pop(&head);
  assert(head->val == 0);

  assert(get_tail(head)->val == 2);

  assert(shift(&head) == 2);
  assert(get_tail(head)->val == 1);

  assert(shift(&head) == 1);
  assert(get_tail(head)->val == 0);

  assert(shift(&head) == 0);
  assert(head == NULL);

  printf("Everything works fine.\n");

  return 0;
}

node_t *
new_node(int val) {
  node_t * node = malloc(sizeof(node_t));
  node->val = val;
  node->next = NULL;
  return node;
}

int
is_tail_node(node_t * node) {
  return node->next == NULL;
}

void
push(node_t ** head, int val) {
  node_t * new_head_node = new_node(val);
  new_head_node->next = *head;
  *head = new_head_node;
}

int
pop(node_t ** head) {
  int retval = -1;

  if (*head != NULL) {
    retval = (*head)->val;
    node_t * new_head = (*head)->next;
    free(*head);
    *head = new_head;
  }

  return retval;
}

node_t *
get_tail(node_t * head) {
  if (is_tail_node(head)) {
    return head;
  }

  node_t * current = head;
  while (!(is_tail_node(current))) {
    current = current->next;
  }

  return current;
}

int
shift(node_t ** head) {
  int retval = -1;

  if (is_tail_node(*head)) {
    retval = pop(head);
  } else {
    node_t * current = *head;
    while (!is_tail_node(current->next)) {
      current = current->next;
    }
    node_t * tail = current->next;
    retval = tail->val;
    free(tail);
    current->next = NULL;
  }

  return retval;
}

void
unshift(node_t ** head, int val) {
  if (*head == NULL) {
    *head = new_node(val);
  } else {
    node_t * current = *head;
    while (!is_tail_node(current)) {
      current = current->next;
    }
    current->next = new_node(val);
  }
}

int
remove_by_index(node_t ** head, int idx) {
  int retval = -1;

  if (*head != NULL) {
    if (idx == 0) {
      retval = pop(head);
    } else {
      int i = 0;
      node_t * node = *head;

      while (!is_tail_node(node) && i < idx - 1) {
        node = node->next;
        i += 1;
      }

      if (i == idx - 1) {
        node_t * target = node->next;
        node_t * next = NULL;
        if (target != NULL) {
          next = target->next;
          retval = target->val;
        }
        free(target);
        node->next = next;
      }
    }
  }

  return retval;
}

void
print_linked_list(node_t * head) {
  node_t * current = head;
  while (current != NULL) {
    printf("%d ", current->val);
    current = current->next;
  }
  printf("\n");
}
