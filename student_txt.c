#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

struct student {
    int number;
    char name[20];
    double gpa;
};

struct student s;

int main(void)
{
    struct student table[SIZE] = {
        {11111111, "Kim", 3.9959591591},
        {22222222, "Min", 2.6851159191519},
        {33333333, "Lee", 4.0115919519519511}
    };
    FILE *fp = NULL;

    if( (fp = fopen("student.txt", "w")) == NULL)
    {
        fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }
    for(int i = 0; i < SIZE; i++){
        fprintf(fp, "%d %s %f\n", table[i].number, table[i].name, table[i].gpa);}
    fclose(fp);

    if( (fp = fopen("student.txt", "r")) == NULL)
    {
        fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
        exit(1);
    }

    for(int i = 0; i < SIZE; i++)
    {
        fscanf(fp, "%d %s %lf", &s.number, s.name, &s.gpa);
        printf("학번 = %d, 이름 = %s, 평점 = %lf\n", s.number, s.name, s.gpa);
    }
    fclose(fp);
    
    return 0;
}