//#include <stdio.h>
//
//int main()
//{
//	/*
//	  主持人給出任意一個數字，有三位小朋友對這個數字進行了不同的操作。
//	  注意:每個小朋友都是拿著錢一個的結果進行的操作
//	  第一個小朋友:變成該數字的絕對值
//	  第二個小朋友:除以3獲取餘數
//	  第三個小朋友:乘以10
//	  請問該數字最終為多少?
//	*/
//	
//	//原本的做法
//	// 1.定義變量
//	int number = 17;
//	// 2.變成該數字的絕對值
//	number >= 0 ? number : -number;
//	// 3.除以3獲取餘數
//	// number = number % 3;
//	number %= 3;
//	// 4.乘以10
//	// number = number * 10;
//	// number = number * 10;
//	number *= 10;
//
//	printf("%d\n", number);
//
//	//逗號運算符的做法
//	// 1.定義變量
//	int number2 = 17;
//	// 2.利用逗號運算符得到最終的結果
//	number2 = (number2 >= 0 ? number : -number, number %= 3, number *= 10);
//	printf("%d\n", number2);
//	return 0;
//}