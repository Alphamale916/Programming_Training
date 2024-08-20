#include <stdio.h>
/*GET AN ARRAY AS INPUT
REVERSE EACH ELEMENT IN THE ARRAY - i.e. 124 to 421
FIND THE MAX ELEMENT IN THE REVERSE ARRAY
PRINT THE MAX ELEMENT
*/
int reverseElement(int a){
    int temp=0;
    while(a>0){
        temp=(temp*10)+(a%10);
        a/=10;
    }
    return temp;
}

int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr[i]=reverseElement(arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\nThe Max element After Reverse %d",max);
    
    
    
    return 0;
}