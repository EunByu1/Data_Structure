// 문자 배열에 문자열을 저장하고 출력하기 

# include<stdio.h>

void main4()
{

// [0] 변수 선언부 
	char str[20] = "Data Structure!";
	int  i; 

// [1] 반복문 실행 및 출력
	printf("\n문자 배열 str[] : ");

	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
	}
	
// [2] 입력 대기상태 
	// 실행 창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령 
	getchar();

}


