// 3���� �迭�� �̿��� ���� �迭 ������ϱ� 

# include<stdio.h>

void main()
{

	// [0] ���� �����(3���� �迭)
	int i, j, k;
	char student[2][3][20];

	// [1] �ݺ��� ���� �� ���
	for (i = 0; i < 2; i++)
	{
		printf("\n �л� %d�� �̸� : ", i + 1);
		gets(student[i][0]);

		printf("\n �л� %d�� �а� : ", i + 1);
		gets(student[i][1]);

		printf("\n �л� %d�� �й�  : ", i + 1);
		gets(student[i][2]);
	}

	for (i = 0; i < 2; i++)
	{
		printf("\n\n �л� %d", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++)
			{
				printf("%c", student[i][j][k]);
			}
		}
	}

	// [2] �Է� ������ 
		// ���� â�� ������ �ʰ� �ϱ� ���� ���ǻ� �߰��� �Է� ��� ���� 
	getchar();

}