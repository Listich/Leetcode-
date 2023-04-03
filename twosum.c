/*
** EPITECH PROJECT, 2022
** Leetcode
** File description:
** twosum.c
*/

#include <stdlib.h>

/*
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 * */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *resultat = malloc(sizeof(int*)*1000);
    resultat[0] = 1;
    resultat[1] = 1;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i +1; j < numsSize; j++) {
            if (nums[j] + nums[i] == target) {
                returnSize = 2;
                resultat[0] = j;
                resultat[1] = i;
                return resultat;
            }
        }
        return returnSize = 0;
    }
    free(nums);
}
int main(int ac, char **av)
{
    int *nums;
    int target = 0;
    int *returnSize = NULL;
    twoSum(ac,nums,target,returnSize);
}
