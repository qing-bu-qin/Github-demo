//#include <iostream>
//#include <string>
//
//namespace China {
//	float population = 14.1;
//	std::string capital = "北京";
//}
//
//namespace Japan {
//	float population = 1.27;
//	std::string capital = "东京";
//}
//
//using namespace Japan;
//
//int main(void) {
//	std::cout << "首都：" << capital << std::endl;
//	std::cout << "人口：" << population << std::endl;
//
//	std::cout << "首都：" <<China::capital << std::endl;
//	std::cout << "人口:" << China::population << std::endl;
//	
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//namespace China {
//	float population = 14.1;
//	std::string capital = "北京";
//}
//
//namespace Japan {
//	float population = 1.27;
//	std::string capital = "东京";
//}
//
//using China::capital;
//using Japan::population;
//
//int main(void) {
//	std::cout << "首都:" << capital << std::endl;
//	std::cout << "人口:" << population << std::endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//namespace China {
//	float population = 14.1;
//	std::string capital = "北京";
//}
//
//namespace Japan {
//	float population = 1.27;
//	std::string capiatl = "东京";
//}
//
//using namespace China;
//using Japan::population;
//
//int main(void) {
//	std::cout << "首都:" << capital << std::endl;
//	std::cout << "人口:" << Japan::population << std::endl;
//
//	system("pause");
//	return 0;
//}

//#include <graphics.h>
//#include <Windows.h>
//
//int main(void) {
//	initgraph(640, 480);
//	circle(320, 240, 200);
//	system("pause");
//	closegraph();
//}

//#include <graphics.h>
//#include <Windows.h>
//
//int main(void) {
//	initgraph(640, 480);
//	setbkcolor(RGB(64, 128, 128));
//	cleardevice();
//
//	setlinecolor(RGB(255, 0, 0));
//	setlinestyle(PS_SOLID, 10);
//	circle(320, 240, 200);
//
//	settextcolor(RGB(255, 255, 0));
//	settextstyle(100, 0, _T("微软雅黑"));
//	outtextxy(170, 190, _T("无码高清"));
//
//	line(180, 380, 460, 100);
//
//	system("pause");
//	closegraph();
//}

