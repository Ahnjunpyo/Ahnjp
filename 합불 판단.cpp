/*코리아 초등학교에서 1학년부터 4학년까지 중간고사 시험을 보았다. 

    4학년은 70점 이상이면 합격, 그 이외의 학년은 60점 이상이면 합격이다. 

    이를 판단하는 프로그램을 작성해보자.

    점수가 0미만 100초과이면 경고문구 출력!*/

#include "pch.h"
#include <stdio.h>

int main()
{
	int score, grade;

	printf("학년을 입력해 주세요 : ");
	scanf_s("%d", &grade);

	//학년 범위 체크
	if (grade < 1 || grade>4) {
		while (grade < 1 || grade>4) {
			printf("학년이 이상합니다! 다시 입력해주세요\n");
			printf("학년을 입력해 주세요 : ");
			scanf_s("%d", &grade);
		}
	}

	printf("점수를 입력해 주세요 : ");
	scanf_s("%d", &score);

	//점수 범위 체크
	if (score < 0 || score>100) {
		while (score < 0 || score>100) {
			printf("점수가 이상합니다! 다시 입력해주세요\n");
			printf("점수를 입력해 주세요 : ");
			scanf_s("%d", &score);
		}
	}

	//4학년일때는 70점 이상 합격
	if (grade == 4) {
		if (score >= 70) {
			printf("합격!\n");
		}
		else {
			printf("불합격ㅠㅠ\n");
		}
	}

	//나머지는 60점 이상 합격
	else {
		if (score >= 60) {
			printf("합격!\n");
		}
		else {
			printf("불합격ㅠㅠ\n");
		}
	}

	return 0;
	
}
