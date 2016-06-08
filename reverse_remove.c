# project187
#include<stdio.h>
int main(){
    char a[20]="Nehrumathy",b[20];
    int l,i;
    l=strlen(a);
    for(i=l-1;i>0;i--){
        b[i]=a[i];
            printf("%c",b[i]);
    }
    printf("\n");
    for(i=l-1;i>0;i--){
        if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='o'&&b[i]!='u'){
            printf("%c",b[i]);
        }
    }

    return 0;
}
