## NOTES for lecture 3:

1. `cin` is used to take input from the user and store it into the respective variable.
2. Will be executed once the input from the user is received and the program flow gets paused there for a while

3. Just in case with `Code Runner` the code gets executed but you are unable to pass any inputs, can watch this [video](https://www.youtube.com/watch?v=Si8rN5J249M)

4. Normally while taking input of multiple variables through `cin` we try to give it by passing `spaces` or `tabs` or by providing them on new lines (by pressing `ENTER`) and the values would get alloted to the variables. So one thing gets clear that `cin` does not read these spaces or tabs or enter.

5. Now to use cin to recognize these values of space, tab and enter we use a method within it known as `cin.get`. So what this method does it extracts the input given in the form of character and stores it in the respective variable;

6. For example if we write this program:

```cpp
#include<iostream>
using namespace std;
int main(){
    int c,d;
    c=cin.get();
    cout<<c<<endl;
}
```
So while running this block of code whatever value we give such as space/tab/enter, it would be taken as a character and stored within the variable.

So for integer based variable, if a character is stored then it would be mapped to its ascii value. For example `TAB(or \t)`->`9`, ` (normal space)`->`32`, `1(as a character)`->`49`, `newline (or \n)`->`10`

7. Even while giving multiple spaces or tabs the cin.get would read a single one and return that character to the variable itself.

8. Another thing one would notice with `cin.get` as well as while running the file `Lecture-Notes\Lecture-3\cin_get.cpp` is that why 2 `cin.get()` are mentioned. This [link](https://stackoverflow.com/a/3780342) would answer it

9. So while solving pattern based questions remember the range of rows and columns you would be considering while printing based on the lower limit:
    - If `i=0` then upper limit for `i` would be `N-1`
    - If `i=1` then upper limit for `i` would be `N`