# project187
#include<stdio.h>
int main(){
    int i,j,c=0,a[5]={1,1,2,2,3};
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
            if(a[i]==a[j])
            {
                c++;
            }
            }
        }
   
    if(c==0){
        printf("%d",a[i]);
    }
    c=0;
    }
    return 0;
}
