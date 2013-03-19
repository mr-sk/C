#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

union tUnion {
  uint32_t a;
  uint8_t b[4];
}; union tUnion u;

int main()
{
  u.a = 1234567890;
  //  u.b[0] = 2;

  printf("u.a = %x\n", &u.a);
  printf("u.b[0] = %x\n", &u.b[0]);
  printf("u.b[1] = %x\n", &u.b[1]);
  printf("u.b[2] = %x\n", &u.b[2]);
  printf("u.b[3] = %x\n", &u.b[3]);

  printf("u.a = %x\n", u.a);
  printf("u.b[0] = %x\n", u.b[0]);
  printf("u.b[1] = %x\n", u.b[1]);
  printf("u.b[2] = %x\n", u.b[2]);
  printf("u.b[3] = %x\n", u.b[3]);
}


/*
u.a is 32 bytes, and begins at cda9068 and occupies the next
four address spaces. It contains the value 1234567890 (499602d2 h).

The layout out the union is:
u.a cda9068 2d  u.b[0]
    cda9069 02  u.b[1]
    cda906a 96  u.b[2]
    cda906b 49  u.b[3]

Which overwrites the contents of the b array with values from a.

u.a = cda9068
u.b[0] = cda9068
u.b[1] = cda9069
u.b[2] = cda906a
u.b[3] = cda906b
u.a = 499602d2
u.b[0] = d2
u.b[1] = 2
u.b[2] = 96
u.b[3] = 49

It also shows that the values are stored in reverse order, 
since b[3] is the start of the number and b[0] is the last
value.
*/