//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	double value = 12.3456789;
//
//	//默认精度为6，所以输出为12.3457
//	//默认情况下,精度指总的有效数字
//	cout << value << endl;
//
//	//把精度修改为4,输出12.35,对最后一位四舍五入
//	//精度修改以后,持续有效,直到精度再次被修改
//	cout.precision(4);
//	cout << value << endl;
//
//	//使用定点法,精度变成小数点后面的位数
//	//输出12.3457
//	cout.flags(cout.fixed);
//	cout << value << endl;
//
//	//定点法持续有效
//	//输出3.1416
//	cout << 3.141592635 << endl;
//
//	//把精度恢复成有效数字位数
//	cout.unsetf(cout.fixed);
//	cout << value << endl;
//	cout << 3.1415626535 << endl;
//
//	//把精度恢复成有效数字位数
//	cout.unsetf(cout.fixed);
//	cout << value << endl;
//	cout << 3.1415926535 << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//
//int main(void) {
//	char girlType;
//	int salary;
//	float height;
//
//	std::cout << "请输入您的理想类型:\n A:贤惠型\n B:泼辣型\n C:文艺型\n D:运动型" << std::endl;
//	std::cin >> girlType;
//
//	std::cout << "请输入您的月收入:" << std::endl;
//	std::cin >> salary;
//
//	std::cout << "请输入您的身高:" << std::endl;
//	std::cin >> height;
//
//	std::cout << "您的理想型是:" << girlType << std::endl;
//	std::cout << "您的月收入是:" << salary << std::endl;
//	std::cout << "您的身高是:" << height << std::endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//#include <string.h>
//
//using namespace std;
//
//int main(void) {
//	int a;
//	int b;
//	int c;
//
//	//std::cin >> a >> b >> c;
//	std::cout << "请输入a:";
//	std::cin >> a;
//	if (cin.fail()) {//检查输入时是否发生了错误
//		cout << "输入错误,应该输入一个整数" << endl;
//		//清除错误标记,使得后续输入可以正常进行
//		//但是已经输入的数据还在缓冲区
//		cin.clear();
//		cin.sync();
//	}
//
//	std::cout << "请输入b:";
//	std::cin >> b;
//	if (cin.fail()) {
//		cout << "输入错误,应该输入一个整数" << endl;
//		cin.clear();
//		cin.sync();
//	}
//
//	std::cout << "请输入c:";
//	std::cin >> c;
//	if (cin.fail()) {
//		cout << "输入错误,应该输入一个整数" << endl;
//		cin.clear();
//		cin.sync();
//	}
//
//	std::cout << "a=" << a << std::endl;
//	std::cout << "b=" << b << std::endl;
//	std::cout << "c=" << c << std::endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//
//int main(void) {
//	float r;
//	float len;
//	float s;
//
//	std::cout << "请输入半径";
//	std::cin >> r;
//
//	len = 2 * 3.14 * r;
//	s = 3.14 * r * r;
//
//	std::cout.precision(2);
//	std::cout.flags(std::cout.fixed);
//
//	std::cout << "这个圆的周长是:" << len << std::endl;
//	std::cout << "这个圆的面积是:" << s << std::endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	unsigned boyAge;
//	unsigned girlAge;
//	unsigned diff;
//
//	cout << "美女,多大了?" << endl;
//	cin >> girlAge;
//	cout << "帅哥,多大了?" << endl;
//	cin >> boyAge;
//
//	diff = girlAge - boyAge;
//	cout << "美女比帅哥大" << diff << "岁" << endl;
//
//	diff = boyAge - girlAge;
//	cout << "帅哥比美女大" << diff << "岁" << endl;
//
//	unsigned short boyAge2 = boyAge;
//	unsigned short girlAge2 = girlAge;
//	unsigned short diff2 = diff;
//	cout << "帅哥比美女大" << diff2 << "岁" << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//	string name;
//	string pwd;
//
//	std::cout << "请输入账户:";
//	std::cin >> name;
//
//	std::cout << "请输入密码:";
//	std::cin >> pwd;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//	/*std::string girlFriend1;
//	girlFriend1 = "王菲";
//	std::cout << "grilFriend1 = " << girlFriend1 << endl;
//
//	std::string girlFriend2;
//	girlFriend2 = girlFriend1;
//	cout << "girlFriend2 = " << girlFriend2 << endl;
//
//	string girlFriend3("周迅");
//	cout << "girlFriend3 =" << girlFriend3 << endl;
//
//	string girlFriend4(girlFriend3);
//	cout << "girlFriend4 = " << girlFriend4 << endl;
//
//	string girlFriend5(10, 'A');
//	cout << "girlFriend5 = " << girlFriend5 << endl;*/
//
//	string job;
//	cout << "你是做什么工作的?" << endl;
//	cin >> job;
//	cout << "做" << job << ", 收入一定不错吧?" << endl;
//
//	string university;
//	string profession;
//
//	cout << "你是在哪个学校毕业的? 学的什么专业?" << endl;
//	cin >> university >> profession;
//
//	cout << university << "的" << profession << "专业不错哦!" << endl;
//}

//#include <Windows.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	string food;
//	int i = 0;
//
//	cout << "你喜欢什么美食?";
//	while (cin >> food) {
//		i = i + 1;
//		cout << "你喜欢的第" << i << "美食是:" << food << endl;
//		cout << "你还喜欢吃什么美食?" << endl;
//	}
//
//	cout << "你最喜欢的美食有" << i << "种" << endl;
//
//	system("pause");
//	return 0;
//}. 

