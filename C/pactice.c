#include<stdio.h>
#include<string.h>

struct student
{

    char name[20],gender[10],section;
    int id;
    float cgpa;

};

int main()
{
    int n,i;
    printf("Student numbers:");
    scanf("%d",&n);
    getchar();
    struct student s[n];



    for(i=0; i<n; i++)
    {

        printf("Name: ");
        gets(s[i].name);


        printf("Id: ");
        scanf("%d", &s[i].id);
        getchar();

        printf("Gender: ");
        gets(s[i].gender);


        printf("Section: ");
        scanf("%c", &s[i].section);
        getchar();

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        getchar();
    }










}
