#include<iostream>
#include <stdio.h>
#include<string>



using namespace std;
//void main()
//{
//	int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
//	pi = &i;
//	pj = &j;
//	i = 5;j = 7;
//	cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
//	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
//}


//int main()   //C语言程序，要了解
//{
//    int a[] = { 1,2,3 };
//    int* p, i;
//    p = a;    //将数组a首地址送给p
//    for (i = 0;i < 3;i++)
//        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
//}



//void f(char* st, int i)
//{
//    st[i] = '\0';
//    cout << st;   // printf(“%s\n”,st);
//    if (i > 1) f(st, i - 1);
//}
//void main()
//{
//    char st[] = "abcd";
//    f(st, 4);
//}



int* f()
{
	int* p = new int[4] {1, 2, 3, 4};
	return p;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
}


//int indexof(const char* s1, const char* s2)
//{
//	
//		int temp = 1;
//		int size1 = strlen(s1);
//		int size2 = strlen(s2);
//			for (int i = 0;i < size2 - size1 + 1;i++)
//			{
//				temp = 1;
//				for (int j = 0;j < size1;j++)
//				{
//					if (s1[j] != s2[j+i])
//					{	
//						temp = 0;
//						break;
//					}
//				}
//				if (temp == 1)
//				{
//					return i;
//				}
//			}
//			return -1;
//}
//		
//		
//		
//		
//		
//		
//	int main()
//	{
//			const char *s1 = "welcome";
//			const char *s2 = "we welcome you";
//			int i=indexof(s1, s2);
//			cout << i << endl;
//	}



//int parseHex(const char* const hexString)
//{
//	int i=stoi(hexString,0,16);
//	return i;
//}
//int main()
//{
//	cout << parseHex("A3");
//}


//void zyf(int arr[],int size1)
//{
//	
//	for (int i = 0;i < size1 - 1;i++)
//	{
//		for (int j = 0;j < size1 - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//	for (int i = 0;i < size1;i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main()
//{
//	int* p = new int[10] {8, 2, 7, 6, 5, 4, 3, 1, 9, 10};
//	zyf(p,10);
//	delete[]p;
//}