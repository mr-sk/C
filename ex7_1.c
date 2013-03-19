#include <stdio.h>

/*

q: 0x7fff5b3c5bf4
end: 0x7fff5b3c5c08
*q: 0, q: 0x7fff5b3c5bf4    array[0]
*q: 1, q: 0x7fff5b3c5bf8    array[1]
*q: 2, q: 0x7fff5b3c5bfc    array[2]
*q: 3, q: 0x7fff5b3c5c00    array[3]
*q: 4, q: 0x7fff5b3c5c04    array[4]

*/

int main() {
  int array[5] = {0,1,2,3,4};

  int* q = array;
  int* end = array + 4; //total number of elements

  printf("q: %p\n", q);
  printf("end: %p\n", end);

  while (end >= array) { // changed from != end (end + 5), to <= end (end + 4)
    printf("*end: %d, end: %p\n", *end, end);
    --end; 

  }
}
