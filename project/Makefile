# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: blink.elf 

#additional rules for files
blink.elf: ${COMMON_OBJECTS} wdInterruptHadler.o p1_interrupt_handler.o led.o stateMachines.o switches.o buzzer.o main.o ../demos/lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^


led.o: led.c led.h

wdInterruptHadler.o: stateMachines.h

statesMachines.o: led.h stateMachines.h

buzzer.c: buzzer.h

load: blink.elf
	msp430loader.sh blink.elf

clean:
	rm -f *.o *.elf

