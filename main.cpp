#include <stdio.h>//03

int Recursive1(int kyuuryou, int zikan, int kotei) {
	if (kyuuryou >= kotei) {
		printf("%dŠÔŒã‚É’´‚¦‚é", zikan);
		return zikan;
	}
	printf("%d@%d\n", kyuuryou, kotei);
	kyuuryou += kyuuryou *2 - 50;

	return (Recursive1(kyuuryou, ++zikan,kotei += 1072));
}

int main() {

	int saiki = 100;
	int ippan = 1072;
	int zikan = 1;
	int resullt1 = Recursive1(saiki, zikan, ippan);;

	return 0;
}