//#include <iostream>
//#include <Windows.h>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//	string myGirl = "小芳";
//	string yourGirl;
//
//	cout << "我喜欢的女孩子是" << myGirl << endl;
//	cout << "你喜欢的女孩子是" << endl;
//	cin >> yourGirl;
//
//	if (myGirl == yourGirl) {
//		cout << "我们喜欢同一人,来决斗吧" << endl;
//	}
//	else {
//		cout << "祝你幸福" << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//	string s1 = "武当派";
//	string s2 = "张三丰";
//	string s3 = "太极拳";
//	string s4;
//
//	s4 = s1 + s2;
//	cout << "s4 = " << s4 << endl;
//
//	s4 = s4 + s3;
//	cout << "s4 = " << s4 << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <Windows.h>
//#include <stdio.h>
//
//using namespace std;
//
//int main(void) {
//	//char name[32];
//
//	////C语言的函数
//	//printf("请输入您的名字:");
//	//scanf_s("%s", name, sizeof(name));
//	//printf("%s, 您好! \n", name);
//
//	////C++风格
//	///*cout << "请输入您的名字:";
//	//cin >> name;
//	//cout << name << ",你好!" << endl;*/
//
//	//system("pause");
//	//return 0;
//
//	/*int a[8] = { 20,5,30,13,18 };
//	printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
//	cout << a[0] << a[1] << a[2] << a[3] << a[4];
//
//	int a[8] = { 0 };
//	printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
//
//	int a[8] = { 1 };
//	int a[] = { 1,2,3,4,5 };*/
//
//	/*int a[10];
//	a[5] = 38;
//	printf("%d\n", a[5]);
//	cout << a[5];*/
//
//	/*string name = "Rock";
//
//	for (int i = 0; i < name.length(); i++) {
//		cout << name[i];
//	}
//	name[0] = 'L';
//	cout << endl << name;*/
//
//	/*char name[10];
//	name[0] = 'R';
//	name[1] = 'o';
//	name[2] = 'c';
//	name[3] = 'k';
//	name[4] = 0;
//
//	printf("姓名:%s\n", name);
//
//	name[2] = 'o';
//
//	printf("姓名:%s\n", name);*/
//
//	//char name[10] = "Rock";//相当于char name[10] = {'R','o','c','k','\0'};
//	//printf("姓名:%s\n", name);
//
//	char name[] = "Rock";//相当于:name[5] = "Rock"
//	printf("%d\n", sizeof(name));
//
//}
//
//#include <stdio.h>
//#include <Windows.h>
//
//int main(void) {
//	char name[16];
//	char addr[64];
//	printf("姑娘芳名?\n");
//	scanf_s("%s", name, sizeof(name));
//	fflush(stdin);
//	printf("姑娘家在何方?\n");
//	gets_s(addr);
//	printf("家住%s的%s, 我中意你!\n", addr, name);
//	
//	system("pause");
//	return 0;
//
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int number;
//    string text;
//
//    cout << "请输入一个整数: ";
//    cin >> number;  // 假设用户输入 abc 并按下回车键
//
//    if (cin.fail()) {
//        cout << "输入无效，请重新输入一个整数: ";
//        cin.clear();  // 重置输入流状态
//        // 不清除缓冲区
//    }
//
//    cout << "请输入一个字符串: ";
//    getline(cin, text);  // 使用 getline 读取整个行
//
//    cout << "你输入的整数是: " << number << endl;
//    cout << "你输入的字符串是: " << text << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <limits>  // 包含 numeric_limits 的头文件
//using namespace std;
//
//int main() {
//    int number;
//    string text;
//
//    cout << "请输入一个整数: ";
//    cin >> number;  // 假设用户输入 abc 并按下回车键
//
//    if (cin.fail()) {
//        cout << "输入无效，请重新输入一个整数: ";
//        cin.clear();  // 重置输入流状态
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清除缓冲区
//    }
//
//    cout << "请输入一个字符串: ";
//    getline(cin, text);  // 使用 getline 读取整个行
//
//    cout << "你输入的整数是: " << number << endl;
//    cout << "你输入的字符串是: " << text << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <Windows.h>
//#include <stdio.h>
// 
//using namespace std;
//
//void clearBuff() {
//	char tmp;
//	while (tmp = getchar() != '\n');
//}
//
//int main(void) {
//	int age = 0;
//	int height = 0;
//
//	cout << "请输入年龄：" << endl;
//	cin >> age;
//
//	if (cin.fail()) {
//		cout << "输入失败,应该输入一个整数" << endl;
//		cin.clear();
//
//		clearBuff();
//	}
//
//	cout << "请输入身高:" << endl;
//	cin >> height;
//
//	cout << "年龄:" << age << endl;
//	cout << "身高:" << height << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	string word;
//	int count = 0;
//	int length = 0;
//
//	cout << "请输入任意多个单词:";
//	while (1) {
//		//输入成功时,返回cin对象本身
//		//遇到文件结束符(ctrl+z),而导致输入失败是,返回0
//		if ((cin >> word) == 0) {
//			break;
//		}
//		count++;
//		length += word.length();
//	}
//
//	cout << "一共有" << count << "单词" << endl;
//	cout << "总长度:" << length << endl;
//}

#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main(void) {
	char word[64];
	int count = 0;
	int length = 0;

	printf("请输入任意多个单词:");
	while (1) {
		//输入失败 返回0
		//遇到文件结束符 (CTRL+z) 返回-1(EOF)
		/*if (scanf_s("%s", word,sizeof(word) )== EOF ){
			break;
		}*/
		if (scanf("%s", word)==EOF)
		count++;
		length += strlen(word);
	}

	printf("一共有%d个单词\n", count);
	printf("总长度:%d\n", length);

	system("pause");

	return 0;
}