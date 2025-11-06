#include<stdio.h>
void leap_year(int a){
if(a%400==0){
   printf("Year %d have 366 days. Also it's a Leap Year",a);
}
else if(a%4==0&&a%100!=0){
    printf("Year %d have 366 days. Also it's a Leap Year",a);
}
else{
     printf("Year %d have 365 days. Also it's not a Leap Year",a);
}


}

int main(){
int y;
scanf("%d",&y);
leap_year(y);
return 0;
}
