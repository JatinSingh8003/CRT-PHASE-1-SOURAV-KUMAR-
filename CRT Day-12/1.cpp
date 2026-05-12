// Bubble Sort

#include <iostream>
using namespace std;

void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Bubble_Sort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap_array(nums[j], nums[j + 1]);
            }
        }
    }
}