#include <stdio.h>


int main(void) 
{
  int Motor = 2;               //number of motors
  float Weight = 6;               //weight of the package
  float maxWeight = 5.6*Motor;   //maximum weight the conveyerbelt can carry
  int onoff = 1;              //1 is on, 0 is off

printf("Maximum weight the conveyerbelt can carry is: %.2f\n", maxWeight); //display maximum weight for the user
printf("Weight of the package is: %.2f\n", Weight); //display weight of the package for the user (requires the user to put the pacage on the conveyerbelt first)

if (Weight > maxWeight) {
    printf("The package is too heavy for the conveyerbelt.\n");
    printf("The conveyerbelt cannot carry the package.\n");
    printf("The conveyerbelt is now off.\n");
    onoff = 0; //turn off the conveyerbelt
    printf("Please remove the package and try again.\n");
    return 1; // Remove the package and try again
    }
    
    else
    {
        printf("Yes, the package can be carried by the conveyerbelt.\n");
        if (Weight < maxWeight) 
          onoff = 1; //starts the conveyerbelt if the package can be carried
        printf("The conveyerbelt is now on and is carrying the package to the destination.\n");
        printf("Have a nice day\n");
        return 0; //package is being carried
    }
  }