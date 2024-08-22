/*
Reverse a String
*/



#include <stdio.h>

int main()
{
    char str1[255],str2[255];
    int index;
    scanf("%[^\n]s",str1);
    for(int i=0;str1[i]!='\0';i++){ // To find the length of the string
            index++;
    }
    int m=index-1;
    for(int j=0;j<index;j++){       // To swap the original string and store it in a variable
        str2[j]=str1[m];
        m--;
    }

    for(int j=0;j<index;j++){       //Reverse the string
        str1[j]=str2[j];
    }
    
    
    printf("%s",str1);

    return 0;
}
