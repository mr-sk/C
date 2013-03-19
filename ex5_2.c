#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

const int INT   = 1;
const int FLOAT = 2;

union myUnion {
  float a;
  int b;
}; union myUnion u;


struct myStruct {
  union myUnion s_u;
  int tag;
}; struct myStruct s;


void setStruct(int type)
{
  if (type == INT) {
    s.s_u.b = 99;
    s.tag   = INT;
  } else if (type == FLOAT) {
    s.s_u.a = 1.1;
    s.tag   = FLOAT;
  }
  else {
    printf("Unknown type: %i\n", type);
  }
}

void readStruct(myStruct) {
  if (s.tag == INT) {
    printf("union int: %i\n", s.s_u.b);
  }
  else if (s.tag == FLOAT) {
    printf("union float: %f\n", s.s_u.a);
  }
  else {
    printf("no tag set!\n");
  }
}

int main()
{
  readStruct(s);
  setStruct(FLOAT);
  readStruct(s);
  setStruct(INT);
  readStruct(s);
  setStruct(-1);
  readStruct(s);
}
