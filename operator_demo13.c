//#include <stdio.h>
//
//int main()
//{
//
//	//思考1:數學計算中,判斷一個數是否為偶數，使用哪個關係運算符呢?
//	int a = 10;
//	printf("%d\n", a % 2 == 0); //1 偶數 0 奇數
//
//	//思考2:數學計算中，判斷一個數字是否不超過100，使用哪個關係運算符呢?
//	//<=
//	int number = 100;
//	printf("%d\n", number <= 100); //1
//
//	//思考3:電商項目的支付功能業務，需要判斷銀行卡餘額是否足夠，使用哪個關係運算符呢?
//	int pay = 100;
//	int balance = 200;
//	printf("%d\n", balance >= pay); //1
//
//	//思考4:電商項目的購買商品業務，需要判斷貨物的庫存是否足夠，使用哪個關係運算符呢?
//	int buy_number = 100;
//	int warehouse_number = 300;
//	printf("%d\n", buy_number <= warehouse_number); // 1
//
//	//思考5:點餐項目的篩選商品業務，需要點不低於100元的，使用哪個關係運算符呢?
//	int goods = 500;// 單一商品價格
//	printf("%d\n", 100 <= goods); //1
//
//	return 0;
//
//}