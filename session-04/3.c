// BWOTSHECHB

#include <stdio.h>

#define int long long

int main() {
	int n ;
	scanf("%lld" , &n) ;
	int day = n / (3600 * 24) ; n %= (3600 * 24) ;
	int hour = n / 3600 ; n %= 3600 ;
	int minute = n / 60 ; n %= 60 ;
	int second = n ;
	printf("%lld Days and %.2lld:%.2lld:%.2lld\n" , day , hour , minute , second) ;
	return 0 ;
}
