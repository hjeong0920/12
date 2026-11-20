#include <stdio.h>
#include <string.h>

struct student {
    int id;        
    char name[20]; 
    double grade;   
};

int main(void)
{
    
    struct student s1 = {2413881, "Kim", 4.2};

    s1.id = 2413881;
    strcpy(s1.name, "Kim");
    s1.grade = 4.2;

    printf("ID : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);

    return 0;
}