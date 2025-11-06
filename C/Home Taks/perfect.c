#include<stdio.h>
void perfect(int a){

int i,s=0;
for(i=1;i<a;i++){

    if(a%i==0){
        s=s+i;
    }


}
if(s==a){
    printf(" %d a perfect number",a);
}
else{
    printf("%d is not a perfect Number",a);
}
}
int main(){

int num;
scanf("%d",&num);
perfect(num);
return 0;
}
