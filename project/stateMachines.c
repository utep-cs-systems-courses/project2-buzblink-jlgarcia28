#include <msp430.h>
#include "stateMachines.h"
#include "led.h"

char s_green(){
  char changed = 0;
 
  //state = 1;
  
    changed = 1;
    red_on = 1;
  
  return changed;
}

char s_red(){
  char changed = 0;
  
  //state = 0;

    changed = 1;
    green_on  = 1;
    red_on = 1;  

  return changed;
}

void state_advance()		/* alternate between toggling red & green */
{
  char changed = 0;  
  /*
  static enum {R=0, G=1} color = G;
  switch (color) {
  case R: changed = toggle_red(); color = G; break;
  case G: changed = toggle_green(); color = R; break;
  }*/
  

  changed = s_red();
  //changed = 1;
  led_changed = changed;
  led_update();
}
