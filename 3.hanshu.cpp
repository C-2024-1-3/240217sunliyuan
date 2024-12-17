#include<iostream>
#include "mytemperature.h"
using namespace std;

int zyf(int num)
{
	for (int n = 0;n <= 8;n++)
	{
		num = (num + 1) * 2;
	}
	return num;
}


//int gcd(int* a, int* b)
//{
//	int temp;
//	while(*a % *b  != 0)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp % *b;
//	}
//	return *b;
//}
//int main(){
//	int a, b;
//	cin >> a >> b;
//	int num = gcd(&a, &b);
//	cout << num << endl;
//	return 0;
//}

//int zyf(int a, int b)
//{
//	int zzz;
//	for (int i = 1;;i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			zzz = i;
//			break;
//		}
//	}
//	return zzz;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << zyf(a, b) << endl;
//}


//bool is_prime(int num)
//{
//	for (int i = 2;i<num;i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int num;
//	cin >> num;
//	if (is_prime(num))
//	{
//		cout << num << "为素数" << endl;
//	}
//	else
//	{
//		cout << num << "不是素数" << endl;
//	}
//}
	/*int n = 0;
	for (int j = 2;n<200;j++)
	{
		if (is_prime(j))
		{
			cout << j << "\t";
			n++;
		}
		else
		{
			continue;
		}
		if(n%10==0)
		{
			cout << endl;
		}
	}
}*/
//int main()
//{
//    double cel, fah;
//    cout << "Celsius Fahrenheit: ";
//    cin >> cel;
//    cout << cel <<"\t"<< celsius_to_fah(cel) << endl;
//    cout << "Fahrenheit Celsius: ";
//    cin >> fah;
//    cout << fah <<"\t"<< fahrenheit_to_cels(fah) << endl;
//
//    return 0;
//
//}


int main()
{
	int num;
	cin >> num;
	cout << zyf(num) << endl;
	return 0;
}












