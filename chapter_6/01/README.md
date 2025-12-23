# Chapter 6 project 1
Write a program that finds the largest in a series of numbers entered by the user. The pro-
gram must prompt the user to enter numbers one by one. When the user enters 0 or a nega-
tive number, the program must display the largest nonnegative number entered:

```
Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0

The largest number entered was 100.62
```

##  Idea
So the basic idea is:
- We store the input number in a variable called (num)
- we initialize a variable which will store the largest number (largest_num)
- we use a while loop so that the user gets to input number until entered 0
- finally we use a logic that if the (largest_num) variable is less than (num) we then only largest_num = num

## Solution
See ex_1.c




