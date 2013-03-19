#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

int main()
{
  printf("alignment of uint32_t: %" PRIuPTR "\n", __alignof__(uint32_t));
  printf("alignment of uint64_t: %" PRIuPTR "\n", __alignof__(uint64_t));
  printf("alignment of long_t: %" PRIuPTR "\n", __alignof__(long));
  printf("alignment of size_t: %" PRIuPTR "\n", __alignof__(size_t));
  printf("alignment of double: %" PRIuPTR "\n", __alignof__(double));
  printf("alignment of char: %" PRIuPTR "\n", __alignof__(char));
  printf("alignment of long long: %" PRIuPTR "\n", __alignof__(long long));
  printf("alignment of short: %" PRIuPTR "\n", __alignof__(short));
}
