//#include <stdio.h>
//
//int main()
//{
//	/*
//		鍵盤輸入三個小數，分別表示長方形的長、寬、高
//		分別求: A面、B面、C面的面積以及長方體的體積，結果保留兩位小數
//	*/
//
//	//1.定義變量表示長、寬、高
//	double length;
//	double width;
//	double height;
//
//	//2.鍵盤輸入三個小數，分別給長、寬、高賦值
//	printf("請輸入三個小數，分別給長、寬、高賦值");
//	scanf("%lf %lf %lf", &length, &width, &height);
//
//	// 3.求A面、B面、C面的面積
//	double areaA = length * width;
//	double areaB = width * height;
//	double areaC = length * height;
//
//	printf("A面的面積為:%.2lf\n", areaA);
//	printf("B面的面積為:%.2lf\n", areaB);
//	printf("C面的面積為:%.2lf\n", areaC);
//
//	// 4.求長方體的體積
//	double volume = length * width * height;
//
//	printf("長方體的體積為:%.2lf\n", volume);
//
//
//	return 0;
//}