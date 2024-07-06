//header
#include"weightedGradeCalc_lib.h"

//define main
int main()
{
	//declare variables
	int size;
	part* component;

    //print welcome message
        //function: printf
    printf("\nWelcome to the Weighted Grade Calculator\n");
    printf("****************************************\n\n");

	//prompt user to enter the number of components that the weighted grade
	//is comprised of
	    //function: printf
    printf("%-35s\n", "Enter the number of components");
    printf("%-35s\n", "(ex: attendance, homework, quizzes,");
    printf("%-35s\n", "projects, finals, etc.) ");
    printf("%-35s\n", "that comprise the weighted grade:"); 

	//read user input and save to size variable
	    //function: scanf
	scanf(" %d", &size);

	//dynamically allocate memory for size number of part structures
    component = (part *)malloc(size * sizeof(part));

    //check if memory allocation failed
    if(component == NULL)
    {
    	//print messagge
    	    //function: printf
    	printf("Memory allocation failed.\n");

    	//return failure
    	return 1;
    }

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

    	printf("Points earned: ");
    	scanf("%d", &component[i].pointsEarned);

    	printf("Possible points: ");
    	scanf("%d", &component[i].possiblePoints);

    	component[i].quotient = (float)component[i].pointsEarned/component[i].possiblePoints;

    	component[i].totalPoints = (float)component[i].quotient * component[i].weight;
    }


    display(component, size);

    //free allocated memory
    free(component);




	//return success
	return 0;
}
/*

ask user to name each of the components and assign that name to each component

create a component structure that consists of description(name), total points,
points, earned, and weight





Enter the number of components(ex: attendance, homework, quizzes, projects, finals, etc.)"
		" that comprise the weighted grade:

    5

Enter the details for component 1

Name:

    Attendance

Enter the weight for attendance in % (ex: 20 or 5 or 15)

    20

Enter the number of grade entries for attendance

    10

Enter points earned for attendance entry 1

    
Enter total points possible for attendance entry 1




*/
