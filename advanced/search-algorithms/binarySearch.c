#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct Node {
  int id;
} Node;

typedef struct List {
  Node nodes[10];
  int list_size;
} List;

List create_list() {
  List list;

  list.list_size = 0;

  return list;
}

int binary_search(List * list, Node node) {
  int start, end, middle;

  start = 0;
  end = list->list_size - 1;

  while (start <= end) {
    middle = (start + end) / 2;

    if (list->nodes[middle].id == node.id) {
      return middle;
    }
    else {
      if (list->nodes[middle].id < node.id) {
        start = middle + 1;
      }
      else {
        end = middle - 1;
      }
    }
  }

  return -1;
}



int main() {

  Node node1, node2;
  List list = create_list();
  int result;

  node1.id = 0;
  list.nodes[0] = node1;
  list.list_size++;

  node2.id = 1;

  result = binary_search(&list, node2);

  printf("%d", result);

  return 0;
}