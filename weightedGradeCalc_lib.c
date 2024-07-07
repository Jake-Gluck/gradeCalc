//header
#include"weightedGradeCalc_lib.h"

void prompt(part *component, int size)
{
    //initialize variable
    char answer[10];
    int compareYes;
    int compareNo;

    //initialize the structs
    for(int i = 0; i < size; i++)
    {
        //prompt user for component name
            //function: printf
        printf("\nEnter details for component %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", component[i].name);

        printf("Weight: ");
        scanf("%d", &component[i].weight);

        //ask user if they know their total score for this component
            //function: printf
        printf("\nDo you know your cumulative score for %s?\n"
            "(total points earned and total possible points\n"
            "for all assignments combined)? \nEnter yes or no: ", component[i].name);

        do
        {
        //read user input
            //function: scanf
        scanf(" %s", answer);

        to_lower(answer);

        compareYes = strcmp(answer, "yes");
        compareNo = strcmp(answer, "no");

        //if answer is not valid
        if(compareYes != 0 && compareNo != 0)
        {
            //remprompt user
                //function: printf
            printf("\nInvalid input. Enter yes or no.\n");
        }

        }
        while(compareYes != 0 && compareNo != 0);

        printf("Points earned: ");
        scanf("%d", &component[i].pointsEarned);

        printf("Possible points: ");
        scanf("%d", &component[i].possiblePoints);

        component[i].quotient = (float)component[i].pointsEarned/component[i].possiblePoints;

        component[i].totalPoints = (float)component[i].quotient * component[i].weight;
    }

    


}

void to_lower(char *str) 
{
    //declare variable
    int i = 0;

    //while the indexed char isn't null terminator
    while (str[i] != '\0') 
    {
        //convert each character to lowercase
        str[i] = tolower((unsigned char) str[i]);
        
        //increment i
        i++;
    }
}

void display(part *component, int size)
{
	//access and print the structs
    //printf("\n\nDetails of the components:\n\n");

    for(int i = 0; i < size; i++)
    {
    	//printf("%s\n", component[i].name);

    	printf("\n%s weight: %d%%\n", 
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