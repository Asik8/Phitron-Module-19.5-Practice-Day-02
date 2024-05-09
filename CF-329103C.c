#include <stdio.h>
#include <stdlib.h>

#define lli long long int

int compare(const void *a, const void *b)
{
    return (*(lli *)b - *(lli *)a);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    lli ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    qsort(ar, n, sizeof(lli), compare);

    lli sum = 0;
    for (int i = 0; i < n && k > 0; i++) 
    {
        sum += ar[i];
        k--;
    }

    printf("%lld\n", sum);

    return 0;
}
