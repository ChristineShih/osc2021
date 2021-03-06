#ifndef EXCEPTION_H
#define EXCEPTION_H

// https://www.raspberrypi.org/documentation/hardware/raspberrypi/bcm2836/QA7_rev3.4.pdf

// cpu 0 irq interrupt source
#define CORE0_IRQ_SOURCE		((volatile unsigned int *)(0x40000060))

void show_current_el();
void exception_entry();
void no_exception_handle();
void lowerEL_irq_interrupt();
void currentEL_irq_interrupt();

void enable_interrupt();
void disable_interrupt();

#endif