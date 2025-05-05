#include <stdio.h>

long long countPairsLessThanX(int arr[], int n, int x) {
    // Write your code here
    long long count=0;
    int left=0, right=n-1;
    while(left<right)
    {
        if((arr[left]+arr[right])<x)
        {
            count+=(right-left);
            left++;
        }
        else
        {
            right--;
        }
    }
    return count;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    printf("%lld\n", countPairsLessThanX(arr, n, x));
    return 0;
}
