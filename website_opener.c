/************************************************
*     
      website_opener : a program to open a website using code

      USAGE : just provide the correct url of the website 

*    Example: Enter website url : www.google.com
*
*     
*
*
*
*
*****************************************************/





#include <stdio.h>
#include <stdlib.h> //library for supporting browser call function
#include<string.h>

int main()
{

char prefix[] = "explorer https://" ; //every argument to 'system()' has this in common

char website[100]; //character array to hold website address
printf("Enter wesite url :  ");
scanf("%s" , &website);

strcat(prefix,website);

	system(prefix); // a function to interact with the os in stdlib header file
	
	return 0; //exit code

}
