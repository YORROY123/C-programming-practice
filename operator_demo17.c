//#include <stdio.h>
//
//int main()
//{
//	//三元運算符、三元表達式、問號冒號運算符
//    //格式:
//	//關係表達式 ? 表達式1 : 表達式2 ;
//
//	//練習1:獲取兩個變量中的較大值
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a : b; //如果a大於b，c就等於a，否則c就等於b
//	printf("%d\n", c); //20
//
//	//練習2:獲取三個變量中的較大值
//	int x = 10;
//	int y = 20;
//	int z = 30;
//	int temp = x > y ? x : y; //先獲取x和y中較大的值
//	int max = temp > z ? temp : z; //再獲取temp和z中較大的值
//	printf("%d\n", temp); //20
//	printf("%d\n", max);  //30
//
//	return 0;
//}