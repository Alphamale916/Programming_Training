#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {  
        str[i] = toupper(str[i]); 
        i++;
    }
}

void removeCharacter(char str[], int j) {
    int i, length = strlen(str);
    
    
    for (i = j; i < length - 1; i++) {
        str[i] = str[i + 1];
    }

    str[length - 1] = '\0';
}

int main() {
    char flames[] = "FLAMES", name1[20], name2[20], txt1[20], txt2[20];
    int len1, len2, j, position=0, temp, length=strlen(flames);
    
    
    
    scanf("%[^\n]s", name1);
    scanf(" %[^\n]s", name2);

    
    toUppercase(name1);
    toUppercase(name2);
    
    strcpy(txt1,name1);
    strcpy(txt2,name2);
    
    len1 = strlen(name1);
    len2 = strlen(name2);
    
   
    for (int i = 0; i < len1; ) {
        int match = 0; 

        for (j = 0; j < len2; j++) {
            if (name1[i] == name2[j]) {
                removeCharacter(name1, i);
                removeCharacter(name2, j);
                len1--; 
                len2--;
                match = 1; 
                break; 
            }
        }
        
        if (!match) 
            i++;
        
    }
    
    int total=strlen(name1)+strlen(name2);
    
    while(length >1){
        position = (position + total - 1) % length ;
        removeCharacter(flames,position);
        length--;
    }
    
    
    switch(flames[0]){
        case 'F':
            printf("%s and %s are FRIENDS",txt1,txt2);
            break;
        case 'L':
            printf("%s and %s are LOVERS",txt1,txt2);
            break;
        case 'A':
            printf("%s and %s are AFFECTIONATE",txt1,txt2);
            break;
        case 'M':
            printf("%s and %s are MARRAIGE",txt1,txt2);
            break;
        case 'E':
            printf("%s and %s are ENEMIES",txt1,txt2);
            break;
        case 'S':
            printf("%s and %s are SIBILINGS",txt1,txt2);
            break;
    }


    return 0;
}
