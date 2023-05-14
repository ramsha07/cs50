## Introduction to C 

### Topics


1. Vs code: 
The compiler, can be divided into a number of regions; there is a file explorer on the left side to find files. Further, there is a region in the middle called a text editor where you can edit your program. Finally, there is a command line interface, known as a CLI, command line, or terminal window where we can send commands to the computer in the cloud.

2. Code writing: 
Code can be evaluated upon three axes. First, correctness refers to does the code run as intended Second, design refers to how well is the code designed? Finally, style refers to how aesthetically pleasing and consistent is the code?

3. Functions:
The statement at the start of the code #include <stdio.h> is a very special command that tells the compile that you want to use the capabilities of library called stdio.h. This allows you, among many other things, to utilize the printf function
Within the printf function it isvery important to note that without certain smybols like the the round brackets after the printf function containg the double quotes at the start and end of the and within thore double quotes we write what we want to print eg; Hello, world followed by a \n to get the next line and ending with the semicolon
Execute make hello and then Typing ./hello in the terminal window to run the program.

4. Variables
#include <cs50.h> should be added to the top of your code, this deals with taking thw input from the user. For taking a string from the user, get_string function is used. Then, the variable answer is passed to the printf function. %s tells the printf function to prepare itself to receive a string follewed by the name of that variable.
i.e answer; is a special holding place we call a variable. answer is of type string and can hold any string within it. There are many data types, such as int, bool, char, long, float and many others.

4. Dry run:
A dry run (or practice run) is a software testing process used to make sure that a system works correctly and will not result in severe failure.At the most basic level, a dry run test involves a programmer reading the code to make sure it works without actually running.I learned the dry run by executing my loop code within the dry run  to make sure that the loop is working fine.

5. Truth table:
Mathematics normally uses a two-valued logic: every statement is either true or false, by using operations like: Conjunction (AND), disjunction (OR), negation (NOT), 

6. Conditionals
    if/ else/ else if
    if x is greater than y, if true? the condition if will run or if false i will do something else if that condition is not met.
    ```javascript
    {
 int x =get_int("What is x? ");
 int y = get_int("What is y?");

if (x < y)
{
   printf("x is less than y\n");
   }

   else if (x > y)
   {
     printf("x is greater than y\n");
   }
    else
   {
     printf("x is equal to y\n");
   }
Despite of using greater than or lesser than sign we can also use  == ensure that something is equal to something else, where a single equal sign would have a very different function in C. Also the ||  means or, && means and, != means not equal to.

7. Loops:
```javascript
    -While loop:
     The counter i is started at 3. Each time the loop runs, it will reduce the counter by 1. Once the counter is less than zero, it will stop the loop.
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }
    -Forloop:
    the for loop includes three arguments. The first argument int i = 0 starts our counter at zero. The second argument i < 3 is the condition that is being checked. Finally, the argument i++ tells the loop to increment by one each time the loop runs.
      for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
    nested loop:
    includes the while loop with another while loop inside
```

8. Linux and the Command Line
cd, for changing our current directory (folder)
cp, for copying files and directories
ls, for listing files in a directory
mkdir, for making a directory
mv, for moving (renaming) files and directories
rm, for removing (deleting) files
rmdir, for removing (deleting) directories

9. Comments
Comments are fundamental parts of a computer program, where you leave explanatory remarks to yourself and others that may be collaborating with you regarding your code.Comments involve placing // into your code, followed by a comment. 

10. Abstraction
11. Operators and Types

12. git:
    -gitignore
    -Pull request
