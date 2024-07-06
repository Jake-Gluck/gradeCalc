//header
#include"weightedGradeCalc_lib.h"


void display(part *component, int size)
{
	printf("Passing the structs as pointers worked!\n");

	//access and print the structs
    printf("\n\nDetails of the components:\n");

    for(int i = 0; i < size; i++)
    {
    	printf("%s\n", component[i].name);

    	printf("%s weight: %d%%\n", 
    		component[i].name, component[i].weight);

    	printf("%s points earnred: %d\n", 
    		component[i].name, component[i].pointsEarned);

    	printf("%s possible points: %d\n", 
    		component[i].name, component[i].possiblePoints);

    	printf("%s percentage: %.2f\n", 
    		component[i].name, component[i].quotient);

    	printf("Total points earned from %s: %.2f out of %.2f\n\n", 
    		component[i].name, component[i].totalPoints, (float)component[i].weight);
    }
}