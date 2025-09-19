#include <glib.h>
#include <stdio.h>

int main() {

  GList *list = NULL;
  list = g_list_append(list, "Hello GLib!");
  printf("Printing GLib list:\n");
  for (GList *l = list; l != NULL; l = l->next) {
    printf("%s ", (char *)l->data);
  }
  printf("\n");
  return 0;
}