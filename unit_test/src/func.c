#include "testy/func.h"

int private_ok_value = 2;

int func_ok(int a, int b) {
  return a + b == private_ok_value;
}
