/*
The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the following table:
*/

# include <stdio.h>
# include <math.h>
int main( )
{
float wt, ht, bmi ;
printf ( "Enter weight in kg and height in meters: " ) ;
scanf ( "%f %f", &wt, &ht ) ;
bmi = wt / ( ht * ht ) ;
printf ( "Body Mass Index = %f\n", bmi ) ;
if ( bmi < 15 )
printf ( "BMI Category: Starvation\n" ) ;
else if ( bmi < 17.5 )
printf ( "BMI Category: Anorexic\n" ) ;
else if ( bmi < 18.5 )
printf ( "BMI Category: Underweight\n" ) ;
else if ( bmi < 25 )
printf ( "BMI Category: Ideal\n" ) ;
else if ( bmi < 30 )
printf ( "BMI Category: Overweight\n" ) ;
else if ( bmi < 40 )
printf ( "BMI Category: Obese\n" ) ;
else
printf ( "BMI Category: Morbidly Obese\n" ) ;
return 0 ;
}