// Author: Slava Hlushko vqh5091@psu.edu
// Collaborator:Selena Kesidis smk408@psu.edu
// Collaborator:Ved Walavalkar vtw5023@psu.edu
// Collaborator:Tyler Ciuca tmc6093@psu.edu
// Collaborator:Yijun Yao ymy5178@psu.edu
// Section: 11R
// Breakout: 7#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
  char *input_percentage = readline("Enter your CMPSC 131 grade: "); 
  double percentage =atof(input_percentage);

  if (percentage>=93.0){
    char *grade = "A";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=90.0){
    char *grade = "A-";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=87.0){
    char *grade = "B+";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=83.0){
    char *grade = "B";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=80.0){
    char *grade = "B-";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=77.0){
    char *grade = "C+";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=70.0){
    char *grade = "C";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage>=60.0){
    char *grade = "D";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  else if(percentage<60.0){
    char *grade = "F";
    printf("Your letter grade for CMPSC 131 is %s.\n", grade);
  }
  
  
  


  return 0;
}