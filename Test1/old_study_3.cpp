#include <iostream>
#include <memory>
class person{
	protected:
		static int protectedv;
	public:
		void set_val(int val)
		{
			protectedv = val;
		}
		int get_val()
		{
			return protectedv;
		}
		virtual void say_hello() = 0;
};

class Someone: public person{
	public:
	void say_hello() {
		std::cout << "Hello by friend!" << std::endl;
	}
};

class Hater: public person{
	public:
	void say_hello() {
		std::cout << "Hello by Hater!" << std::endl;
	}
};
int person::protectedv = 10;

int main() {
	// Check the number of parameters
	Someone Father;
	
	//Father.set_val(123);
	std::cout << Father.get_val() << std::endl;
	Someone Dang;
	Dang.say_hello();
	Dang.set_val(8);
	std::cout << Dang.get_val() << std::endl;
	Father.set_val(12);
	std::cout << Father.get_val() << std::endl;
	std::unique_ptr<person> p (new Hater());
	
	p->say_hello();
	std::cout << p->get_val() << std::endl;
	
    return 0;
}