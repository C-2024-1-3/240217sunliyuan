// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;


int main()
{
    //int k=0;
    //int i = k + 1;
    //cout << ++i << endl;
    // i = 1;
   // cout << i++ << endl;
    //cout << "Welcome to C++" << endl;
    //cout << i << endl;



    //unsigned int testUnint = 65534;//oxfffe
    //cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct(八进制)
    //cout << "output in char type:" << static_cast<char>(testUnint) << endl;
    //cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
    //cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    //cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    //cout << "output in double type:"  << setprecision(4) << static_cast<double>(testUnint) << endl;
    //cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //（hex）16进制输出
    //cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//oct
    //cout << "output in Dec unsigned int type:" << dec << testUnint << endl;//dec(十进制)
    //double num = 10086;
    //cout << "output in int type:" << static_cast<int>(num) << endl;


    ////华氏度（°F） = 摄氏度（℃） × 9/5 + 32

    //int a, b;
    //cin >> a;
    //b = (a - 32) * 5 / 9;

    //cout << b << endl;




    //system("pause");



   /* int volume, radius, height, circumference, diameter;
    int pi = circumference / diameter;
    cout << "请输入圆锥底的半径：" << endl;
    cin >> radius;
    cout << "请输入圆锥的高度：" << endl;
    cin >> height;
    volume = pi * radius * radius * height / 3;
    cout << "圆锥的体积为：" << volume << endl;

    return 0;*/


    // cout << "char length:" << sizeof(char) << endl;
    // cout << "int length:" << sizeof(int) << endl;



    /* char a;

     a = getchar();

     if (a >= 'a' && a <= 'z')

         putchar(a - 32);

     else

         cout << a + 1 << endl;
     return 0;*/

     //char ch = 'a';
     //cin >> ch;
     //if (ch >= 'a' && ch <= 'z') {
     //    ch = ch - 32;
     //}
     //else {
     //    int b = static_cast<int>(ch);//强制转换,也可直接写成int（ch）
     //    cout << b << endl;
     //}


    /* double x,y;
     cin >> x;
     if (x>0&&x<1) {
         y = 3 - 2 * x;
     }
     if (x>=1&&x<5) {
         y = 2 / (4 * x) + 1;
     }
     if (x>=5&&x<10) {
         y = x * x;
     }
     cout << y << endl;
     return 0;*/

     /*int a, b, c,circumference;*

     cin >> a >> b >> c;
     if (a + b > c && a + c > b && b + c > a) {
         circumference = a + b + c;
         if (a ==b || a ==c || b ==c) {
             cout << "三角形为等腰三角形" << endl;
         }
     }
     cout <<"三角形周长为" << circumference << endl;*/


     //double a, b;
     //char c;
     //cin >> a >> c >> b;
     //if (c == '+') {
     //    cout << a + b << endl;
     //}
     //else
     //
     //if (c == '-') {
     //    cout << a - b << endl;
     //}
     //else
     //
     //if (c == '*') {
     //    cout << a * b << endl;
     //}
     //else
     //
     //if (c == '/') {
     //    if (b == 0) {
     //        cout << "您输入的分母为0，请重新输入" << endl;
     //    }
     //    else
     //        cout << a / b << endl;
     //}
     //else
     //
     //if (c == '%') {
     //    cout << int(a) % int(b) << endl;
     //}
     //if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%') {
     //    cout << "您输入的操作符不合法，请重新输入" << endl;
     //}



     /*char c;
     int i=0, m=0, n=0, p=0;
     while ((c = getchar()) != '\n') {
         if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
             i++;
         }
         else if (c == ' ') {
             m++;
         }
         else if (c >= '0' && c <= '9') {
             n++;
         }
         else
             p++;
     }
     cout << "英文字母为：" << i << endl;
     cout << "空格为：" << m << endl;
     cout << "数字字符为：" << n << endl;
     cout << "其他字符为：" << p << endl;*/

     //int a, b, c, d;//c为最大公约数  d为最小公倍数
     //cin >> a, b;
     //for (int i = 1;i<=a&&i<=b;i++) {
     //    if (a % i == 0 && b % i == 0) {
     //        c = i;
     //    }
     //}
     //for (int m = (a>b)?a:b;;m++) {
     //    if (m % a == 0 && m % b == 0) {
     //        d = m;
     //        break;
     //    }
     //}
     //cout << a << "和" << b << "的最大公约数为：" << c << endl;
     //cout << a << "和" << b << "的最小公倍数为：" << d << endl;








     //for (int a = 0;a < 5;a++) {
     //    cout << "*";
     //    for (int b = 5 - a;b < 5;b=b+5) {
     //        cout << "*";
     //        for (int c = 6 - a;c < 5;c=c+5) {
     //            cout << "*";
     //            for (int d = 7 - a;d < 5;d=d+5) {
     //                cout << "*";
     //                for (int e = 8 - a;e < 5;e=e+5) {
     //                    cout << "*";
     //                }
     //            }
     //        }
     //
     //    }cout << endl;
     //    }


double a, x1, x2;

cin >> a;

if (a >= 0) {
    x1 = a;
    x2 = (x1 + a / x1) / 2;
    while (abs(x1 - x2) >= 0.0000000001) {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;

    }
    cout << fixed << setprecision(10) << x1 << endl;
}

if (a < 0) {
    a = a * (-1);
    x1 = a;
    x2 = (x1 + a / x1) / 2;
    while (abs(x1 - x2) >= 0.0000000001) {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;

    }
    cout << fixed << setprecision(10) << x1 << "i" << endl;
}












//int sum=0;
//int num = 2;
//int days=0;
//for (;num < 100;num *= 2) {
//    sum = sum + num;
//    days++;
//}
//cout << (0.8) * sum / days;





return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
