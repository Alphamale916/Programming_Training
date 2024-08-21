/*
Get 2 arrays as input
One array as main array 
second array with less than or equal to main array elements count
If Second array is the exact subset of first array then print "YES" else "NO"

i.e. first array 1,2,3,4,5
second array 2,3,4
YES
*/

#include<stdio.h>

int main()
{
    int a,b,flag=0;
    printf("Enter main Array size:");
    scanf("%d",&a);
    printf("Enter Target Array size:");
    scanf("%d",&b);
    int main[a],sub[b];
    if(a>=b){
        printf("Main array elements:\n");
        for(int i=0;i<a;i++){
            scanf("%d",&main[i]);
        }
        printf("Target array elements:\n");
        for(int j=0;j<b;j++){
            scanf("%d",&sub[j]);
        }
    }else
    printf("Invalid Input");
    
    for(int i=0;i<a;i++){
        if(main[i]==sub[0]){
        for(int j=0;j<b;j++){
            if(main[i]==sub[j]){
                flag++;
                i++;
                }
            }
        }
        }
    if(flag == b)
        printf("Yes");
    else
        printf("No");
    
    
    return 0;
}
