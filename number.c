#include<stdio.h>
#include<stdlib.h>

 int main()
 {
    char number[7];

    printf("주민등록번호 앞자리를 입력하세요\n");
    scanf("%s", number);

    printf("year = %c%c, month = %c%c, day = %c%c\n", number[0], number[1], number[2], number[3], number[4], number[5]);
 
    return 0;

    }