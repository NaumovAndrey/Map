#include "iostream"
#include "map"
#include "string"

/*�������� �������� � �������� �������� �� �����*/
void task1()
{
	std::map<int, std::string> apartPerson;
	apartPerson[2] = "Ivanov";
	apartPerson[5] = "Petrov";

	std::cout << apartPerson[5] << std::endl; //input: Petrov
}

/*�������� �������� � map � ������� ���� �������� */
void task2()
{
	std::pair<std::string, int> oPair("hello", 5); //���������� � ���� ����� �������� oPair.first � oPair.second
	std::map<std::string, int> ourMap;
	ourMap.insert(oPair); //���������

	std::cout << oPair.first << " " << oPair.second << std::endl;
	std::cout << ourMap["hello"] << std::endl;
}
 
/*�������� �������� � map, ����� �������� � map*/
void task3()
{
	std::map<std::string, int> ourMap;

	/*insert �� �������� �������� � map, ������ ���������*/
	ourMap.insert(std::pair<std::string, int>("world", 7)); //��������� �� ����.
	ourMap.insert(std::make_pair<std::string, int>("string", 8)); //��������� 

	/*����� �������� � map*/
	/*����� `find()` ������������ ��� ������ �������� � ���������� �� ��������� ����� � ���������� ��������, 
	����������� �� ��������� �������. ���� ������� � ����� ������ �� ������, ����� `find()` ���������� ��������,
	����������� �� ����� ����������.*/
	std::map<std::string, int>::iterator it = ourMap.find("world"); //iterator �������� ������� - ��� ��������� �� ������. ����� ��������
	std::cout << it->first << " " << it->second << std::endl; //����� � ������� 
}

/*����������� �� map � ������� iterator*/
void task4()
{
	std::map<int, std::string>oMap;
	oMap.insert(std::make_pair<int, std::string>(10, "ten"));
	oMap.insert(std::make_pair<int, std::string>(11, "eleven"));
	oMap.insert(std::make_pair<int, std::string>(8, "eight"));
	oMap.insert(std::make_pair<int, std::string>(6, "six"));
	oMap.insert(std::make_pair<int, std::string>(7, "seven"));
	oMap.insert(std::make_pair<int, std::string>(12, "twelve"));
	oMap.insert(std::make_pair<int, std::string>(2, "two"));

	/*����� � ������� ���������������� map �� �����*/
	for (std::map<int, std::string>::iterator it = oMap.begin(); it != oMap.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;

	/*������� ����������� ������� � map, �.�. ����� �������� �� ������ �������� (begin)
	� ����������� ������ �������  (first)*/
	std::cout << oMap.begin()->first << std::endl;
}

/*����� � ������� � ������ iterator */
void task5()
{
	std::map<int, std::string>oMap;
	oMap.insert(std::make_pair<int, std::string>(10, "ten"));
	oMap.insert(std::make_pair<int, std::string>(11, "eleven"));
	oMap.insert(std::make_pair<int, std::string>(8, "eight"));
	oMap.insert(std::make_pair<int, std::string>(6, "six"));
	oMap.insert(std::make_pair<int, std::string>(7, "seven"));
	oMap.insert(std::make_pair<int, std::string>(12, "twelve"));
	oMap.insert(std::make_pair<int, std::string>(2, "two"));


	/*1 ������ ������� �������*/
	std::map<int, std::string>::iterator itf = oMap.find(10); //����� ��������
	oMap.erase(itf); //�������� ��������

	/*2������� ������� �������, �.�. ��������*/
	oMap.erase(11);

	/*����� � �������*/
	for (std::map<int, std::string>::iterator it = oMap.begin(); it != oMap.end(); ++it)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

void lesson()
{
	task5();
}