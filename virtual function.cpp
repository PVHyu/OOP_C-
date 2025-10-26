// #include <iostream>
// using namespace std;

// class Animal {
// public:
// 	virtual void sound() {
// 		cout << "some sound" << endl;
// 	}
// };

// class Cat : public Animal {
// public:
// 	void sound() {
// 		cout << "meow meow" << endl;
// 	}
// };

// class Dog : public Animal {
// public:
// 	void sound() {
// 		cout << "woof woof" << endl;
// 	}
// };

// int main() {
// 	Cat cat;
// 	Animal* animal1 = &cat;
// 	animal1->sound();

// 	Dog dog;
// 	Animal* animal2 = &dog;
// 	animal2->sound();
// 	return 0;
// }

// virtual destructor C++
#include<iostream>

using namespace std;

class Base{
public:
	virtual ~Base() {
		cout << "Base's destructor" << endl;
	}
};

class Derived : public Base {
public:
	~Derived() {
		cout << "Derived's destructor" << endl;
	}
};

int main() {
	Base* b = new Derived();
	delete b;
	return 0;
}

//Khi delete b; được gọi:
// 	Vì hàm hủy của Base là ảo, C++ sẽ gọi đúng thứ tự hủy:
// 		~Derived() → in ra "Derived's destructor"
// 		~Base() → in ra "Base's destructor"
//Nếu hàm hủy của Base không phải là ảo, chỉ có ~Base() được gọi, dẫn đến rò rỉ bộ nhớ cho phần Derived.