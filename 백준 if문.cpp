//백준 단계별 문제풀이 if문

#include "pch.h"
#include <stdio.h>

int main()
{
	//백준 10430번 문제
	//나머지 구하기
	/*int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d\n",(a + b) % c);
	printf("%d\n", (a%c + b % c) % c);
	printf("%d\n", (a*b) % c);
	printf("%d\n", (a%c * b%c) % c);*/

	//백준 9498번 문제
	//시험 성적
	/*int score;

	scanf_s("%d", &score);
	if (90 <= score && score<= 100)
		printf("A");
	else if (80 <= score && score <= 89)
		printf("B");
	else if (70 <= score && score <= 79)
		printf("C");
	else if (60 <= score && score <= 69)
		printf("D");
	else
		printf("F");*/

	//백준 2753번 문제
	//윤년
	/*int year;
		scanf_s("%d", &year);

		if (year % 400 == 0)
			printf("1");
		else if (year % 100 == 0)
			printf("0");
		else if (year % 4 == 0)
			printf("1");
		else
			printf("0");*/

	//백준 2884번 문제
	//알람 맞추기
	/*int h, m;
			scanf_s("%d %d", &h, &m);

			if (m >= 45)
				printf("%d %d", h, m - 45);
			else if (m < 45 && h == 0)
				printf("%d %d", 23, 60 - (45 - m));
			else
				printf("%d %d", h - 1, 60 - (45 - m));*/

	//백준 10817번 문제
	//세 수 중 중간수 찾기
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	//a가 b보다 클때
	if (a > b) {
		if (a > c) { //a가 c보다도 크다면
			if (b >= c) //b와 c를 비교해 큰 값 출력
				printf("%d", b);
			else
				printf("%d", c);
		}
		else
			printf("%d", a);
	}

	//a와 b의 크기가 같다면 c의값과 상관없이 a출력
	else if (a == b) 
		printf("%d", a);

	//a가 b보다 작다면
	else {
		if (a >= c) { //a가 c보다 같거나 크면 a출력
			printf("%d", a);
		}
		else{ //a가 c보다도 작다면 c와b를 비교해 작은값 출력
				if (b >= c)
					printf("%d", c);
				else
					printf("%d", b);
			}
	}
}
