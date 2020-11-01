
#include <msp430.h>
#include "led.h"
#include "switches.h"
#include "main.h"

void led_init()
{
  P1DIR |= LEDS;		// bits attached to leds are output
  switch_state_changed = 1;
  led_update();
}

void led_update(){
  
  if (switch_state_changed) {
    char ledFlags = 0; /* by default, no LEDs on */
    //Checks if game has started
    if(startGame == 1){
      //Clicks counter
      if(switch_state_down == 1){
	player2++;
	
    }
      if(switch_state_down2 == 1){
	player1++;
	
    }
      //Player winner is shown
      if(player2 > player1){

	ledFlags |= LED_GREEN;
	ledFlags |= 0;
	P1OUT &= (0xff - LEDS) | ledFlags; // clear bits for off leds
	P1OUT |= ledFlags;         // set bits for on leds
      }
      if(player1 > player2){

	ledFlags |= 0;
	ledFlags |= LED_RED;
	P1OUT &= (0xff - LEDS) | ledFlags; // clear bits for off leds
	P1OUT |= ledFlags;         // set bits for on leds
      }

    }
    

    
  }
  switch_state_changed = 0;
}

