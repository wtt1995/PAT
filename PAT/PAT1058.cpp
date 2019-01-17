//#include<stdio.h>
//using namespace std;
//int main()
//{
//	long long Aa, Ab, Ac, A;
//	long long Ba, Bb, Bc, B, C;
//	scanf("%ld.%ld.%ld %ld.%ld.%ld", &Aa, &Ab, &Ac, &Ba, &Bb, &Bc);
//	A = Aa * 17 * 29 + Ab * 29 + Ac;
//	B = Ba * 17 * 29 + Bb * 29 + Bc;
//	C = A + B;
//	printf("%ld.%ld.%ld", C / (17 * 29), C % (17 * 29) / 29, C % 29);
//	return 0;
//}

//另一种思路是把每一位相加，进位+1.。则不会出现越界，使用int类型即可。