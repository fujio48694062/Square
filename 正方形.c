#include<stdio.h>

int main(void) {
	int i, j;
	int num; // 段数
	char sym; // 記号

	printf("正方形を表示\n");

	printf("記号（1文字）：");
	scanf_s("%c", &sym);

	do {
		printf("段数（1以上）：");
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