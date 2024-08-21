//Convert the case of a string using ASCII Value

#include<stdio.h>

int main()
{
    char str[20];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        if((int)str[i]>64 && (int)str[i]<91)
        str[i] = (int)str[i]+32;
        else if((int)str[i]>96 && (int)str[i]<123)
        str[i] = (int)str[i]-32;
        else
        continue;
    }
    printf("%s",str);
    return 0;
}
