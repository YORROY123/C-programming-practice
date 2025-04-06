//#include <stdio.h>
//
//int main()
//{
//	//1.定義short、int、long、long long四種數據類型的變量
//	//格式: 數據類型 變量名 = 數據值;
//
//	//short 短整型 windows 2字節 (-2^16~2^16-1)
//	short a = 10;  //其實short int a = 10; 也可以
//	printf("%d\n", a);
//
//	//int 整數 windows 4字節 (-2^32~2^32-1)
//	int b = 100;
//	printf("%d\n", b);
//
//	//long 長整數型 windows 4字節 (-s^32~2^32-1)
//	//    假如在  Linux 32位元 是4個字節   在 Linux 64位元，是8個字節。
//	long c = 1000L;     //L表示long，L也可以小寫。L是為了提高代碼的可讀性。
//	printf("%ld\n", c);
//
//	//long long(C99) 長長整數型 windows 8字節 (-2^64~2^64-1)
//	long long d = 1000LL;
//	printf("%lld\n", d);
//
//
//	//2.利用sizeof量測每一種數據類型占用多少字節?
//	// sizeof(數據類型/變量名)
//
//	//short
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(a));
//	
//	//int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(b));
//
//	//long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(c));
//
//	//long long
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(d));
//
//	//3.有符號整數、無符號整數的定義情況
//	// signed 有符號整數 正數 負數 0
//	// unsigned 無符號整數 正數 0
//
//	signed int e = 100; //有符號整數，其實可以省略signed
//	printf("%d\n", e);
//	unsigned int f = -100; //無符號整數，就是不帶正負號
//	printf("%u\n", f);     //要注意佔位符是 %u，所以跳出來的是溢位
//
//
//	return 0;
//}