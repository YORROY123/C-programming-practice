//#include <stdio.h>
//
//int main()
//{
//	int i = 10;
//	int j = 5;
//	int k = i++ + ++i - --j - i--;
//
//	//windows:
//	// 11 + 11 - 4 - 11
//	printf("%d\n", i); //11
//	printf("%d\n", j); //4
//	printf("%d\n", k); //7
//
//	//mac�Blinux:
//	// 10 + 12 - 4 - 12 = 6
//	// 
//	//printf("%d\n", i); //11
//	//printf("%d\n", j); //4
//	//printf("%d\n", k); //6
//
//
//	// windows�@�~�t��:7
//	//�e���u������
//	//�e��Τ@�ۼW/�۴�A�A�⵲�G���X�ӥ�
//	// int i =10;
//	// ++i + ++i;
//	// 12 + 12 = 24
//	//���Τ@���ΡA����Ӫ�F���p�⧹�F�A�~�ۼW/�۴�
//	// int m =10;
//	// m++ + ++m;
//	// 11 + 11 = 22
//	int m = 10;
//	
//	printf("%d\n", m++ + ++m);
//	printf("%d\n", m);
//
//	//mac�Blinux �@�~�t��:6
//	//�e��M����u���ŬO�@�˪�
//	//�q����k�̦��p�⪺
//	//�C�@�ӫe��M��󳣬O�@�ӿW�ߪ�����
//	int n =10;
//	int nn = ++n + ++n;
//	printf("%d\n", n); // 12
//	printf("%d\n", nn); // 11 + 12 =23
//
//	return 0;
//}