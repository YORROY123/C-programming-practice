//#include <stdio.h>
//
//int main()
//{
//	//1.�w�qshort�Bint�Blong�Blong long�|�ؼƾ��������ܶq
//	//�榡: �ƾ����� �ܶq�W = �ƾڭ�;
//
//	//short �u�㫬 windows 2�r�` (-2^16~2^16-1)
//	short a = 10;  //���short int a = 10; �]�i�H
//	printf("%d\n", a);
//
//	//int ��� windows 4�r�` (-2^32~2^32-1)
//	int b = 100;
//	printf("%d\n", b);
//
//	//long ����ƫ� windows 4�r�` (-s^32~2^32-1)
//	//    ���p�b  Linux 32�줸 �O4�Ӧr�`   �b Linux 64�줸�A�O8�Ӧr�`�C
//	long c = 1000L;     //L���long�AL�]�i�H�p�g�CL�O���F�����N�X���iŪ�ʡC
//	printf("%ld\n", c);
//
//	//long long(C99) ������ƫ� windows 8�r�` (-2^64~2^64-1)
//	long long d = 1000LL;
//	printf("%lld\n", d);
//
//
//	//2.�Q��sizeof�q���C�@�ؼƾ������e�Φh�֦r�`?
//	// sizeof(�ƾ�����/�ܶq�W)
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
//	//3.���Ÿ���ơB�L�Ÿ���ƪ��w�q���p
//	// signed ���Ÿ���� ���� �t�� 0
//	// unsigned �L�Ÿ���� ���� 0
//
//	signed int e = 100; //���Ÿ���ơA���i�H�ٲ�signed
//	printf("%d\n", e);
//	unsigned int f = -100; //�L�Ÿ���ơA�N�O���a���t��
//	printf("%u\n", f);     //�n�`�N����ŬO %u�A�ҥH���X�Ӫ��O����
//
//
//	return 0;
//}