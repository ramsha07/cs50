## Week 2- Arrays
#include <cs50.h>

### 1- Compiling:
We know that compiler is one that convert source code into machine code that can be understood by a computer.
Last week we type in the command line interface `make hello`, it runs a command that executes clang to create an output file that you can run as a user. VS Code has been pre-programmed such that make will run numerous command line arguments along with clang for your convenience as a user.
Now, `clang -o hello hello.c -lcs50`. This will enable the compiler to access the cs50.h library.We are using this command to understand more deeply the process and concept of compiling code, using `make` in CS50 is perfectly fine and the expectation!

### 2- Steps of compiling:
Compiling involves major steps, including the following:
* **First, `preprocessing` is where the header files in your code, designated by a # (such as #include \<cs50.h\>) are effectively copied and pasted into your file. During this step, the code from cs50.h is copied into your program. Similarly, just as your code contains #include \<stdio.h\>, code contained within stdio.h somewhere on your computer is copied to your program. 

* **Second, `compiling` is where your program is converted into assembly code

* **Third, assembling involves the compiler converting your assembly code into machine code, i.e zeros and ones.

* **Finally, during the linking step, code from your included libraries are converted also into machine code and combined with your code. The final executable file is then outputted.

### 3- Debugging:
Everyone will make mistakes while coding. consider an example from the last week of printing the `3` bricks each on a new line 
````c
 for (int i = 0; i <= 3; i++)
    {
        printf("#\n");
    }
````c
In the above code mistakenly i have typed the operator `<=` instead of just `<`. Running this code, four bricks appear instead of the intended three.
printf is a very useful way of debugging your code. You could modify your code as follows:
````c
for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
````
Running this code, you will see numerous statements, including i is 0, i is 1, i is 2, and i is 3. Seeing this, you might realize that Further code needs to be corrected to print only 3 bricks

### 4-Debugger:
To utilize this debugger, first set a breakpoint by clicking to the left of a line of your code, just to the left of the line number. When you click there, you will see a red dot appearing. Imagine this as a stop sign, asking the compiler to pause such that you can consider what’s happening in this part of your code, by turning the dull red stop button to bright red once clicked

Second, run debug50 ./buggy0. You will notice that after the debugger comes to life that a line of your code will illuminate in a gold-like color. The code has paused at this line of code. Notice in the top left corner how all local variables are being displayed, including i, which has a current value of 0. At the top of your window, you can click the step over button and it will keep moving through your code. Notice how the value of i increases.
This tool will not show you where your bug is, it will help you slow down and see how your code is running step by step

Rubber duck debugging:

 When you are having challenges with your code, consider how speaking out loud to a rubber duck about the code problem. 