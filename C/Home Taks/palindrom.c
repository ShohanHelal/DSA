#include<stdio.h>
void palindrom(char a[20]){
int b[20],i;
for(i=0;i<20;i++){
    a[i]=b[19-i];
}
if(a==b){
    printf("This String is a Palindrom");
}
else{
printf("This String is not a Palindrom");
}
}
int main(){

int str[20];
scanf("%s",&str);
palindrom(str);

return 0;
}
