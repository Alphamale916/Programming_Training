/*  Write a code for the following pattern:

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15         */
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;printf("\n"),i++){
        int x=i;
		int y=n-1;
        for(int j=0;j<i;j++){
            printf("%d ",x);
			x+=y--;
        }
    }
    return 0;
}
