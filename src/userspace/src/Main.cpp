#include <cstdio>
#include <display.h>
#include <memory>
#include "cstddef"
#include <stdio.h>

uint8_t startUser()
{
  uint8_t framesRun=0;
  
  while(true)
  {
    if (framesRun==255){framesRun=0;}
    setbackground(25,1,40);
    printf("if you are seeing this you are in user space\nand it has ran for %d",frameRun);
    framesRun++;
  }
  return 0;
}
