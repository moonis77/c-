#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buyitem (int buy);

int main() {
	int menu, item;
	
	srand(time(NULL));
	
	printf("�����ڽ� ������\n");
	printf("1.������ Ȯ�� ����\n");
	printf("2. ������ 1�� �̱�\n");
	printf("3. ������ 10 + 1�� �̱�\n");
	scanf("%d", &menu); 
	
	switch (menu) {
		case 1:
			printf(">> ������ ȹ��Ȯ��ǥ <<\n");
			printf("�����۸�      ����  Ȯ��\n");
			printf("+0 ��������    1     5%%\n");
			printf("+0 Ȳ�ݰ���      1    10%%\n");
			printf("+0 ������      1    15%%\n");
			printf("+0 ��ö����    1    20%%\n");
			printf("+0 ���װ���    1    50%%\n\n");
			break;
			
		case 2:
			buyitem(1);
			break;
		
		case 3:
			buyitem(11);
			break;
			
		default:
			break;
	}
	return 0; 
}

void buyitem(int buy) {
	int i,item;
	for (i = 1; i <= buy; i++){
		item = rand() % 100;
		if (item <= 4) printf("+0 �������� ȹ��! \n"); // 5%
		else if (item <= 14) printf("+0 Ȳ�ݰ��� ȹ��! \n"); // 10%
		else if (item <= 29) printf("+0 ������ ȹ��! \n"); // 15%
		else if (item <= 49) printf("+0 ��ö���� ȹ��! \n"); // 20%
		else printf("+0 ���װ��� ȹ��! \n");		
	}
	
}

