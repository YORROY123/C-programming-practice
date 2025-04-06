//#include <stdio.h>
//
//int main()
//{
//	short s1 = 10;
//	short s2 = 20;
//
//
//	// 不做強制轉型的情況下，兩個短整數進行相加，但記得強制轉換的規則2，所以最終型態是int
//	short result1 = s1 + s2;
//
//	printf("%zu\n", sizeof(result1));
//
//	printf("%zu\n", sizeof(s1 + s2));
//
//	printf("%d\n", result1);
//
//	//這裡隨便對一個短整數進行強制轉換，然後和另一個短整數進行相加，這裡的強制轉換是int類型，所以最終型態是int
//	short result2 = (int)(s1) + s2;
//
//	printf("%zu\n", sizeof(result2));
//
//	printf("%zu\n", sizeof((int)s1 + s2));
//
//	printf("%d\n", result2);
//
//	//這裡強制轉換的類型是short類型，所以最終型態是short
//	short result3 = (short)(s1) + s2;
//
//	printf("%zu\n", sizeof(result3));
//
//	printf("%zu\n", sizeof((short)s1 + s2));
//
//	printf("%d\n", result3);
//	//對加起來的數，做強制轉型成int
//
//	short result4 = (int)(s1 + s2);
//
//	printf("%zu\n", sizeof(result4));
//
//	printf("%zu\n", sizeof((int)(s1 + s2)));
//
//	printf("%d\n", result4);
//
//	//對加起來的數，做強制轉型成short
//
//	short result5 = (short)(s1 + s2);
//
//	printf("%zu\n", sizeof(result5));
//
//	printf("%zu\n", sizeof((short)( s1 + s2))); // 所以是兩個字節 ，不加強制轉換的話，就會變成int類型，變成4個字節。
//
//	printf("%d\n", result5);
//
//
//	return 0;
//}