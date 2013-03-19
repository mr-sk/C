// 
//

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

struct mixed {
  uint32_t a;    //  4b [0,1,2,3]
                 //  p  [4,5,6,7]
  uint64_t b;    //  8b [8,9,10,11,12,13,14,15]
  uint32_t c;    //  4b [16,17,18,19]
};               //  p  [20,21,22,23] 

// largest alignment requirement is uint64 @ 8 bytes
// so the final allocated size must be a multiple of 8.
// Our struct end as 20 bytes, but that's not a multiple
// of 8, 24 is, so an additional 4 bytes of padding is
// required on the end.

int main()
{
  printf("sizeof(struc mixed): %" PRIuPTR "\n", sizeof(struct mixed));
  printf("offset of a: %" PRIuPTR "\n", offsetof(struct mixed, a));
  printf("offset of b: %" PRIuPTR "\n", offsetof(struct mixed, b));
  printf("offset of c: %" PRIuPTR "\n", offsetof(struct mixed, c));

  return 0;
}

// 20 21 22 23 24 25 26
// 1  2  4  8  16 32 
