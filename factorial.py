
# 2. Find the Factorial of a Number
# Category : Recursion / Iteration
# Difficulty : Easy
#
# Problem Statement:
# Write a program to calculate the factorial of a given number n. The factorial of a number is the product of all integers from 1 to n.
#
# Example:
# Input: 5
# Output: 120 (because 5! = 5 × 4 × 3 × 2 × 1 = 120)

factorialNumber = int(input("Enter the number you want to calculate factorial of: "))
element = 1
while factorialNumber != 0:
    element *= factorialNumber
    factorialNumber = factorialNumber-1

print(f'The factorial of {factorialNumber} is {element}')
