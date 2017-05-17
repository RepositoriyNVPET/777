#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
	
	
{
    double d1, d2, d3, dsum;
    printf  ("\n ¬вед≥ть три д≥йсних числа, розд≥лених проб≥лами \n");
    scanf  (" %f%f%f ",  &d1, &d2, &d3);
    dsum = d1+ d2 + d3;
    printf  (" %f + %f + %f = %f ", d1, d2, d3, dsum);
 	return 0;
}
