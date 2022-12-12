#include<stdio.h>

int main(void)
{
    char name[80];

    printf("정보를 입력하세요.\n");
    scanf("%[A-z]", name);

    printf("이름: %s\n", name);
}