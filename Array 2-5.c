// 입력한 문자열의 길이 계산하기 

# include<stdio.h>

void main5()
{

// [0] 변수 선언부 
	int i, length = 0; 
	char str[50];

// [1] 반복문 실행 및 출력
	printf("\n문자열을 입력하세요 : ");
	gets(str);

	printf("\n입력된 문자열은 \n \"");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		length += 1;
	}

	printf("\" \n입니다.");
	printf("\n\n입력된 문자열의 길이 = %d \n", length);

// [2] 입력 대기상태 
	// 실행 창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령 
	getchar();

}




