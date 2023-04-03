/*
** EPITECH PROJECT, 2022
** exercice
** File description:
** palindrome.c
*/

#include  <stdlib.h>
#include <stdio.h>

bool isPalindrome(int x)
{
    long stock = x;
    long reverseX = 0;
    if (x < 0) {
        return false;
    }
    if (x == 0) {
        return true;
    }
    while (x >= 10) {
        reverseX = reverseX * 10 + x % 10;
        x = x / 10;
    }
    reverseX =  reverseX * 10 + x % 10;
    return reverseX == stock;
}

int main(int ac, char **av)
{
    int nums;
    int nums1;
    nums = atoi(av[1]);
    nums1 = isPalindrome(nums);
    printf("%d", nums1);
}