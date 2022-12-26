# push_swap
<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl56x7ufz003509jr5i8cj5cl/project/2659676" alt="amurcia-'s 42 push_swap Score" /></a>

Push_swap is a program that accepts at least 2 parameters.

The parameters must be numbers (signed and/or unsigned) and can't be repeated. They will be inside the stack "a". On the other hand, the stack "b" is empty.

The objective of the program is to sort the given numbers if they are not in ascending order.



You can only make these movements:

sa (swap a): Swap the first 2 elements at the top of stack a.
  Do nothing if there is only one or no elements.

sb (swap b): Swap the first 2 elements at the top of stack b.
  Do nothing if there is only one or no elements.

ss : sa and sb at the same time.

pa (push a): Take the first element at the top of b and put it at the top of a.
  Do nothing if b is empty.

pb (push b): Take the first element at the top of a and put it at the top of b.
  Do nothing if a is empty.

ra (rotate a): Shift up all elements of stack a by 1.
  The first element becomes the last one.

rb (rotate b): Shift up all elements of stack b by 1.
  The first element becomes the last one.

rr : ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1.
  The last element becomes the first one.

rrb (reverse rotate b): Shift down all elements of stack b by 1.
  The last element becomes the first one.

rrr : rra and rrb at the same time.


# Instruccions
Compile code
```shell
make
```
Execute default push_swap
```shell
make run
```
Execute push_swap
```shell
./push_spwap [as many numbers as you want]
```
Look for leaks
```shell
make leaks
```
Norminette
```shell
make norm
```
