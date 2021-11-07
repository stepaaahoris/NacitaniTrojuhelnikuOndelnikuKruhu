#include <stdio.h>
#include <math.h>

int main(void) {
	int vstup, a, b, c, p, max;
	printf("Vyber si:\n");
	printf("1) trijuhelnik\n");
	printf("2) obdelnik\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);
	if (vstup == 1) {
		//resime trojuhelnik
		printf("Zadej stranu a: ");
		scanf("%d", &a);
		printf("Zadej stranu b: ");
		scanf("%d", &b);
		printf("Zadej stranu c: ");
		scanf("%d", &c);
		//existuje?
		if (a < b + c) {
			printf("existuje");
		}
		else {
			if (b < a + c) {
				printf("existuje");
			}
			else {
				if (c < a + b) {
					printf("existuje"); (b < a + c);
				}
			}
		}
		//je pravoúhlý? 
		if (a * a == b * b + c * c) {
			printf(" a je pravouhli");
			a == max;
		}
		else {
			if (b * b == a * a + c * c) {
				printf(" a je pravouhli");
				b == max;
			}
			else {
				if (c * c == a * a + b * b) {
					printf(" a je pravouhli");
					c == max;
				}
				else {
					printf(" a neni pravouhli");
				}
			}
		}
		if (a < b + c && b < c + a && c < b + a) {
			printf(" a ma obvod: %d\n", a + b + c);
			//polovina strany
			p = ((a + b + c) / 2);
			printf("a obsah: %f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
		}
	}
	if (vstup == 2) {
		//resime obdelnik
		printf("Zadej stranu a: ");
		scanf("%d", &a);
		printf("Zadej stranu b: ");
		scanf("%d", &b);
		if (a == b) {
			printf("Je to ctverec");
		}
		else {
			printf("Je to obdelnik");
		}
		printf(" o obvodu: %d\n", 2 * (a + b));
		printf("a obsahu: %d\n", a * b);
	}
	if (vstup == 3) {
		//resime kruznici
		printf("Zadej polomer: ");
		scanf("%d", &a);
		printf("Obvod: %f\n", 3.14 * 2 * a);
		printf("Obsah: %f\n", 3.14 * a * a);
	}
}
