/*
Multi-Dimentional array
Add the sum of elements in a row
*/

#include<stdio.h>

int main(){
    int a,b,c,sum=0;
    printf("Enter no. of rows and columns:");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Enter the elements one by one...\n");
    for(int i=0;i<a;i++){
        printf("Row %d elements:-\n",i+1);
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }    
    }
    printf("Select any row:");
    scanf("%d",&c);
    if(c<=b){
    for(int i=0;i<b;i++){
        sum+=arr[c-1][i];
    }
        printf("The sum of the row is %d",sum);
    
    }else
    printf("Invalid Input");
    
    return 0;
}
