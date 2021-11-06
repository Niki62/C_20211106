// ch3ex2.c
// 제어문자

#include <stdio.h>

int main()
{
    printf("\"Hello World!\"를 출력합시다! \n\n");
    printf("정수는 \'%%%c'로 표시하고 실수는 \'%%%c\'로 표시한다.\n", 'd', 'f');
    printf("이름\t성별\t나이\n");

    printf("나는 현재 \'%c\'언어를 %d장까지 학습했다.\n", 'C', 3);
    printf("컴퓨터가 \'%s\'소리를 내려면 \\%c를 출력합니다.\n","삑", 'a');
    printf("최근에 \'이터널스\'영화가 개봉했다.\n");

    return 0;
}
