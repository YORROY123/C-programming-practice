//#include <stdio.h>
//
//int main()
//{
//	/*
//	* 解題關鍵:
//	* 從左邊的第一個問號開始往後找冒號
//	* 如果過程當中，遇到了其他問號，那麼找冒號的數量+1
//	* a > b ? (a) : (b);
//	*/
//
//
//	//練習1:
//	int w = 4, x = 3, y = 2, z = 1;
//	int number = w < x ? w : z < y ? z : x;    //int number = w < x ? (w) : (z < y ? z : x);
//	
//
//	printf("%d\n", number); //1
//	return 0;
//
//}