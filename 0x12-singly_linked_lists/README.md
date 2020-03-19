# 0x12. C - Singly linked lists

## Resources

### Read or watch:

* [Linked Lists](https://intranet.hbtn.io/rltoken/2WOe5XO84Puxd4Y1FUJwVQ)

* [Google](https://intranet.hbtn.io/rltoken/jiyCC9L1Axkl_nEmuh4j3w)

* [Youtube](https://intranet.hbtn.io/rltoken/DcEVPdONWy2p1x8XPH53Uw)

* [Data Structures](https://intranet.hbtn.io/rltoken/gb2LD9B9peFEyJ6JKuP6UA)

__________________________________________
## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/8bKyzTFahgtvQf7aftTjPw), without the help of Google:

## General

* When and why using linked lists vs arrays
* How to build and use linked lists

## Requirements

### General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You dont have to push ``_putchar.c``, we will use our file. If you do it wont be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation.
* Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
* Dont forget to push your header file
* All your header files should be include guarded

## More Info
Please use this data structure for this project:

````/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
````

## Concepts

* ````Whats a node?```` 

*Its a structure with a pointer to the next node and value information*

* ````Whats the head of a linked list?```` 

*Its the first node*

* ````Whats the tail of a linked list?```` 

*Its the node with the pointer to the next equals to NULL*

* ````In a singly linked list, what are possible directions to traverse it?```` 

*Forward*

* ````Arrays Vs Linked Lists```` 

*We can add elements indefinitely to a linked list*

*Linked list can contain as value a structure*

*Array can contain as value a structure*

*We can easily removed an element from a Linked list*

*Memory is aligned for an Array - each elements are back to back in the memory*