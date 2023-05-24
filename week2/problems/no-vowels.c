// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

/*
Implement your program in a file called no-vowels.c in a directory called no-vowels.
Your program must accept a single command-line argument, which will be the word that you want to convert.
If your program is executed without any command-line arguments or with more than one command-line argument,
 your program should print an error message of your choice (with printf) and
  return from main a value of 1 (which tends to signify an error) immediately.
Your program must contain a function called replace which takes a string input and returns a string output.
This function will change the following vowels to numbers: a becomes 6, e becomes 3, i becomes 1, o becomes 0 
and u does not change.
The input parameter for the replace function will be argv[1] and the return value is the converted word.
The main function will then print the converted word, followed by \n.
You may want to try using the switch statement in your replace function.
*/

#include <cs50.h>
#include <stdio.h>
string replace(string argv[1])

int main(int argc, string argv[])
{
if (argc ==1 ||argc>2)
{
printf("This program takes exactly one argument \n");
}
return 1;
}

string replace(string word)
{

    for (int i=0; i<n)
    


}
