//#include <stdio.h>
//
//int main()
//{
//	//1.��L��J�@�Ө����
//	int number;
//	printf("�п�J�@�Ө����:\n");
//	scanf("%d", &number);
//	printf("%d\n", number);
//
//	//2.�n�D�ӼƦr����]�t7�C
//	//�Ӧ�Ʀr����O7�A�ӥB�ɦ�Ʀr�]����O7
//	int ge = number & 10; //�Ӧ�Ʀr
//	int shi = number / 10; //�Q��Ʀr
//
//	//3.�p�G�ŦX�n�D�A��J1�A���ŦX�n�D��X0�C
//	printf("%d\n", (ge != 7) && (shi != 7) && (number % 7 != 0)); //1�N��ŦX 0�N���ŦX
//	// �ŦX�N�� �Q�� �M�Ӧ�Ʀr�����O7 �B �]�������O7������
//
//	return 0;
//
//	//���y:
//	//�P�_
//	// && || �i�H�s��g�h�Ӫ�
//	// �h��&&�A��ܦP�ɺ����h�ӱ���
//	// �h��||�A��ܥu�n�����@�ӱ���N��
//	// a==1 || a==2 || a==3
//	
//}