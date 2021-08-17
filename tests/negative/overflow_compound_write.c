#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct CompoundType
{
  char buf[64];
  int x;
};

int main()
{
  struct CompoundType *c = malloc(sizeof(struct CompoundType));
  c->x = 4;
  memcpy(c->buf, "abcdef", 6);
  printf("%d %s\n", c->x, c->buf);
  c->buf[sizeof(struct CompoundType)] = 1;
  printf("%d %s\n", c->x, c->buf);
  free(c);


  return 0;
}
