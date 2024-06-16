#include <cstdio>
#include <display.h>
#include <memory>
#include "cstddef"


uint8_t startUser()
{
  uint64_t framesRun=0;
  
  while(true)
  {
    setbackground(25,1,40);
    printf("if you are seeing this you are in user space\nand it has ran for %d",frameRun);
    
  }
  return 0;
}
