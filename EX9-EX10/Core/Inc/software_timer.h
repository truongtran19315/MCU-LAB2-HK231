/*
 * software_timer.h
 *
 *  Created on: Oct 29, 2023
 *      Author: truon
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TIMER_CYCLE;

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
