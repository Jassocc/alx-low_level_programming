#!/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]
large = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        prod = i * j
        if is_palindrome(prod) and prod > large:
            large = prod;
with open('102-result', 'w') as file:
    file.write(str(large))

