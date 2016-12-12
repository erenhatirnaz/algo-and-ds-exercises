#include<stdio.h>

int binary_search(int arr[], int left, int right, int key);

int step_count = 0;

int main()
{
    int sortedArray[10] = {3, 5, 8, 17, 24, 44, 56, 75, 82, 105};

    int left = 0;
    int right = sizeof(sortedArray) / sizeof(sortedArray[0]); // Array length
    int key = 56;

    printf("Key = %d\n\n", key);

    binary_search(sortedArray, left, right, key);
}

int binary_search(int arr[], int left, int right, int key)
{
    step_count++;
    if (right >= left)
    {
        int middleIndex = left + (right - left) / 2;
        /* Step=N: Left=LeftIndex[LeftValue],Middle=MiddleIndex[MiddleValue]
         * , Right=RightIndex[RightValue]
         */
        printf("Step=%d: Left=%d[%d], Middle=%d[%d], Right=%d[%d]\n",
                step_count, left, arr[left], middleIndex, arr[middleIndex],
                right, arr[right]);

        if (arr[middleIndex] == key)
            return middleIndex;

        if (arr[middleIndex] > key)
            return binary_search(arr, left, middleIndex - 1, key);

        return binary_search(arr, middleIndex + 1, right, key);
    }

    return -1;
}
