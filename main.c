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
        printf("%-35s\n", "projects, finals, etc.) that comprise the ");
        printf("%-35s\n", "weighted grade (must be between 1 and 10):"); 

    //validate user input for size
    do
    {   
        //read user input and save to size variable
            //function: scanf
        scanf(" %d", &size);

        //if input is out of range
        if(size < 1 || size > 10)
            //print message
                 //function: printf
            printf("\nError, input is not between 1 and 10. Try again.\n");
    }
    while(size < 1 || size > 10);

    //dynamically allocate memory for an array of part structs that 
    //is size elements long
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

    //prompt user to enter component details
        //function: prompt
    prompt(component, size);

    //display the results
        //function: display
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
