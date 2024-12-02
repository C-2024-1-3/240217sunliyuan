#include<iostream>
using namespace std;
//void zyf(double arr[])
//{
//	for (int i = 0;i < 9;i++)
//	{
//		for (int j = 0;j < 9-i;j++)  //每次i的循环都是将数组中最大的数字沉到最后
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				double temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		cout << arr[i] << "\t";
//	}
//}



//int main()
//{
	/*int offset=0;
	int temp = 0;
	int newarr[10];
	int arr[] = { 1,2,3,2,1,6,3,4,5,2 };
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < i;j++)
		{
			if (arr[i] == arr[j])
			{
				offset++;
				temp = 1;
				break;
			}
			
		}
		if (temp == 1)
		{
			temp = 0;
			continue;
		}
		else
		{
			newarr[i - offset] = arr[i];
		}
	}
	for (int i = 0;i < 10-offset;i++)
	{
		cout << newarr[i];
	}*/

	/*double arr[10] = { 3.2,2,3,14,1.5,1.6,3,5,7,9 };
	zyf(arr);*/
	
	
	
	//S1过来，打开所有柜子
	//bool arr[100] = { true };
	//for (int i = 0;i < 100;i++)
	//{
	//	arr[i] = !arr[i];
	//}
	//for (int i = 2;i < 101;i++)//表示第几个人
	//{
	//	for (int n = 1;(i+1) * n-1  < 101;n++)//这个人能对那些柜子做 修改
	//	{
	//		arr[(i + 1) * n - 2] = !arr[(i + 1) * n - 2];
	//	}
	//}
	//for (int i = 0;i < 100;i++)
	//{
	//	if (arr[i] == true)
	//	{
	//		cout << i+1 << endl;
	//	}
	//}

	
	/*bool arr[100] = { false };
	for (int i = 0;i < 100;i++)
	{
		arr[i] = !arr[i];
	}
	for (int i = 2;i < 101;i++)
	{
		for (int n = 1;n * i < 101;n++)
		{
			if (arr[i * n - 1] == true)
			{
				arr[i * n - 1] = false;
			}
			else
			{
				arr[i * n - 1] = true;
			}
		}
	}
	for (int i = 0;i < 100;i++)
	{
		if (arr[i] == true)
		{
			cout << i+1 << " ";
		}
	}*/

void merge(const int list1[], int size1, const int list2[], int size2)
{
	int temp;
	int list3[99] = { 0 };
	 for (int i = 0;i < size1;i++)
	 {
		 list3[i] = list1[i];
	 }
	 for (int j = size1;j < size1 + size2;j++)
	 {
		 list3[j] = list2[j - size1];
	 }
	 for (int n = 0;n < size1 + size2-1;n++)
	 {
		 for (int k = 0;k < size1 + size2 - n-1;k++)
		 {
			 if (list3[k] > list3[k + 1])
			 {
				 temp = list3[k];
				 list3[k] = list3[k + 1];
				 list3[k + 1] = temp;
			 }
		 }
	 }
	 for (int i = 0;i < size1 + size2;i++)
	 {
		 cout << list3[i] << " ";
	 }
}
int main()
{
	
	const int arr1[5] = { 3,5,7,11,9 };
	const int arr2[5] = { 2,4,8,6,10 };
	merge(arr1, 5, arr2, 5);
}






//int indexOf(const char s1[], const char s2[])
//{
//	int temp = 1;
//	int size1 = strlen(s1);
//	int size2 = strlen(s2);
//	for (int i = 0;i < size2 - size1 + 1;i++)
//	{
//		temp = 1;
//		for (int j = 0;j < size1;j++)
//		{
//			if (s1[j] != s2[j+i])
//			{	
//				temp = 0;
//				break;
//			}
//		}
//		if (temp == 1)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//
//
//
//
//
//int main()
//{
//	const char s1[] = "welcome";
//	const char s2[] = "we welcome you";
//	int i=indexOf(s1, s2);
//	cout << i << endl;
//}



//void count(const char s[], int counts[])
//{ 
//	for (int i = 0; i < 26; i++)
//	{
//		counts[i] = 0;
//	}
//	for (int i = 0;i < strlen(s);i++)
//	{
//		for (int j = 65;j < 91;j++)
//		{
//			if (s[i] == j)
//			{
//				counts[j - 65]++;
//			}
//		}
//	}
//	for (int i = 0;i < strlen(s);i++)
//	{
//		for (int j = 97;j < 123;j++)
//		{
//			if (s[i] == j)
//			{
//				counts[j-97]++;
//			}
//		}
//
//	}
//}
//int main()
//{
//	const char s[] = "Welcome to York";
//	int c[26] = { 0 };
//	count(s, c);
//	for (int i = 0;i < 26;i++)
//	{
//		if (c[i] != 0)
//		{
//			cout << char(i + 97) << ":" << c[i] <<" times" << endl;
//		}
//	}
//	return 0;
//}