#include <cstdio>
#include <display.h>
#include <memory>
#include "cstddef"
#include <stdio.h>


void drawBottomBar(void)
{
  for(uint16_t x=0;x<=FRAME_BUFFER_WIDTH;x++)
  {
    for(uint16_t y=FRAME_BUFFER_HEIGHT-10;y<=FRAME_BUFFER_HEIGHT;y++){
      draw_pixel(x,y,RGB(80,80,80,255));
    }
  }
}

uint8_t startUser(...)
{
  uint8_t framesRun=0;
  
  while(true)
  {
    if (framesRun==255){framesRun=0;}
    fill_frame_buffer(RGB(25,1,40,255));
    drawBottomBar();
    printf("if you are seeing this you are in user space\nand it has ran for %d",frameRun);
    framesRun++;
    
  }
  return 0;
}
