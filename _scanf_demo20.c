//#include <stdio.h>
//
//int main()
//{
//	/*
//	�ݨD1:��L��J�k�B�ͪ��W�r�A�ë��ӥH�U�榡���L�X��
//	�榡:�ڿ˿˪��k�B�ͪ��W�r��:XXX
//
//	�r�Ŧ��ܶq���w�q�覡:
//		�ƾ����� �ܶq�W[�j�p] = �r�Ŧ�;
//		char str[���s�e�Τj�p] = "aaa";
//	���s�e�Τj�p���p��覡:
//		�^��:1���r���A�Ÿ��A�Ʀr�e�Τ@�Ӧr�`
//		����:�bvs�Ϊ�vc���A�q�{���p�U�A�@�Ӥ���e�Ψ�Ӧr�`
//		�����аO:\0�e�Τ@�Ӧr�`
//	*/
//	
//	//// ���s�e�Τj�p���p��覡
//	//char str[6] = "aaa�A";   //�o���ܽ�ȵ��o�ܭ�n
//	//printf("%s\n", str);
//	//printf("%zu\n", sizeof(str));
//	//printf("%zu\n", sizeof("aaa�A"));
//
//	// 1. �w�q�ܶq�����k�B�ͪ��W�r
//	char name[20];
//
//	// 2. ��L��J�k�B�ͪ��W�r
//	printf("�п�J�˿ˤk�ͪ��W�r��:");
//	scanf("%s", &name);
//
//	// 3.��X���L
//	printf("�ڿ˿˪��k�B�ͪ��W�r��:%s", name);
//}