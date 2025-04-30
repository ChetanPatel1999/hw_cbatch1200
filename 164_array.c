// wap to check both array values are same or differnt.
#include <stdio.h>
int comp_arr(int a1[], int a2[], int s1, int s2)
{
    int i;
    if (s1 != s2)
    {
        return 0;
    }
    else
    {
        for (i = 0; i < s1; i++)
        {
            if (a1[i] != a2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
void main()
{
    int arr1[5] = {12, 89, 56, 78, 90};
    int arr2[5] = {12, 34, 56, 78, 90};
    int arr3[4] = {12, 345, 56, 78};
    int arr4[5] = {12, 34, 56, 78, 90};

    if (comp_arr(arr2, arr4, 5, 5))
    {
        printf("both array are same ");
    }
    else
    {
        printf("both array are different ");
    }
}