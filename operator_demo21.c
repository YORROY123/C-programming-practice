//#include <stdio.h>
//
//int main()
//{
//	/*
//		解題關鍵:
//		從左邊的第一個問號開始往後找冒號
//		如果過程當中，遇到了其他問號，那麼找冒號的數量+1
//	*/
//
//	//練習2:
//
//	int a = 3, b = 2, c = 1;
//	int max = a > b ? a > c ? a : c : b > c ? b : c;
//	// int max = a >b ? (a > c ? a : c) : (b > c ? b : c);
//	printf("%d\n", max); //3
//
//	return 0;
//}