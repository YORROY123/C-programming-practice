//#include <stdio.h>
//
//int main()
//{
//	int i = 10;
//	int j = 5;
//	int k = i++ + ++i - --j - i--;
//
//	//windows:
//	// 11 + 11 - 4 - 11
//	printf("%d\n", i); //11
//	printf("%d\n", j); //4
//	printf("%d\n", k); //7
//
//	//maclinux:
//	// 10 + 12 - 4 - 12 = 6
//	// 
//	//printf("%d\n", i); //11
//	//printf("%d\n", j); //4
//	//printf("%d\n", k); //6
//
//
//	// windows穨╰参:7
//	//玡后纔后
//	//玡后参糤/搭р挡狦ㄓノ
//	// int i =10;
//	// ++i + ++i;
//	// 12 + 12 = 24
//	//后参ノ单俱笷Α璸衡Ч糤/搭
//	// int m =10;
//	// m++ + ++m;
//	// 11 + 11 = 22
//	int m = 10;
//	
//	printf("%d\n", m++ + ++m);
//	printf("%d\n", m);
//
//	//maclinux 穨╰参:6
//	//玡后㎝后纔琌妓
//	//眖オㄌΩ璸衡
//	//–玡后㎝后常琌縒ミ砰
//	int n =10;
//	int nn = ++n + ++n;
//	printf("%d\n", n); // 12
//	printf("%d\n", nn); // 11 + 12 =23
//
//	return 0;
//}