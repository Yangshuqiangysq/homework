#include <stdio.h>  
int maxSubArraySum(int a[], int size) 
{
    int max_so_far = 0; // 初始化最大子段和为0  
    int curr_max = 0;   // 假设当前子段和  

    for (int i = 0; i < size; i++) 
    {
        curr_max += a[i]; // 计算当前子段和  

        // 如果当前子段和大于之前的最大子段和，则更新最大子段和  
        if (curr_max > max_so_far) 
        {
            max_so_far = curr_max;
        }

        // 如果当前子段和小于0，则重置当前子段和为0，因为负数只可能使接下来的子段和更小  
        if (curr_max < 0) 
        {
            curr_max = 0;
        }
    }

    // 如果所有整数都是负数，则返回0  
    return (max_so_far > 0) ? max_so_far : 0;
}

int main() 
{
    int n = 0;;
    printf("输入序列长度: ");
    scanf_s("%d", &n);   

    int arr[100] = { 0 };  

    printf("输入序列内元素: ");
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d", &arr[i]); 
    }

    int max_sum = maxSubArraySum(arr, n);

    printf("最大子段和为: %d\n", max_sum);
    return 0;
}