#include <cstdint>
#include "cvalueSwitch"

extern "C" {


char* intToStr(int32_t intry, char *out) {
  int i = 0;
  bool isNegative = false;

  if (intry == 0) {
    out[i++] = '0';
    out[i] = '\0';
    return out;
  }

  if (intry < 0) {
    isNegative = true;
    intry = -intry;
  }

  while (intry != 0) {
    int rem = intry % 10;
    out[i++] = rem + '0';
    intry = intry / 10;
  }

  if (isNegative) {
    out[i++] = '-';
  }

  out[i] = '\0';

  int start = 0;
  int end = i - 1;
  while (start < end) {
    char temp = out[start];
    out[start] = out[end];
    out[end] = temp;
    start++;
    end--;
  }

  return out;
}


}
