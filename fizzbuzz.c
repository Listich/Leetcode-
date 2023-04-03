/*
** EPITECH PROJECT, 2022
** Leetcode
** File description:
** fizzbuzz.c
*/

int main(int ac, char **av)
{
    int num1 = atoi(av[1]);
    int num2 = atoi(av[2]);
    if (ac > 3 && ac < 3) {
        return 84;
    }
    for (int i = num1; i <= num2; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            write(1,"Fizzbuzz",10);
        }
        else if (i % 3 == 0) {
            write(1, "Fizz", 10);
        }
        else if (i % 5 == 0) {
            write(1, "Buzz",10);
        }
        else {
            write(1,"\n",10);
        }

    }
}
