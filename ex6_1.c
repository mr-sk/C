#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

void increment(int* p) {
  printf("before incrment: %p, value: %d\n", p, *p);
  ++*p;
  printf("after incrment: %p, value: %d\n", p, *p);  
}

int main()
{
  int a = 5, b = 12;
  printf("a: %d, b: %d\n", a, b);
  increment(&a);
  printf("a: %d, b: %d\n", a, b);
  increment(&a);  
  printf("a: %d, b: %d\n", a, b);
  increment(&b);
  printf("a: %d, b: %d\n", a, b);
}
