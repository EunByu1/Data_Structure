// 학년별 취득 학점 입출력하기  

# include<stdio.h>

void main2()
{

// [0] 변수 선언부 
	int i;

	// 1차원 배열 초기화 
	int  score[3] = { 91, 86, 97 };
	char grade[3] = { 'A', 'B', 'A1' };

// [1] 반복문 실행 및 출력 
	printf("\n *** 학년별 취득 학점 *** \n");

	for (i = 0; i < 3; i++)
	{
		printf("%3d학년 : 총점 = %d,  등급 = %c\n", i + 1, score[i], grade[i]);
	}

// [2] 입력 대기상태 
	// 실행 창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령 
	getchar();

}



