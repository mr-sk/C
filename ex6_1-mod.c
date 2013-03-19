#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

// value of argument only gets incremented local to the function
//       but doesn't change the actual value in main. This is
// a: 0x7fff54189bf4, b: 0x7fff54189bf0
// a: 5, b: 12
//  before incrment: 0x7fff54189bbc, value: 5
//
// Copies are made and the changes are happening to the copy. 

void increment(int p) {
  printf("before incrment: %p, value: %d\n", &p, p);
  ++p;
  printf("after incrment: %p, value: %d\n", &p,p);  
}

int main()
{
  int a = 5, b = 12;
  printf("a: %p, b: %p\n", &a, &b);

  printf("a: %d, b: %d\n", a, b);
  increment(a);
  printf("a: %d, b: %d\n", a, b);
  increment(a);  
  printf("a: %d, b: %d\n", a, b);
  increment(b);
  printf("a: %d, b: %d\n", a, b);
}
