#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include <string.h>
#include <math.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int find_sqrt(int n, int start, int limit);
int _sqrt(int n, int start, int f, int limit);
int is_prime_number(int n);
int check_factors(int n, int f);
int is_palindrome(char *s);
int compare(char *s, int i);
int wildcmp(char *s1, char *s2);

#endif
