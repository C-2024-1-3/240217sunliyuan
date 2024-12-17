#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:           // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:  
    void inputTime() {  
        cout << "请输入时间（小时 分钟 秒）：";
        cin >> hour >> minute >> sec;
    }

    void outputTime() 
    {  
        cout << hour << " ：" << minute << " ：" << sec << endl;
    }
};

int main()
{
    Time t1;  // 定义t1为Time类对象
    t1.inputTime();
    t1.outputTime();
    return 0;
}
