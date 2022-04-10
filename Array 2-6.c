// 3차원 배열 입출력하기 

# include<stdio.h>

void main6()
{

// [0] 변수 선언부(3차원 배열)
	int array[2][3][4];
	int i, j, k, value = 1;

// [1] 반복문 실행 및 출력
	for (i = 0; i < 2; i++)
	{ 
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				array[i][j][k] = value;
				printf("\n array[%d][%d][%d] = %d", i, j, k, array[i][j][k]);
				value++;
			}
		}

	}

// [2] 입력 대기상태 
	// 실행 창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령 
	getchar();

}


