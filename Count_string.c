//Counting of Vowels and Sonsonants in a String

#include<stdio.h>
int main()
{
    char str[20];
    int vowels=0,consonants=0;
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        vowels++;
        else
        consonants++;
    }
    printf("Vowels count is %d and Consonants count is %d",vowels,consonants);
    return 0;
}
