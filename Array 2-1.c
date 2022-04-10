// 자료형에 대한 메모리 할당 크기 확인하기 

# include<stdio.h>

void main1()
{

// [0] 변수 선언부 
	char  c, c_array[100];
	int   i, i_array[100];
	short s, s_array[100];
	float f, f_array[100];
	long  l, l_array[100];

// [1] 출력 
	printf("\n char  c의 크기 = %d \t: char  c_array 크기 = %4d", sizeof(c), sizeof(c_array));
	printf("\n int   i의 크기 = %d \t: int   i_array 크기 = %4d", sizeof(i), sizeof(i_array));
	printf("\n short c의 크기 = %d \t: short s_array 크기 = %4d", sizeof(s), sizeof(s_array));
	printf("\n float f의 크기 = %d \t: float f_array 크기 = %4d", sizeof(f), sizeof(f_array));
	printf("\n long  l의 크기 = %d \t: int   l_array 크기 = %4d", sizeof(l), sizeof(l_array));
	
// [2] 입력 대기상태 
	// 실행 창이 닫히지 않게 하기 위해 편의상 추가한 입력 대기 명령 
	getchar();

}


