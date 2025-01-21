#include<stdio.h>
void arrays()
{
    int i,n,j;
    printf("Enter the size of the arrays:\n");
    scanf("%d",&n);

    int a1[n];
    int a2[n];
    int intersection[2*n], unions[n];
    printf("Enter elements of the first array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter elements of the second array:\n");
    for (j = 0; j < n; j++)
    {
        scanf("%d",&a2[j]);
    }
    int indexs = -1, indexu = -1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            unions[++indexu] = a1[j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(a1[i] == a2[j])
            {
                intersection[++indexs] = a2[j];
            }
            else
            {
                unions[++indexu] = a2[j];
            }
        }
    }

    printf("Intersection:\n");
    printf("Union:\n");
    for(i = 0; i < indexs; i++)
        printf("%d",intersection[i]);
    for (j = 0; j < indexu; j++)
        printf("%d" ,unions[j]);
}