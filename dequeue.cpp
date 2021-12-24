#include "deque.h"

int main() {
	Deque<int> a;
	cout << "type int" << endl;
	cout << "adding elements from the beginning" << endl;
	a.push_front(3);
	a.push_front(2);
	a.push_front(1);
	a.print_straigth();
	cout << "adding elements from the ending" << endl;
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	a.print_straigth();
	a.print_reverse();
	cout << "deletning first element" << endl;
	a.delete_first();
	a.print_straigth();
	cout << "deletning last element" << endl;
	a.delete_last();
	a.print_straigth();
	cout << "Size " << a.get_size() << endl;
	cout << "copping" << endl;
	Deque<int> b;
	b = a;
	b.print_straigth();
	cout  << "----------------------------------------------" << endl;

	cout << "type double" << endl;
	Deque<double> a1;
	cout << "adding elements from the beginning" << endl;
	a1.push_front(3.3);
	a1.push_front(2.2);
	a1.push_front(1.1);
	a1.print_straigth();
	cout << "adding elements from the ending" << endl;
	a1.push_back(4.4);
	a1.push_back(5.5);
	a1.push_back(6.6);
	a1.print_straigth();
	a1.print_reverse();
	cout << "deletning first element" << endl;
	a1.delete_first();
	a1.print_straigth();
	cout << "deletning last element" << endl;
	a1.delete_last();
	a1.print_straigth();
	cout << "Size " << a.get_size() << endl;
	cout << "copping" << endl;
	Deque<double> b1;
	b1 = a1;
	b1.print_straigth();
	cout <<"----------------------------------------------" << endl;



	Deque<const char*> a2;
	cout << "adding elements from the beginning" << endl;
	a2.push_front("cbds");
	a2.push_front("bsds");
	a2.push_front("asc");
	a2.print_straigth();
	cout << "adding elements from the ending" << endl;
	a2.push_back("d");
	a2.push_back("e");
	a2.push_back("f");
	a2.print_straigth();
	a2.print_reverse();
	cout << "deletning first element" << endl;
	a2.delete_first();
	a2.print_straigth();
	cout << "deletning last element" << endl;
	a2.delete_last();
	a2.print_straigth();
	cout << "Size " << a2.get_size() << endl;
	cout << "copping" << endl;
	Deque<const char*> b2;
	b2 = a2;
	b2.print_straigth();


 }