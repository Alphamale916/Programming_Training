/*
Reverse a String without a using a temproary variable
*/

#include <stdio.h>

int main()
{
    char str[255];
    int length;
    scanf("%[^\n]s",str);
    
    for(int i=0;str[i]!='\0';i++){
            length++;
    }
    
    int a=(length/2),m=0;
    
    while(m<a){
        str[m]      =(int)str[m]+(int)str[--length];
        str[length] =(int)str[m]-(int)str[length];
        str[m]      =(int)str[m]-(int)str[length];
        m++;
    }
   
    printf("%s",str);

    return 0;
}
