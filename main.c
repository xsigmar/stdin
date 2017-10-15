#include <stdio.h>

int a;
/*int argc, char const *argv[]*/
int main(void) {

  printf ("This is a stdin test:\n");
  a = stdin();
  printf("%d\n", a);
  return 0;
}
