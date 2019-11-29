 #include <stdio.h>
int main()
{
	int array1[2][2],array2[2][2],arraysum[2][2],arraymul[2][2];
	int i,j,option;
	printf("Enter the Matrix A:\n");
	for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the Matrix B:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("Enter the option:\n1=Sum\n2=Multiplication\n");
    scanf("%d",&option);
    if(option==1)
    {
     printf("Sum of the Matrix A and B is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%3d",arraysum[i][j]=array1[i][j]+array2[i][j]);
        }
        printf("\n");
    }
    }
    if(option==2)
    {
        printf("Mul of Matrix A and B is :\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%3d",arraymul[i][j]=array1[i][j]*array2[i][j]);
            }
            printf("\n");
        }
    }
}
