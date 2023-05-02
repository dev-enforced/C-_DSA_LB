## Notes:
- Switch case is used for implementing conditionals. Alternative to `if()...else if()`
- It takes an expression which returns an integer/character as its argument.
- It doesn't take float/string based arguments

- After writing actions/steps to be executed for every case, we add a `break` keyword at the end of each case to avoid executing the steps for other cases following that specific one. It is optional to use `break` but still recommended to use it as it avoids unnecessary execution of other cases

- Switch and if()...else if() ladder are inter convertible. 

- Suppose a situation occurs in which an infinite loop is running and within that loop switch case is being executed. So how one can come out of the whole program after the switch related statements has its steps executed in one of the cases. If we use `break` then it can break out of the while loop or the specific case in the switch flow. But how to avoid using break in the loop and can execute the case in the switch statement as well without the loop running infinitely. So for this one can use [`exit`](https://www.digitalocean.com/community/tutorials/exit-function-c-plus-plus) that enables us to come out a C++ program execution right at the point where the command is used which means everything before the command will be executed and after that won't be as the execution has stopped. Can refer to the [file](./4_switch_infinite_loop.cpp) to see how it works. 

- This `exit` function takes in an argument:
    - 0 stands for successful termination
    - Anything apart from 0 means something wrong has happened

- Use of `continue` in case of `switch` is not valid. But if you have a for loop and within that a switch is used for the iterator then we can make use of continue. Here is an explaination of [why](https://www.quora.com/Why-can-we-not-use-continue-statement-in-a-switch-case) and a live demo with commented code in it [file](./5_why_continue_not_with_switch.cpp)

- [Continue with switch in loops](https://stackoverflow.com/questions/2146763/using-continue-in-a-switch-statement) 