#include<stdio.h>
int main()
{
    int a[3][3],i,j,row;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
        {
            printf("Enter Element at %d%d position",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
    printf("\n");
    }
for(row=0;row<i;row++)
{
    sum=sum+a[row][row];
}
printf("\n the sum of diagonal elements of a matrix = %d,sum);
return 0;

}
