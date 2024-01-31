/*****
 *  Functions
    GDCS ASSINMENT function
    MOHAMED EMAD
    average_of_two_numbers
******/


#include <stdio.h>
#include <stdlib.h>




float average(int number_1,int number_2){

float av = (number_1+number_2)/2.0;
return av;
}

int main()
{

    float a =average(5,8);

    printf("%0.2f",a);
    return 0;
}









