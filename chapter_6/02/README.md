# Chapter 6 project 2
Write a program that asks the user to enter two integers, then calculates and displays their
greatest common divisor (GCD):

```
Enter two integers: 12 28
Greatest common divisor: 4
```

## Hint
The classic algorithm for computing the GCD, known as Euclid’s algorithm, goes as
follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m con-
tains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.

## Idea
- the two integers will be stored in m and n
- m % n will gives us remainder
- m will become n (m = n) and n will be the remainder (n = remainder)
- repeat (So we require a loop) until n = 0, then m = greatest common divisor

## Solution
See ex_2.c
