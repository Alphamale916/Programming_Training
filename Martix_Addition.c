/*
........MATRIX ADDITION.........
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
   if(a==m && b==n){
       printf("Enter the elements of first matrix:");
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
                scanf("%d",&arr1[i][j]);
        printf("Enter the elements of second matrix:");
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&arr2[i][j]);
   }else
    printf("Matrix Addition not possible");
    

  if(a==m && b==n){
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           printf("%d ",arr1[i][j]+arr2[i][j]);
       }
       printf("\n");
   }
  }     
                
   return 0;
}
