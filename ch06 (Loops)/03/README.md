# Chapte 6 project 3
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:

```
Enter a fraction: 6/12
In lowest terms: 1/2
```

## Hint
To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.

## Idea
- We separate the fraction with variables numerator and denominator
- We assign m as numerator and n as denominator so that the changes made with these variables in the loop dont effect the original values of numerator and denominator
- We calculate gcd
- then divide the numerator and denominator by gcd

## Solution
See ex_3.c
