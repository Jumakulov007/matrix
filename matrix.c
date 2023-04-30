#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    system("clear");
    int matrix[10][10],m,n;
    printf("matrisani boyi va enini kirit:");
    scanf("%d%d",&m,&n);
    printf("dastlabki matrix\n");
    int i;
    int j;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=10+rand()%90;
            printf(" %d ",matrix[i][j]);
            
        }
        printf("\n\n");
        
    }
    for(int j=0;j<n;j++)
    {
     int max=matrix[j][0];   
     for(int j=0; j<n;j++)
     {
         if(matrix[i][j]>max)
            max=matrix[i][j];
     }
     printf("%d - ustun uchun max element %d\n",j,max);
     } 
     int min=matrix[0][0];   
     for(int j=0; j<n;j++)
     {
         if(matrix[i][j]<min)
            min=matrix[i][j];
     }
     printf("%d - ustun uchun min element %d\n",j,min);

    return 0;
}