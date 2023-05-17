## Week 2- Arrays
#include <cs50.h>

1. **Compiling**:
We know that compiler is one that convert source code into machine code that can be understood by a computer.
Last week we type in the command line interface `make hello`, it runs a command that executes clang to create an output file that you can run as a user. VS Code has been pre-programmed such that make will run numerous command line arguments along with clang for your convenience as a user.
Now, `clang -o hello hello.c -lcs50`. This will enable the compiler to access the cs50.h library.We are using this command to understand more deeply the process and concept of compiling code, using `make` in CS50 is perfectly fine and the expectation!

2. **Steps of compiling**:
Compiling involves major steps, including the following:
* **First**, `preprocessing` is where the header files in your code, designated by a # (such as #include \<cs50.h\>) are effectively copied and pasted into your file. During this step, the code from cs50.h is copied into your program. Similarly, just as your code contains #include \<stdio.h\>, code contained within stdio.h somewhere on your computer is copied to your program. 

* **Second**, `compiling` is where your program is converted into assembly code

* **Third**, assembling involves the compiler converting your assembly code into machine code, i.e zeros and ones.

* **Finally**, during the linking step, code from your included libraries are converted also into machine code and combined with your code. The final executable file is then outputted.

3. **Debugging**:
Everyone will make mistakes while coding. consider an example from the last week of printing the `3` bricks each on a new line 
* **printf**
```c
 for (int i = 0; i <= 3; i++)
    {
        printf("#\n");
    }
```
In the above code mistakenly i have typed the operator `<=` instead of just `<`. Running this code, four bricks appear instead of the intended three.
printf is a very useful way of debugging your code. You could modify your code as follows:
```c
for (int i = 0; i <= 3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
```
Running this code, you will see numerous statements, including i is 0, i is 1, i is 2, and i is 3. Seeing this, you might realize that Further code needs to be corrected to print only 3 bricks

* **Debugger**:
To utilize this debugger, first set a breakpoint by clicking to the left of a line of your code, just to the left of the line number. When you click there, you will see a red dot appearing. Imagine this as a stop sign, asking the compiler to pause such that you can consider what’s happening in this part of your code, by turning the dull red stop button to bright red once clicked

Second, run debug50 ./buggy0. You will notice that after the debugger comes to life that a line of your code will illuminate in a gold-like color. The code has paused at this line of code. Notice in the top left corner how all local variables are being displayed, including i, which has a current value of 0. At the top of your window, you can click the step over button and it will keep moving through your code. Notice how the value of i increases.
This tool will not show you where your bug is, it will help you slow down and see how your code is running step by step

* **Rubber duck debugging**:

 When you are having challenges with your code, consider speaking out loud to a rubber duck about the code problem. 

4. **ARRAYS**:
bool 1 byte
int 4 bytes
long 8 bytes
float 4 bytes
double 8 bytes
char 1 byte
string ? bytes

 * **Basic**
```c
 // Scores
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // Print average
    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
```
 * **int scores[3] is a way of telling the compiler to provide you three back-to-back places in memory of size int to store three scores**.
 Considering our program, you can revise your code as follows:
 ```c
 // Scores
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
```
 * **Using loop, there is still an opportunity for improving our code. How we index into scores by using scores[i] where i is supplied by the for loop. Revise your code as follows:**
```c
// Get scores
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    ```

 * **We can simplify or abstract away the calculation of the average. Notice that a new function called average is declared. Further, notice that a const or constant value of N is declared. Most importantly, notice how the average function takes int array[], which means that the compiler passes an array to this function. Modify your code as follows**:   
```c
// Constant
const int N = 3;
 
// Prototype
float average(int length, int array[]);

int main(void) 
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
```
