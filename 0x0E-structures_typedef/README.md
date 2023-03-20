### Tackling questions on 0x0E. C - Structures, typedef

## dog.h

Defining a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *
Defining a new type dog_t as a new name for the type struct dog.

## 1-init_dog.c

Writing a function that initialize a variable of type struct dog

## 2-print_dog.c

Writing a function that prints a struct dog
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

## 4-new_dog.c

Writing a function that creates a new dog.
You have to store a copy of name and owner
Return NULL if the function fails

## 5-free_dog.c

Writing a function that frees dogs.
