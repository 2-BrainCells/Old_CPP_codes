#include <stdio.h>

int main()
{
    int val = 23;
    int *ptr = &val;
    printf("%d\n", val);
    printf("%d\n", &val);
    printf("%d\n", *ptr);
    printf("%d\n", ptr);

    // * derefrencing operator -> ptr -> value print

    // dynamic memory allocation
    // malloc -> int *ptr = (int*) malloc(n * sizeof(int))
    // calloc -> int *ptr = (int*) calloc(n, sizeof(int));
    // realloc -> (int*) realloc(ptr, j = 8 * sizof(int))
    // free() -> heap memory allocated gets destroyed
    
}

// int main()
// {
//     int a[100];
//     // for(initialing value; number of times a loop wil run ; iteration)
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     // i = 0 ; yes ; run the code inside the loop; once it has completed increase the value of i by 1.
//     // i = 1 ; yes ;run the code inside the loop; once it has completed increase the value of i by 1.
//     // i = 2 ; yes ;run the code inside the loop; once it has completed increase the value of i by 1.
//     // i = 3 ; yes ;run the code inside the loop; once it has completed increase the value of i by 1.
//     // i = 4 ; yes ;run the code inside the loop; once it has completed increase the value of i by 1.
//     // i = 5 ; no ;exit
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     // range of array [0, n - 1]
// }

// stdio.h -> prinft()/ scanf();
// printf - input , scanf - output
// std -> standard , io - > input , output

// Preprocessor
// # - > preprocessor initialise ,
// header files , include // macros

// Macros
// # define Limit 10  --> syntax of macros

// define -> already C program , speciific fucntion...
// Limit -> variable , limit , val ,.....;
// 10 -> value

// # define Limit 10
// --> define a macro Limit which has value of 10

// int main() -> main function
// complication code.......
// int main() / void main() / int main(void)

// int main() / int main(void) ... void main()
// int main() -> gcc complier.....
// void main() -> Turbo C++  ..... gcc compiler x

// int -> integer  range (-32768 to 32767)
// int a = -32768   valid
// int a = -32790   invalid

// types of int
// unsigned , signed
// signed int  --> int (-32768 to 32767)
// unsigned int  --> positive int (0 ... 64...)

// Tokens

/*
1. keywords -> predefined in any language ...
int , char , float ......
C - > 32 keywords..
C++ -> C + 31 keywords (63 keywords)

2. Indentifier -> terminology for naming variables..

variables -> storage places having memory.......

int a;
char a;

variables rules.... 2
1. underscore -> symbol
2. 1-9 , A-Z , a-z ... only applicable ....symbol not allowed

int _1num;
int 1_num; x

digits -- > first element not allowed.....


3. Constants constant throught the progeram
const int a = 10;  Constant defined
.
.
int a = 2;   Error

4. Strings -> char a[100];

char a[100] = {"Abhinav"};

a -> variable name
[100] -> 100 lenght ki string ...

5. Operators

eg .. 2 + 4 --> 2 , 4 oprands and '+' -> operator


Unary Operator -> single oprand
a--;
a = a - 1;
eg . int a = 3;
a-- .. printf(a)   -->   2;


Binary operator -> operands

eg .. 2 + 4 --> 2 , 4 oprands and '+' -> operator

Tirtary Operator -> case? expression 1 : expression 2

int a = 10;
if(a < 2)
{
    exp1;
}
else
{
    exp2;
}
int age;
user input age;

(age >= 18) ? printf("Can Vote") : printf("Cannot Vote");  --> rarely use


generally if - else is used

*/
// Binary Operators

// 1. Arthematic Operators  -> + , - , * , / , pow(num1, num2)
// 2. Logical Operators -->  && , || , !
// 3. Bitwise Operatos  -->   convert 0, 1 --> caculation --> output  -> &(And) , |(Or) , <<(left shift), >>(right shift) , ~(NOT), ^(XOR);
// 4. Assignment Operator

// Arthemaic Operators

// int a = 1;
// a += 1;   a = a + 1
// a -= 1;   a = a - 1

// Binary

// 00 (0), 01(1) , 10(2) , 11(3), 100, 101, 110 , 111, 1000, 1001, 1011, .......

// Escape Sequence ->     \n  -> new line  , \t -> tab  (4spaces)

// Variables

// 3 Types of Variables

// Local Variable  --->

/*

int function1()
{
    printf("%d", a);  invalid
}
int main()
{
    int a = 10;
    printf("%d", a);  valid
}

*/
// Global Variable
/*
int a =10;
int function1()
{
    prinft("%d", a);  valid
}
int main()
{
    printf("%d", a);
}


*/
// Static variable
/*

int a = 10 ---> constant irrespective of repetion

*/

