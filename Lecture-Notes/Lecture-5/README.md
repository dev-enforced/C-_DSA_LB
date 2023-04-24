## Shift operators:
- `Left Shift` : Shifts the bits of a number to the left by that much positions specified on the end of the operand. In case of smaller numbers, this left shift operation is similar to multiplying the number by 2. 

But in case of larger numbers, performing a left shift operation on them might result in creating negative numbers.

It is denoted by (Number_given)`<<`(number_of_left_shifts).

- `Right shift`: Shifts the bits of a given number (in its binary format) to the right by the number of positions specified on the end of the operand

It is denoted by (Number_given)`>>`(number_of_right_shifts).

It can be considered as the quotient obtained by `division of a number by 2` and it depends on the number of right shifts to be done

5>>2 /*5/2 =2 , 2/2=1*/
21<<2 /*21*2=42, 42*2=84*/
Other things to keep in mind related to shift:
- For shift operations (left shift/right shift) on positive numbers, padding would always be with 0 (means the new digits introduced after the shifting will be 0)

- For negative numbers, the padding during the shift operations is compiler dependent

## Increment/Decrement related operators:

- In the patterns session, we used the `while` loop especially at the last line `current_row=current_row+1` this was used to continue the loop.

- So instead of writing this again we can also write in the following manners:
    - `current_row++`
    - `++current_row`
    - `current_row+=1`

- Different types of increment/decrement operators:
    - Pre Increment: `++current_row`
    - Post Increment: `current_row++`
    - Pre Decrement: `--current_row`
    - Post Decrement:
    `current_row--`

- Examples of these pre/post increment/decrement operators:

```cpp
int i=4;
int a=i++;
cout<<a<<" "<<i;
// 4 5
```

```cpp
int i=2;
int a=3;
int sum=i+(a++);
cout<<"Sum is: "<<sum<<endl;
cout<<"a is: "<<a<<endl;

//Sum is 5
// a is 4
```

Pre Increment:

```cpp
int i=11;
int a = ++i;
cout<<a;
// 12
```

```cpp
int a=2,i=3;
int sum=a+(++i);
cout<<sum<<" "<<a;
// 6 4
```

Post decrement:
```cpp
int i=4;
int a=i--;
cout<<a<<i;
//    4  3
```

Pre Decrement:

```cpp
int i=4;
int a=--i;
cout<<a<<i;
//    3  3
```

`Pre`: Means perform the increment/decrement first then use the new value accordingly
`Post`: Means use the old value first then perform the increment/decrement

## For Loop

- Works the same as a while loop.
- Syntax: 
```cpp
for(iterator initialization;condition(can be single or multiple);iterator update){
    //action to be performed multiple times
}
```


What's mandatory to keep in this for loop: All of them are optional. Which means the below mentioned code is possible:

```cpp
int n;
cin>>n
for(;i<=n;){
    cout<<i<<endl;
    i++;
}

```

```cpp
/*An infinite loop happens*/
int i=1;
for(;;){
    if(i<=n){

    cout<<i<<endl;
    }
}

```

## Important points related to the scope of variables:

- To use any variable, we need to declare it first. Without declaring it and then using it won't work and throw error

```cpp
cout<<a<<endl;
```
We will get this error message: ` error: 'a' was not declared in this scope`

- After declaring the variable, if we do not give it a value and still try to access it we would get to see a random (or garbage value stored inside it) given by the compiler.

```cpp
int a;
cout<<a<<endl;
```

- For variables initialised with values in the main scope, if we try to access the same variables within sub blocks/scopes created within the main scope, no errors would be thrown

```cpp
int a=3;
    cout<<a<<endl;

    if(true){
        cout<<a<<endl;
    }
// Output:
// 3 
// 3
```

- For variables declared within sub blocks/scopes having identifiers/names exactly with variables declared within main scope, the ones in the sub blocks/scopes would be preferred over the main scope related variable but in case if any sub block/scope doesn't have a particular variable so it will look for it in the main scope and refer to its value from there

```cpp
int a=3;
cout<<a<<endl;

if(true){
    int a = 5;
    cout<<a<<endl;
}

cout<<a<<endl;

    // Output:
    // 3
    // 5
    // 3
```

- The variables declared within the sub blocks/scopes cannot be accessed anywhere outside that particular block/scope
```cpp
int a=3;
    cout<<a<<endl;

    if(true){
        int b = 5;
        cout<<b<<endl;
    }

    cout<<b<<endl;

    // Error thrown to us for this code output
```

- Redeclaring a variable with the same name in the same sub block/scope can result in an error:

```cpp
int a=3;
    cout<<a<<endl;

    if(true){
        int b = 5;
        cout<<b<<endl;
    }

    int b=9;
    cout<<b<<endl;

    int b=4;
    cout<<b<<endl;

    /*An error message related to
    redeclaration of int b comes up*/
```

- In case of iterators related to `for loops`:

```cpp
int i=8;
cout<<i<<endl;

for(int i=0;i<8;i++){
    cout<<"Hii"<<endl;
}
for(;i<8;i++){
    cout<<"Hii"<<endl;
}
```

So the for loop has its own iterator `i` which is initialised to the value of 0 and uses that for carrying out the loop instead of the `i` initialised in the main scope. But in case of 2nd loop where the iterator hasn't been initialised in the for loop itself it would refer to the value initialised in the main scope and use it for iteration. After the for loop gets executed, the variable `i` which was initialised in the main scope would have a value of the upper limit

- We can define variables with same name in different blocks but we can't define multiple variables with same name in same block 