//#include <stdio.h>
//
//int main()
//{
//	/*
//	* �ݨD1:
//	* ��L��J�@�Ө���ơA�n�D�ӼƦr����]�t7�C
//	* �p�G�ŦX�n�D�A��J1�A���ŦX�n�D��X0�C
//	*/
//
//	int x;
//	int j;
//	printf("�п�J�@�Ө��Ʀr");
//	scanf("%d", &x);
//	printf("%d\n", (x % 10) != 7 && (x / 10) != 7); // 1�N��ŦX 0�N���ŦX
//	j = (x % 10) != 7 && (x / 10) != 7;
//
//	if (j == 0 && (x % 10) == 7 && (x/10) ==7)
//	{
//		printf("���ŦX\n");
//		printf("�Q��Ʀr�O7�A�Ӧ�Ʀr�]�O7");
//			
//	}
//	else if (j == 0 && (x % 10) == 7)
//	{
//		printf("���ŦX\n");
//		printf("�Ӧ�Ʀr�O7");
//	}
//	else if (j == 0 && (x / 10) == 7)
//	{
//		printf("���ŦX\n");
//		printf("�Q��Ʀr�O7");
//	}
//	else
//	{
//		printf("�ŦX");
//	}
//
//	return 0;
//}