// �Է��� ���ڿ��� ���� ����ϱ� 

# include<stdio.h>

void main5()
{

// [0] ���� ����� 
	int i, length = 0; 
	char str[50];

// [1] �ݺ��� ���� �� ���
	printf("\n���ڿ��� �Է��ϼ��� : ");
	gets(str);

	printf("\n�Էµ� ���ڿ��� \n \"");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		length += 1;
	}

	printf("\" \n�Դϴ�.");
	printf("\n\n�Էµ� ���ڿ��� ���� = %d \n", length);

// [2] �Է� ������ 
	// ���� â�� ������ �ʰ� �ϱ� ���� ���ǻ� �߰��� �Է� ��� ���� 
	getchar();

}



