#pragma once
#include <string.h>
#include <iostream>
#ifndef STRING_CLASS
#define STRING_CLASS

typedef unsigned int uint;

class String {
private:

	 char* str = nullptr;
	uint new_allocated = 0;

public:

	String( char* string):str(string), new_allocated(strlen(string)) {};

	String(String &string) :str(string.str), new_allocated(strlen(string.str)) {};

	String(){};


public:

	bool empty() const {
		if (str != NULL) {
			return false;
		}
		else
			return true;
	}

	uint size() const {
		return strlen(str);
	}

	void clear() {
		str = nullptr;
		new_allocated = 0;
	}
	
	void print() {
		if (str!= NULL)
		std::cout << str << std::endl;
	}

public:

	void operator=(const String &string) {
		void clear();
		new_allocated=strlen(string.str);
		str = (string.str);

	}
	
	void operator+(const String &string) {
		if (str != NULL) {
			strcat(str, string.str);
			new_allocated += string.new_allocated;
		}
		else{
			strcpy(str, string.str);
			new_allocated = string.new_allocated;
		}
	}

	bool operator == (const String &string) {

	}

};
#endif // !1
