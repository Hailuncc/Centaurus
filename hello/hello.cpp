#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main () {
  char hostname[20];
  gethostname(hostname, 20);
  puts(hostname);

  return 0;
}
