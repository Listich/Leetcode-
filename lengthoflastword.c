/*
** EPITECH PROJECT, 2022
** exercice
** File description:
** lengthoflastword.c
*/

#include <stdio.h>
#include <stdlib.h>

//Given a string s consisting of words and spaces, return the length of the last word in the string.A word is a maximal substring consisting of non-space characters only.
int lengthOfLastWord(char * s)
{
    int stockstring = 0;
    for (int i = strlen(s) -1 ; i >= 0; i--) {
        if (s[i] == ' ' && stockstring != 0) {
            break;
        }
        else if (s[i] == ' ') 
            continue;
        else {
            stockstring ++;
        }
    }
    return stockstring;
}
