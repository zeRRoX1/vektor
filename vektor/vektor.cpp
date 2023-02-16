#include <iostream>

#include <vector>
//template<class T, class Allocator = Allocator<T>>
//class vector;
//
//explicit vector(const Allocator& a = Allocator());
//
//explicit vector(size_t num, const T &VAL = T(),
//    const Allocator& a = Allocator());
//
//vector(const vector <T, Allocator>& obj);
//
//template <class InUter> vector(InIter start, InInter end,
//    const Allocator& a = Allocator());
//
//void assign(InIter start, InIter end);
//void assign(size_t num, const& val); //помещает val-елементы в вектор
//
//reference at(size_type i);
//const reference at(size_type i) const;
//
//reference back();//возвращает ссылку на последний элемент вектора
//const reference back() const;
//
//iterator begin();
//const iterator begin() const;
//
//size_t capacity() const; // возвращает максимальную емкость вектора
//void clear();
//bool empty() const; //возвращает если пустой
//
//iterator end(); //возвращает последний елемент вектора
//const_iterator end()const;
//
//iterator erase(iterator i); //удаляет итератор на элемент i и возвращает последний
//iterator erase(iterato start, iterator end);
//
//iterator front(); //возвращает ссылку на первый елемент в векторе
//const_reference front()const;
//
//allocater_type get_allocator()const;//возвращает распределииель вектора
//
//iterator insert(iterator i, const T& val = T());//вставляет val перед i возвращает итерратор этого элемента
//iterator insert(iterator i, InInter start, InIter end); //добавляет последоваетельность от num до старт
//iterator insert(iterator i, size_type num, const T& val = T());//num перед i
//
//size_type max_size()const; 
//
//void pop_back(); // удаляет последний елемент в векторе
//void push_back(const T& val); // добавляет последний елеиент в векторе
//
//reverse_iterator rbegin(); // возвращает иверсивный итератор для конца вектора
//reverse_iterator rend(); // возвращает иверсивный итератор для начала вектора
//
//void resize(size_type num); // устанавливает емкость вектора равный не менее num
//void resize(size_type num, const T& val = T()); //тоже самое но если больше то добавляется элементы val в конец
//
//size_t size();
//void swap(deque<T, Allocator>& obj);//обмен элементами данного вектора и вектора obj
//static void swap(reference i, reference j);//меняет местами биты
//
//void flip();//инветритует биты с 1 на 0 и тд.

using namespace std;
#include <list>
//void merge(list<T, Allocator>& obj); //объединяет упорядоченный список . результат тоже упорядочевается . после этого список становится пустым
//void merge(list<T, Allocator>& obj, Comp cmpfn);
//
//void pop_back();
//void pop_front();
//
//void push_back();
//void push_front();
//
//void remove(const T& val); //удаляет все элементы со значением val
//void remove_if(UnPred pr); //удаляет предика со значением тру
//
//void sort();//sortirovka
//void sort(Comp cmpfn);
//
//void splice(iterator i, list<T, Allocator>& obj);//вставляет список в obj в данный список в позиции указаны итераторы i 
//void splice(iterator i, list < T, Allocator>& obj, iterator el); //вставляет елемент и сохраняет итератором i
//void splice(iterator i, list < T, Allpcator>& obj, iterator start, iterator end);
//
//void unique();//удаляет элементы дубликаты

//typedef list<int> ourList;
//
//void ShowList(ourList& l1, ourList& l2) {
//	ourList::iterator iter;
//	cout << "list 1: ";
//	for (iter = l1.begin(); iter != l1.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << endl;
//}

#include <map>
//size_t count(const key_type& k) const;
//pair<iterator, iterator> equal_range(const key_type& k); //возвращает ссылку на заданный ключ
//iterator find(const key_type& k); //возвращает итератор для заданного ключа 
//
//key_compare key_comp()const;
//
//iterator lower_bound(const key_type& k); 

// multimap

template<class container> 
void Show(container col) {
	for (container::const_interator i = col.begin(); i != col.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	/*vector<int> vect;
	cout << "Кол-во элементов, которые могут хранится в векторе"
		<< "без выделения доп. памяти -> " << vect.capacity() << endl;
	cout << "Кол-во элементов в векторе -> " << vect.size() << endl;
	vect.resize(4, 0);
	cout << "Изменение размера\n";
	cout << "Кол-во элементов в векторе -> " << vect.size() << endl;
	cout << "Vector: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;

	cout << "Максимальный размер вектора -> " << vect.max_size() << endl;
	vect.push_back(4);
	cout << "Vector: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}

	vector<int>::reverse_iterator i_riterator = vect.rbegin();
	cout << "Vector with reverse_iterator: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << *(i_riterator + i) << " ";
	}
	cout << endl;

	vector<int>::iterator i_iterator = vect.end();
	vect.insert(i_iterator - 1, 9);
	for (i_iterator = vect.begin(); i_iterator != vect.end(); i_iterator++) {
		cout << *(i_iterator) << " ";
	}
	cout << endl;

	i_iterator = vect.end();
	vect.insert(i_iterator - 1, 2, 4);
	cout << "Vector: ";
	for (i_iterator = vect.begin(); i_iterator != vect.end(); i_iterator++) {
		cout << *(i_iterator) << " ";
	}
	cout << endl;*/

	/*ourList list1, list2;
	for (int i = 0; i < 5; ++i) {
		list1.push_back(i);
		list2.push_front(i);
	}
	ShowList(list1, list2);
	list2.splice(list2.end(), list2, list2.begin());
	list1.reverse();
	ShowList(list1, list2);

	list1.sort();
	list2.sort();
	ShowList(list1, list2);

	list1.unique();
	ShowList(list1, list2);*/

	/*map<int, int> our_map;
	vector<int> our_vector;

	cout << "max_size: " << our_vector.max_size() / sizeof(int)
		<< "max_size_otobraj: " << our_map.max_size() / sizeof(int);

	int val, key;
	cin >> val >> key;
	pair<int, int> element(key, val);
	our_map.insert(element);
	cout << "Kol-vo elementov: " << our_map.size();

	pair<map<int, int>::iterator, bool> err = our_map.insert(make_pair(key, val));
	if (err.second == false)
		cout << "Error\n";;
	cout << "Kol-vo elementov: " << our_map.size();

	map<int, int>::iterator iter = our_map.begin();
	for (; iter != our_map.end(); iter++) {
		cout << "Key: " << iter->first << "Value: " << iter->second
			<< endl;
	}*/

	map<string, int> cont;
	multimap <string, int> multicon;

	cont.insert(pair<string, int>("Ivanov", 20));
	cont.insert(pair<string, int>("Petrov", 30));
	cont["Sidorov"] = 50; 
	cont["Ivanov"] = 50;

	Show(cont);
	cont.insert(pair<string, int>("Ivanov", 20));
	Show(cont);

	multicon.insert(pair<string, int>("Ivanov", 20));
	multicon.insert(pair<string, int>("Petrov", 30));
	multicon.insert(pair<string, int>("Sidorov", 40));

	Show(multicon);

	multimap<string, int>::iterator iter = multicon.find("Petrov");
	cout << iter->first << " " << iter->second << endl << endl;

	multicon.insert(pair<string, int>("Ivanov", 20));
	cout << "Count Ivanov = " << multicon.count("Ivanov");

	iter = multicon.lower_bound("Ivanov");
	for (; iter != multicon.upper_bound("Ivanov"); iter++) {
		cout << iter ->first << " " << iter->second << endl;
	}
	cout << endl;

}
