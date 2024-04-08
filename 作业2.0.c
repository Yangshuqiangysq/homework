#include <stdio.h>  
int maxSubArraySum(int a[], int size) 
{
    int max_so_far = 0; // ��ʼ������Ӷκ�Ϊ0  
    int curr_max = 0;   // ���赱ǰ�Ӷκ�  

    for (int i = 0; i < size; i++) 
    {
        curr_max += a[i]; // ���㵱ǰ�Ӷκ�  

        // �����ǰ�Ӷκʹ���֮ǰ������Ӷκͣ����������Ӷκ�  
        if (curr_max > max_so_far) 
        {
            max_so_far = curr_max;
        }

        // �����ǰ�Ӷκ�С��0�������õ�ǰ�Ӷκ�Ϊ0����Ϊ����ֻ����ʹ���������Ӷκ͸�С  
        if (curr_max < 0) 
        {
            curr_max = 0;
        }
    }

    // ��������������Ǹ������򷵻�0  
    return (max_so_far > 0) ? max_so_far : 0;
}

int main() 
{
    int n = 0;;
    printf("�������г���: ");
    scanf_s("%d", &n);   

    int arr[100] = { 0 };  

    printf("����������Ԫ��: ");
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d", &arr[i]); 
    }

    int max_sum = maxSubArraySum(arr, n);

    printf("����Ӷκ�Ϊ: %d\n", max_sum);
    return 0;
}