// Variable scope

// scope ---> where the variable is valid?
// Global Variables --> scope Global-> anywhere in the program
// Function/ Block Scope ---> { }

// Redeclartion of Variables

/*
int main()
{
    int a , b = 1;   a = 12323113  (garbage value)
    a = 12;       valid
}


*/

// Data Types

// int , char , float , bool , double , long

// int - > integer
// char -> character
// float -> decimal point
// double -> decimal point

// double storage is more ... precision incrases

// precison float = 2.131 , double = 2.1311232
// bool -> boolean 0 and 1

// integer promotion -> char (1) , shortint (1)
// ---> int

// long int , int , long long int
// long int x -> int (4)
// long long int ->

// character manipulation

/*
char a = "a" invalid
char a = 'a' valid

char a = 34;
prinft("%c", a);

ASCII - > code

A - 65
a - 96
? - values

 char a = 'A' ;
    printf("%c \n", a + 2);
    printf("%d", a + 2);
    return 0;

    ---> C
    ---> 67


" "  --> strings;

printf("Hello, World")



---->"Arpita" ---> string
---->[230503]  ---> array


array define

int a[10];
index values -> 0 to 9
a = {1, 2, 4, 5, 5, 6, 5, 7, 8, 1, 1}

printf("%d", a[1]) --> 2;


*/

// structure -> C , C++
// structure -> C
// Classes -> C++

// c -> classes x

// classes - > variables objects

// int , char , float -> complier has knowledge ..

// structure -> user defined.....

// student structure ,,,employee

// content inside structre ... change be changed by user
// store data student -> name , class , rollnumber , marks, percentage...
// 100 store...
// char namr[100], char class[100], int rollno.

// vector <int> v; -> limit koi bhi value
// int a[100];  is suffient

// STL -> C++
/*
1. WAP to define a macro AGE which stores the age of the person as value and ,check whether the person is able to drive or not. (use ternary operators).

2. WAP to define a global and a local variable var having different values  and observe the output , when the variable is called in the main function.

3. How many keywords are there in C ? (Type your answer here) - 32

4. WAP to define a constant variable , increase its value by 12  and then print the value.
5. Convert 32 in to binary (type your answer here) -

6. Convert 101010 into decimal(type your answer here)-

7. WAP to enter a character and print its ASCII values.(don’t use scanf)

8. What is the output of the following code:-

#include <stdio.h>
int main(){
    float a=125.50;
    int   b=125.50;
    char  c='A';

    printf("%d,%d,%d\n",sizeof(a),sizeof(b),sizeof(125.50));
    printf("%d,%d\n",sizeof(c),sizeof(65));
    return 0;
}
Type answer here :- */

// functions

// method to make your code easy readable

/*

// function syntax
// datatype functionName()
// {

// }
void empData()
{
    int empId, empSalary;
    printf("Enter the empId = ");
    scanf("%d", empId);
    printf("Enter the empSalary = ");
    scanf("%d", empSalary);
}
int main()
{
    empData();
    empData();
    empData();
    empData();

}

*/

// void sum()
// {
// int a , b , c;
// }

// passing parameters, arguments
// void sum(int a, int b, int c)
// {
// return sum;  value will not print
// }

// int main()
/*
{
    int a, b, c;

    sum(a,b,c);
}

*/

/*

if - else

you have 100 rs -> can buy the gift
you don't have 100 rs -> cannot buy the gift

age >= 18 drive
age < 18 not

syntax
if(condition)
{

}
else
{

}

if(rs >= 100)
{
    gift
}
else
{
    not possible
}

else if

syntax
if(condition1)
{

}
else if(condtion2)
{

}
else if(condition3)
{

}
else
{

}
*/

/*
int main()
{
    int marks;
    printf("Enter the marks ");
    scanf("%d", &marks);
    if (marks <= 100 && marks > 85)
    {
        printf("%c", 'A');
    }
    else if (marks <= 85 && marks > 70)
    {
        printf("%c", 'B');
    }
    else if (marks <= 70 && marks > 55)
    {
        printf("%c", 'C');
    }
    else if (marks <= 55 && marks > 40)
    {
        printf("%c", 'D');
    }
    else
    {
        printf("%c", 'E');
    }
}

*/

// Arrays ->

// array syntax
// int array[100];
// int a[100]

// array contigunous memory units

// int a; - > variable , value
// a = 100; ->
// a = 100 , position of a = 1024

// size of an array 0 -> n-1  n = number of elements

