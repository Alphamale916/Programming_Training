/*
Matrix multiplication
*/



#include <stdio.h>

int main()
{  
   int a,b,m,n;
   printf("Enter the row and column of first matrix:");
   scanf("%d %d",&a,&b);
   printf("Enter the row and column of second matrix:");
   scanf("%d %d",&m,&n);
   int arr1[a][b],arr2[m][n];
   if(b==m){
       printf("Enter the elements of first matrix:");
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
                scanf("%d",&arr1[i][j]);
        printf("Enter the elements of second matrix:");
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&arr2[i][j]);
   }else
    printf("Matrix multiplication not possible");
    
    int temp=0;
    
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           for(int k=0;k<n;k++){
               temp+=(arr1[i][k]*arr2[k][j]);
           }
           printf("%d ",temp);
           temp=0;
       }
       printf("\n");
   }
            
                
   return 0;
}
