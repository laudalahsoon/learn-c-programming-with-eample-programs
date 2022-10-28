/************************************************
*     
      website_opener : a program to open a website using code

      USAGE : just provide the correct url of the website 

     Example: Enter website url : www.google.com

      
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

char prefix[] = "explorer https://" ;

char website[100];
printf("Enter wesite url :  ");
scanf("%s" , &website);

strcat(prefix,website);

	system(prefix);

}
