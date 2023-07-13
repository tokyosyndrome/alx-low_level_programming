#include <stdio.h>
#include <unistd.h>
int main()
  {
  char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  write(1,&x,59); // Feel free to check the return value.
  return 0;
  }
