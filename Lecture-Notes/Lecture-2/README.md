## Links shared while being in the handwritten notes:
1. [More about scope of a function](https://stackoverflow.com/questions/11345631/what-does-scope-of-functions-mean#:~:text=Most%20objects%20and%20functions%20have,the%20function%20name%20is%20declared.)

2. [Namespaces](https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std?lq=1)

3. [Getting to know different data types in C# (similar to C++)](https://www.geeksforgeeks.org/c-sharp-data-types/)

4. [ASCII table](https://ascii.cl/) : ASCII codes range from 0 to 127.
Uppercase letters (A-Z): 65-90
Lowercase letters (a-z): 97-122


### Queries to ask about:
1. While alloting integers in variables declared through `char`, for example `char x = 67` (so this will one be stored as `C`). So for the range from 128-255 if we try to allot an integer in the char declared variable we will get this �

But as soon as we start alloting values more than equal to 256 warnings start coming up as expected and the last 1 byte of the binary representations of those integers get stored in the characters.

Query: ASCII codes range from 0-127 right. So warnings must start coming up from 128 allotment right. So why does it start showing from 256 onwards
But yeah 128-255 lies within the 1 byte ~ 8 bits range so for those values it might show � . Still clarify it


<!-- TODO: See about explicit typecasting that wasn't explained in the video -->
<!-- TODO: Also see about unsigned and signed implicit conversion -->