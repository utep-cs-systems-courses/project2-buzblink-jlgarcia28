#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"

unsigned char startGame = 0;
unsigned int player1 = 0;
unsigned int player2 = 0;
unsigned int endGame = 0;

void main(void) 
{  
  configureClocks();
  enableWDTInterrupts();
  buzzer_init();
  switch_init();
  led_init();

  or_sr(0x18);  // CPU off, GIE on
} 
