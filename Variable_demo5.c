//#include <stdio.h>
//
//int main()
//{
//	// 小數
//	// 1.定義float、double、long double 三種數據類型的變量
//	// float 單精度小數 (精確度小數點後6位) windows佔4個字節 (38位數)
//	float a = 3.14F; //f表示float，f也可以小寫。f是為了提高代碼的可讀性。
//	printf("%f\n", a);
//	printf("%.2f\n", a); //保留小數點後兩位
//
//	// double 雙精度小數(精確度小數點後15位) windows佔8個字節 (308位數)
//	double b = 1.78F;
//	printf("%.2lf\n", b);
//
//	// long double 高精度小數 (精確後小數點後18~19位) windows佔8個字節
//	long double c = 3.1415926L; //L表示long doubld,L也可以小寫。L是為了提高代碼的可讀性。
//	printf("%zu\n", sizeof(long double));
//	printf("%.8lf\n", c);
//
//
//	// 2.利用sizeof量測每一種小數數據類型佔用多少字節?
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(a));
//
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(b));
//
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(c));
//
//
//	// 3.小數的數據類型無法跟unsigned搭配使用
//	unsigned double d = 1.78;
//	printf("%.2lf\n", d);
//	return 0;
//}