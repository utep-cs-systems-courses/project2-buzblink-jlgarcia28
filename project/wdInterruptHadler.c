#include <msp430.h>
#include "buzzer.h"
#include "main.h"

void
__interrupt_vec(WDT_VECTOR) WDT(){
  static char blink_count=0;
  static int buzzer_period = 2000;
  static int counter = 0;
  //Sound counter starter
  if(++blink_count == 250 && counter < 7){

    blink_count = 0;
    buzzer_set_period(buzzer_period);
    counter++;
    if(buzzer_period == 2000 && counter != 5){

      buzzer_period = 0;

    }
    else{

      buzzer_period = 2000;


    }

    //After 6 Secs game starts
  }else if(counter >= 7){

    startGame = 1;

  }

  if(blink_count == 250){
    blink_count = 0;
    counter++;
  }
  //After 30 secs game ends
  if(counter > 36){
    endGame = 1;
    buzzer_set_period(buzzer_period);
  }
}

