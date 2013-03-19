// 
//

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

struct mixed {
  uint32_t a;    //  4b [0,1,2,3]               0
  uint32_t c;    //  4b [4,5,6,7,]              4
  uint64_t b;    //  8b [8,9,10,11,12,13,14,15] 8
};               //  size, 16

// largest alignment requirement is uint64 @ 8 bytes
// so the final allocated size must be a multiple of 8.
// Our struct end as 16 bytes, which is a multiple of 8
// so no additional pading is necessary. 
//
// This struct is 8 bytes smaller than the previous one,
// but holds the exact same data.

int main()
{
  printf("sizeof(struc mixed): %" PRIuPTR "\n", sizeof(struct mixed));
  printf("offset of a: %" PRIuPTR "\n", offsetof(struct mixed, a));
  printf("offset of c: %" PRIuPTR "\n", offsetof(struct mixed, c));
  printf("offset of b: %" PRIuPTR "\n", offsetof(struct mixed, b));

  return 0;
}
