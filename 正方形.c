#include<stdio.h>

int main(void) {
	int i, j;
	int num; // �i��
	char sym; // �L��

	printf("�����`��\��\n");

	printf("�L���i1�����j�F");
	scanf_s("%c", &sym);

	do {
		printf("�i���i1�ȏ�j�F");
		scanf_s("%d", &num);
	} while (num <= 0);


	printf("\n");
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++)
			printf("%c", sym);
		putchar('\n');
	}

	return 0;
}