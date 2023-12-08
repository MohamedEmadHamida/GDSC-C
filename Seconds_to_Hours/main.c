/***** GDCS ASSIGNMENT 1 *****/
/* AUTHOR: MOHAMED EMAD */
/* 2 - Seconds to Hours, Minutes, and Seconds */

#include <stdio.h>

int main() {
  int seconds, hours, minutes, tmp_seconds;

  printf("Enter number of seconds : ");
  scanf("%d", &seconds);

  hours = seconds / 3600;
  minutes = (seconds % 3600) / 60;
  tmp_seconds = seconds % 60;

  printf("hours =%d \n", hours);
  printf("minutes =%d \n", minutes);
  printf("seconds =%d \n", tmp_seconds);

  return 0;
}