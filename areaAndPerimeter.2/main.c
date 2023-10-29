//
//  main.c
//  areaAndPerimeter.2
//
//  Created by Akif Duran on
//
//this is the second version of the area and perimeter. this is for the circle.

#include <stdio.h>


int main (void){
    
    //defining the radius, area and perimeter for the circle.
    
    float radius1 = 0.0, perimeter1;
    float area1;
    
    printf("Please enter the radius value\n");
    scanf("%f", &radius1);
    
    
    area1 = 3.14 * radius1 * radius1 ;
    perimeter1 = 2*radius1*3.14;
    
  
    
    
    printf("The perimeter of this circle is : %f \n", perimeter1);
    printf("The area of this circle is : %f \n", area1);
    
    
    
    
    return 0 ;
}
