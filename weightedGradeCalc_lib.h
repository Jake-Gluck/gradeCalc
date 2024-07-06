// inclusion guards
#ifndef WEIGHTEDGRADECALC_LIB_H
#define WEIGHTEDGRADECALC_LIB_H

//headers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//constants

//define the struct
typedef struct
{
    char name[25];
    int weight;
    int pointsEarned;
    int possiblePoints;
    float quotient;
    float totalPoints;
    
}
part;

void display(part *component, int size);

#endif