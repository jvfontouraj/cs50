//To run this code, go to CS50 sandbox (https://ide.cs50.io/).

//In Lecture 1, David talk about the "agree.c" file and the 
//possibility of making a loop that prompt to the user, if 
//he don't cooperate, a new request. 
//Here is an exemple of a program.


#include <cs50.h>  //cs50 library
#include <stdio.h>

//variables declaration
char c;
int x;

int main(void){

    //In this "do while loop" the porgram asks for an input 
    //that can be the charcters "y" or "n", upper or lowercase.
    //To this two inputs, "x" is giveen the "1" value,
    //otherwise, if the input it's enything else, a number,
    //a string or another charcter, the value will be "0".
    //At the end of the loop, the prog check the value of
    //the variable "x", that will keep running the loop
    //until get a valid input, the integer "1".
    
    do{
        c = get_char("do you agree?\n");

        if (c == 'Y' || c == 'y'){
          printf("agreed.\n");
          x = 1; //Indicates a valid input
	      }
        else if (c == 'N' || c == 'n'){
          printf("not agreed.\n");
          x = 1; //Indicates a valid input
        }
        else{
          x = 0; //Indicates an invalid input
        } 
    }
    while (x == 0); //I tried to put an char variable but 
                    //it doesn't work, so I created an int
                    //variable "x"  to make possible the 
                    //condition in the "do while loop".
}
