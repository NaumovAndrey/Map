#include "iostream"
#include "map"
#include "string"

/*Добавить значение и получить значение по ключу*/
void task1()
{
	std::map<int, std::string> apartPerson;
	apartPerson[2] = "Ivanov";
	apartPerson[5] = "Petrov";

	std::cout << apartPerson[5] << std::endl; //input: Petrov
}

/*добавить значение в map с помощью пары значений */
void task2()
{
	std::pair<std::string, int> oPair("hello", 5); //обращаться к паре можно методами oPair.first и oPair.second
	std::map<std::string, int> ourMap;
	ourMap.insert(oPair); //добавляем

	std::cout << oPair.first << " " << oPair.second << std::endl;
	std::cout << ourMap["hello"] << std::endl;
}
 
/*добавить значение в map, найти значение в map*/
void task3()
{
	std::map<std::string, int> ourMap;

	/*insert не заменяет элементы в map, только добавляет*/
	ourMap.insert(std::pair<std::string, int>("world", 7)); //добавляем из пары.
	ourMap.insert(std::make_pair<std::string, int>("string", 8)); //добавляем 

	/*Найти значение в map*/
	/*Метод `find()` используется для поиска элемента в контейнере по заданному ключу и возвращает итератор, 
	указывающий на найденный элемент. Если элемент с таким ключом не найден, метод `find()` возвращает итератор,
	указывающий на конец контейнера.*/
	std::map<std::string, int>::iterator it = ourMap.find("world"); //iterator является ссылкой - это указатель на объект. поиск элемента
	std::cout << it->first << " " << it->second << std::endl; //вывод в консоль 
}

/*Перемещение по map с помощью iterator*/
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

	/*вывод в консоль отсортированного map по ключу*/
	for (std::map<int, std::string>::iterator it = oMap.begin(); it != oMap.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;

	/*вывести минимальный элемент в map, т.е. вернёт итератор на начало элемента (begin)
	и запрашиваем первый элемент  (first)*/
	std::cout << oMap.begin()->first << std::endl;
}

/*Найти и удалить с помощь iterator */
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


	/*1 способ удалить элемент*/
	std::map<int, std::string>::iterator itf = oMap.find(10); //поиск элемента
	oMap.erase(itf); //удаление элемента

	/*2йспособ удалить элемент, т.е. напрямую*/
	oMap.erase(11);

	/*вывод в консоль*/
	for (std::map<int, std::string>::iterator it = oMap.begin(); it != oMap.end(); ++it)
	{
		std::cout << it->first << " " << it->second << std::endl;
	}
}

void lesson()
{
	task5();
}