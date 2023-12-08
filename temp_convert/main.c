/*****
GDCS ASSINMENT 1
AUTOR MOHAMED EMAD
TEMPREATURE CONVERTER FROM Fahrenheit TO Celsius AND Kelvin.
******/
#include <stdio.h>

int main()
{
int temp_f;
float temp_c,temp_k;

printf("Enter tempreature in fahrenheit : ");
scanf("%d",&temp_f);

temp_c=(temp_f-32)*5/9;
printf("tempreature in Celsius = %.2f c \n",temp_c);

temp_k=temp_c + 273.15;
printf("tempreature in Kelvin = %.2f k \n",temp_k);



    return 0;
}
