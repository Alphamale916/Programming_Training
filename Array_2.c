#include <stdio.h>
/*
GET AN INTERGER AS INPUT
SORT THE INTEGER IN DESCENDING ORDER
*/

int main()
{
    int n,m,len=0;
    scanf("%d",&n);
    m=n;
    while(m>0){     //To find the integer length
        m/=10;
        len++;
    }
    int arr[len];
    
    for(int i=0;i<len;i++){     //To store the digits in an array
        arr[i]=(n%10);
        n/=10;
    }
    
    for(int i=0;i<len;i++){     //To sort the array
        for(int j=0;j<len;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    
    for(int i=0;i<len;i++){     //To print the descending digit
        printf("%d",arr[i]);
    }
    return 0;
}
