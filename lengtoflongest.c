/*
** EPITECH PROJECT, 2022
** exercice
** File description:
** lengtoflongest.c
*/

//Given a string s, find the length of the longest  substring without repeating characters.

int main(char * s)
{
    char  *str = malloc(sizeof(char)*100);
    int longest = 0;
    int current = 0;
    int strSize = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        for (int  j = 1; s[i] != '\0'; j++) {
            if (s[i] == str[j]) {
                str[j] = 0;
                if (current  > longest) {
                    longest == current;
                }
                else (str[strSize] = s[i],strSize++, current++);
            }
        }
    }
    return 0;
}