// array linear -> single direction data storage

// student data -> roll number , class

// types of loops
// 1 d array
// 2 d array

// 1 2 3 4 5 -> 1 d array

// 1 2 3 4 5
// 1 2 3 4 5  -> 2 d array
// 1 2 3 4 5

// input data in array;
// static method;
// int a5[] = {2,
//             2,
//             3,
//             3,
//             6,
//             5,
//             8,
//             9};

// // for (int i = 0; i < sizeof(a5); i++)
// // {
// //     printf("%d", a5[i]);
// // }
// // dynamic method;
// int a[100], n;
// scanf("%d", &n);
// for (int i = 0; i < n; i++)
// {
//     scanf("%d", &a[i]);
//     /*
//     loop 1 . i = 0 , 0 < 5 , a[0], i++
//     loop 2 . i = 1 , 1 < 5 , a[1], i++
//     loop 3 . i = 2 , 2 < 5 , a[2], i++
//     loop 4 . i = 3 , 3 < 5 , a[3], i++
//     loop 5 . i = 4 , 4 < 5 , a[4], i++
//     loop 6 . i = 5 , 5 < 5 , loop terminates
//     */
// }
// for (int i = 0; i < n; i++)
// {
//     printf("%d ", a[i]);
//     /*
//     loop 1 . i = 0 , 0 < 5 , print a[0], i++
//     loop 2 . i = 1 , 1 < 5 , print a[1], i++
//     loop 3 . i = 2 , 2 < 5 , print a[2], i++
//     loop 4 . i = 3 , 3 < 5 , print a[3], i++
//     loop 5 . i = 4 , 4 < 5 , print a[4], i++
//     loop 6 . i = 5 , 5 < 5 , loop terminates*/
// }

/*
loops
C , C++  3 types major loops
1. for loop
2. while loop
3. do while loop

for (int i = 0 ; i < 11 ; i++)
{
    print("Arpita");
}

while loop

same logic
way of writing different
1.
for(initising statment; condition; iterator)
{

}

2.
initialising statement
while(condition)
{
    iterator
}

3.
initialising statement
do
{
    statement / code
    iterator
}while(condition);

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
        // 0, 1, 2, 3, 4
    }
    printf("\n");
    int j = 0;
    while (j < 5)
    {
        printf("%d ", j);
        // 0, 1, 2, 3, 4
        j++;
    }
    // j = 0 , 0 < 5, statement, j = 1
    // j = 1 , 1 < 5, statement, j = 2
    // j = 2 , 2 < 5, statement, j = 3
    // j = 3 , 3 < 5, statement, j = 4
    // j = 4 , 4 < 5, statement, j = 5
    // j = 5 , 5 < 5, terminates
    printf("\n");
    int k = 0;
    do
    {
        printf("%d", k);
        k++;
    } while (k > 5);
    // k = 0 , statement , condition , iterator
    // rarely use
}

for , while , do-while (rarely)

initiasling
while(condition)
{
    statement;
    iterator;
}

for(int i = 0 ; i < n ; i++)
{
    for(int j = 0 ; j < n ; j++)
    {

    }
}

*/

/*
    int arpita[100][100];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arpita[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arpita[i][j]);
        }
        printf("\n");
    }
    return 0;
*/

/*
char a = 'C';
    switch (a)
    {
    case 'A':
        printf("%d", 3 + 2);
        break;
    case 'B':
        printf("%d", 3 + 5);
        break;
    case 'C':
        printf("%d", 3 + 9);
        break;
    default:
        printf("this is default");
        break;
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         continue;
    //     }

    //     printf("%d", i);
    // }
    // 0123 -> break
    // 0124 -> continue

    pointers -> points to something

    int val = 10;

    value , address

    pointer -> variable address point

    int var = 12;
    value = 12 , adress = 604045
    int *ptr = &val;

    ptr -> 604045 ......
    ptr -> val
    ptr is linked to var in certains ways

    ptr -> 604045
    ptr -> 12

    array = continuos

a[0] = 60000
a[1] = 60004
a[10] = 60040

*/

// char a = 'C';
// switch (a)
// {
// case 'A':
//     printf("%d", 3 + 2);
//     break;
// case 'B':
//     printf("%d", 3 + 5);
//     break;
// case 'C':
//     printf("%d", 3 + 9);
//     break;
// default:
//     printf("this is default");
//     break;
// }

// for (int i = 0; i < 5; i++)
// {
//     if (i == 3)
//     {
//         continue;
//     }

//     printf("%d", i);
// }
// 0123 -> break
// 0124 -> continue