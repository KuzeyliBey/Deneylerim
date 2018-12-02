#include <stdio.h>
#include <conio.h>

//Ders Notu Hesaplama Programi

int main(){
	
	int islem, i=1;
	float a, b;
	
	printf("Islemler:\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n5-Mod Alma\n0-Cikis\n");
	while(i){
		printf("\nIslem:\n");
		scanf("%d", &islem);
		if (islem == 1){
			
			printf("Birinci sayi:");
			scanf("%f", &a);
			printf("Ikinci sayi:");
			scanf("%f", &b);
			printf("Sonuc = %.2f", a + b);
	    }
	    
	    else if (islem == 2){
			
			printf("Birinci sayi:");
			scanf("%f", &a);
			printf("Ikinci sayi:");
			scanf("%f", &b);
			printf("Sonuc = %.2f", a - b);
	    }
	    
	    else if (islem == 3){
			
			printf("Birinci sayi:");
			scanf("%f", &a);
			printf("Ikinci sayi:");
			scanf("%f", &b);
			printf("Sonuc = %.2f", a * b);
	    }
	    
	    else if (islem == 4){
			
			printf("Birinci sayi:");
			scanf("%f", &a);
			printf("Ikinci sayi:");
			scanf("%f", &b);
			printf("Sonuc = %.2f", a / b);
	    }
	    
		else if (islem == 5){
			while (1){
				float a , b;
				printf("Birinci sayi:");
				scanf("%f", &a);
				printf("Ikinci sayi:");
				scanf("%f", &b);
				if (a == (int)a && b == (int)b){
					int c, d;
					c = a;
					d = b;
					printf("Sonuc = %d", c % d);
					break;
				}
				else {
					printf("Lutfen tam sayi girin!\n");
					}
				
					
				}

			
	    }
	    
	    else if (islem == 0) i = 0;
	}
	return 0;	
}
