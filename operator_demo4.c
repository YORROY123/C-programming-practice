//#include <stdio.h>
//
//int main()
//{
//	short s1 = 10;
//	short s2 = 20;
//
//
//	// �����j���૬�����p�U�A��ӵu��ƶi��ۥ[�A���O�o�j���ഫ���W�h2�A�ҥH�̲׫��A�Oint
//	short result1 = s1 + s2;
//
//	printf("%zu\n", sizeof(result1));
//
//	printf("%zu\n", sizeof(s1 + s2));
//
//	printf("%d\n", result1);
//
//	//�o���H�K��@�ӵu��ƶi��j���ഫ�A�M��M�t�@�ӵu��ƶi��ۥ[�A�o�̪��j���ഫ�Oint�����A�ҥH�̲׫��A�Oint
//	short result2 = (int)(s1) + s2;
//
//	printf("%zu\n", sizeof(result2));
//
//	printf("%zu\n", sizeof((int)s1 + s2));
//
//	printf("%d\n", result2);
//
//	//�o�̱j���ഫ�������Oshort�����A�ҥH�̲׫��A�Oshort
//	short result3 = (short)(s1) + s2;
//
//	printf("%zu\n", sizeof(result3));
//
//	printf("%zu\n", sizeof((short)s1 + s2));
//
//	printf("%d\n", result3);
//	//��[�_�Ӫ��ơA���j���૬��int
//
//	short result4 = (int)(s1 + s2);
//
//	printf("%zu\n", sizeof(result4));
//
//	printf("%zu\n", sizeof((int)(s1 + s2)));
//
//	printf("%d\n", result4);
//
//	//��[�_�Ӫ��ơA���j���૬��short
//
//	short result5 = (short)(s1 + s2);
//
//	printf("%zu\n", sizeof(result5));
//
//	printf("%zu\n", sizeof((short)( s1 + s2))); // �ҥH�O��Ӧr�` �A���[�j���ഫ���ܡA�N�|�ܦ�int�����A�ܦ�4�Ӧr�`�C
//
//	printf("%d\n", result5);
//
//
//	return 0;
//}