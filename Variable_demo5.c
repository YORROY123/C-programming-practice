//#include <stdio.h>
//
//int main()
//{
//	// �p��
//	// 1.�w�qfloat�Bdouble�Blong double �T�ؼƾ��������ܶq
//	// float ���פp�� (��T�פp���I��6��) windows��4�Ӧr�` (38���)
//	float a = 3.14F; //f���float�Af�]�i�H�p�g�Cf�O���F�����N�X���iŪ�ʡC
//	printf("%f\n", a);
//	printf("%.2f\n", a); //�O�d�p���I����
//
//	// double ����פp��(��T�פp���I��15��) windows��8�Ӧr�` (308���)
//	double b = 1.78F;
//	printf("%.2lf\n", b);
//
//	// long double ����פp�� (��T��p���I��18~19��) windows��8�Ӧr�`
//	long double c = 3.1415926L; //L���long doubld,L�]�i�H�p�g�CL�O���F�����N�X���iŪ�ʡC
//	printf("%zu\n", sizeof(long double));
//	printf("%.8lf\n", c);
//
//
//	// 2.�Q��sizeof�q���C�@�ؤp�Ƽƾ��������Φh�֦r�`?
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(a));
//
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(b));
//
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(c));
//
//
//	// 3.�p�ƪ��ƾ������L�k��unsigned�f�t�ϥ�
//	unsigned double d = 1.78;
//	printf("%.2lf\n", d);
//	return 0;
//}