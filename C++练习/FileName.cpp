//#include <iostream>
//#include <string>
//
//namespace China {
//	float population = 14.1;
//	std::string capital = "����";
//}
//
//namespace Japan {
//	float population = 1.27;
//	std::string capital = "����";
//}
//
//using namespace Japan;
//
//int main(void) {
//	std::cout << "�׶���" << capital << std::endl;
//	std::cout << "�˿ڣ�" << population << std::endl;
//
//	std::cout << "�׶���" <<China::capital << std::endl;
//	std::cout << "�˿�:" << China::population << std::endl;
//	
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//namespace China {
//	float population = 14.1;
//	std::string capital = "����";
//}
//
//namespace Japan {
//	float population = 1.27;
//	std::string capital = "����";
//}
//
//using China::capital;
//using Japan::population;
//
//int main(void) {
//	std::cout << "�׶�:" << capital << std::endl;
//	std::cout << "�˿�:" << population << std::endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//namespace China {
//	float population = 14.1;
//	std::string capital = "����";
//}
//
//namespace Japan {
//	float population = 1.27;
//	std::string capiatl = "����";
//}
//
//using namespace China;
//using Japan::population;
//
//int main(void) {
//	std::cout << "�׶�:" << capital << std::endl;
//	std::cout << "�˿�:" << Japan::population << std::endl;
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
//	settextstyle(100, 0, _T("΢���ź�"));
//	outtextxy(170, 190, _T("�������"));
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
//	//Ĭ�Ͼ���Ϊ6���������Ϊ12.3457
//	//Ĭ�������,����ָ�ܵ���Ч����
//	cout << value << endl;
//
//	//�Ѿ����޸�Ϊ4,���12.35,�����һλ��������
//	//�����޸��Ժ�,������Ч,ֱ�������ٴα��޸�
//	cout.precision(4);
//	cout << value << endl;
//
//	//ʹ�ö��㷨,���ȱ��С��������λ��
//	//���12.3457
//	cout.flags(cout.fixed);
//	cout << value << endl;
//
//	//���㷨������Ч
//	//���3.1416
//	cout << 3.141592635 << endl;
//
//	//�Ѿ��Ȼָ�����Ч����λ��
//	cout.unsetf(cout.fixed);
//	cout << value << endl;
//	cout << 3.1415626535 << endl;
//
//	//�Ѿ��Ȼָ�����Ч����λ��
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
//	std::cout << "������������������:\n A:�ͻ���\n B:������\n C:������\n D:�˶���" << std::endl;
//	std::cin >> girlType;
//
//	std::cout << "����������������:" << std::endl;
//	std::cin >> salary;
//
//	std::cout << "�������������:" << std::endl;
//	std::cin >> height;
//
//	std::cout << "������������:" << girlType << std::endl;
//	std::cout << "������������:" << salary << std::endl;
//	std::cout << "���������:" << height << std::endl;
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
//	std::cout << "������a:";
//	std::cin >> a;
//	if (cin.fail()) {//�������ʱ�Ƿ����˴���
//		cout << "�������,Ӧ������һ������" << endl;
//		//���������,ʹ�ú������������������
//		//�����Ѿ���������ݻ��ڻ�����
//		cin.clear();
//		cin.sync();
//	}
//
//	std::cout << "������b:";
//	std::cin >> b;
//	if (cin.fail()) {
//		cout << "�������,Ӧ������һ������" << endl;
//		cin.clear();
//		cin.sync();
//	}
//
//	std::cout << "������c:";
//	std::cin >> c;
//	if (cin.fail()) {
//		cout << "�������,Ӧ������һ������" << endl;
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
//	std::cout << "������뾶";
//	std::cin >> r;
//
//	len = 2 * 3.14 * r;
//	s = 3.14 * r * r;
//
//	std::cout.precision(2);
//	std::cout.flags(std::cout.fixed);
//
//	std::cout << "���Բ���ܳ���:" << len << std::endl;
//	std::cout << "���Բ�������:" << s << std::endl;
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
//	cout << "��Ů,�����?" << endl;
//	cin >> girlAge;
//	cout << "˧��,�����?" << endl;
//	cin >> boyAge;
//
//	diff = girlAge - boyAge;
//	cout << "��Ů��˧���" << diff << "��" << endl;
//
//	diff = boyAge - girlAge;
//	cout << "˧�����Ů��" << diff << "��" << endl;
//
//	unsigned short boyAge2 = boyAge;
//	unsigned short girlAge2 = girlAge;
//	unsigned short diff2 = diff;
//	cout << "˧�����Ů��" << diff2 << "��" << endl;
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
//	std::cout << "�������˻�:";
//	std::cin >> name;
//
//	std::cout << "����������:";
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
//	girlFriend1 = "����";
//	std::cout << "grilFriend1 = " << girlFriend1 << endl;
//
//	std::string girlFriend2;
//	girlFriend2 = girlFriend1;
//	cout << "girlFriend2 = " << girlFriend2 << endl;
//
//	string girlFriend3("��Ѹ");
//	cout << "girlFriend3 =" << girlFriend3 << endl;
//
//	string girlFriend4(girlFriend3);
//	cout << "girlFriend4 = " << girlFriend4 << endl;
//
//	string girlFriend5(10, 'A');
//	cout << "girlFriend5 = " << girlFriend5 << endl;*/
//
//	string job;
//	cout << "������ʲô������?" << endl;
//	cin >> job;
//	cout << "��" << job << ", ����һ�������?" << endl;
//
//	string university;
//	string profession;
//
//	cout << "�������ĸ�ѧУ��ҵ��? ѧ��ʲôרҵ?" << endl;
//	cin >> university >> profession;
//
//	cout << university << "��" << profession << "רҵ����Ŷ!" << endl;
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
//	cout << "��ϲ��ʲô��ʳ?";
//	while (cin >> food) {
//		i = i + 1;
//		cout << "��ϲ���ĵ�" << i << "��ʳ��:" << food << endl;
//		cout << "�㻹ϲ����ʲô��ʳ?" << endl;
//	}
//
//	cout << "����ϲ������ʳ��" << i << "��" << endl;
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
//	string myGirl = "С��";
//	string yourGirl;
//
//	cout << "��ϲ����Ů������" << myGirl << endl;
//	cout << "��ϲ����Ů������" << endl;
//	cin >> yourGirl;
//
//	if (myGirl == yourGirl) {
//		cout << "����ϲ��ͬһ��,��������" << endl;
//	}
//	else {
//		cout << "ף���Ҹ�" << endl;
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
//	string s1 = "�䵱��";
//	string s2 = "������";
//	string s3 = "̫��ȭ";
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
//	////C���Եĺ���
//	//printf("��������������:");
//	//scanf_s("%s", name, sizeof(name));
//	//printf("%s, ����! \n", name);
//
//	////C++���
//	///*cout << "��������������:";
//	//cin >> name;
//	//cout << name << ",���!" << endl;*/
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
//	printf("����:%s\n", name);
//
//	name[2] = 'o';
//
//	printf("����:%s\n", name);*/
//
//	//char name[10] = "Rock";//�൱��char name[10] = {'R','o','c','k','\0'};
//	//printf("����:%s\n", name);
//
//	char name[] = "Rock";//�൱��:name[5] = "Rock"
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
//	printf("���﷼��?\n");
//	scanf_s("%s", name, sizeof(name));
//	fflush(stdin);
//	printf("������ںη�?\n");
//	gets_s(addr);
//	printf("��ס%s��%s, ��������!\n", addr, name);
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
//    cout << "������һ������: ";
//    cin >> number;  // �����û����� abc �����»س���
//
//    if (cin.fail()) {
//        cout << "������Ч������������һ������: ";
//        cin.clear();  // ����������״̬
//        // �����������
//    }
//
//    cout << "������һ���ַ���: ";
//    getline(cin, text);  // ʹ�� getline ��ȡ������
//
//    cout << "�������������: " << number << endl;
//    cout << "��������ַ�����: " << text << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <limits>  // ���� numeric_limits ��ͷ�ļ�
//using namespace std;
//
//int main() {
//    int number;
//    string text;
//
//    cout << "������һ������: ";
//    cin >> number;  // �����û����� abc �����»س���
//
//    if (cin.fail()) {
//        cout << "������Ч������������һ������: ";
//        cin.clear();  // ����������״̬
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // ���������
//    }
//
//    cout << "������һ���ַ���: ";
//    getline(cin, text);  // ʹ�� getline ��ȡ������
//
//    cout << "�������������: " << number << endl;
//    cout << "��������ַ�����: " << text << endl;
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
//	cout << "���������䣺" << endl;
//	cin >> age;
//
//	if (cin.fail()) {
//		cout << "����ʧ��,Ӧ������һ������" << endl;
//		cin.clear();
//
//		clearBuff();
//	}
//
//	cout << "���������:" << endl;
//	cin >> height;
//
//	cout << "����:" << age << endl;
//	cout << "���:" << height << endl;
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
//	cout << "����������������:";
//	while (1) {
//		//����ɹ�ʱ,����cin������
//		//�����ļ�������(ctrl+z),����������ʧ����,����0
//		if ((cin >> word) == 0) {
//			break;
//		}
//		count++;
//		length += word.length();
//	}
//
//	cout << "һ����" << count << "����" << endl;
//	cout << "�ܳ���:" << length << endl;
//}

#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main(void) {
	char word[64];
	int count = 0;
	int length = 0;

	printf("����������������:");
	while (1) {
		//����ʧ�� ����0
		//�����ļ������� (CTRL+z) ����-1(EOF)
		/*if (scanf_s("%s", word,sizeof(word) )== EOF ){
			break;
		}*/
		if (scanf("%s", word)==EOF)
		count++;
		length += strlen(word);
	}

	printf("һ����%d������\n", count);
	printf("�ܳ���:%d\n", length);

	system("pause");

	return 0;
}