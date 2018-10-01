#include <iostream>
#include "String_Class.h"




int main() {

	String Hello("Hello");

	Hello.print();
	Hello.empty();
	Hello.size();
	//Hello.clear();
	Hello.empty();
	Hello.print();
	Hello = "thx";

	system("pause");
	return 1;
}