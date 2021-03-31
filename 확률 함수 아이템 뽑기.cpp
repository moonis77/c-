#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void buyitem (int buy);

int main() {
	int menu, item;
	
	srand(time(NULL));
	
	printf("·£´ı¹Ú½º ¾ÆÀÌÅÛ\n");
	printf("1.¾ÆÀÌÅÛ È®·ü º¸±â\n");
	printf("2. ¾ÆÀÌÅÛ 1°³ »Ì±â\n");
	printf("3. ¾ÆÀÌÅÛ 10 + 1°³ »Ì±â\n");
	scanf("%d", &menu); 
	
	switch (menu) {
		case 1:
			printf(">> ¾ÆÀÌÅÛ È¹µæÈ®·üÇ¥ <<\n");
			printf("¾ÆÀÌÅÛ¸í      ¼ö·®  È®·ü\n");
			printf("+0 Àü¼³°©¿Ê    1     5%%\n");
			printf("+0 È²±İ°©¿Ê      1    10%%\n");
			printf("+0 Àº°©¿Ê      1    15%%\n");
			printf("+0 °­Ã¶°©¿Ê    1    20%%\n");
			printf("+0 °¡Á×°©¿Ê    1    50%%\n\n");
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
		if (item <= 4) printf("+0 Àü¼³°©¿Ê È¹µæ! \n"); // 5%
		else if (item <= 14) printf("+0 È²±İ°©¿Ê È¹µæ! \n"); // 10%
		else if (item <= 29) printf("+0 Àº°©¿Ê È¹µæ! \n"); // 15%
		else if (item <= 49) printf("+0 °­Ã¶°©¿Ê È¹µæ! \n"); // 20%
		else printf("+0 °¡Á×°©¿Ê È¹µæ! \n");		
	}
	
}

