#ifndef STRING_CLASS
#define STRING_CLASS

#include <string.h>



class String {
private:

	char* str = nullptr;
	unsigned int mem_allocated = 0;

public:

	String(const char* string){
		if (string != NULL) {
			mem_allocated = strlen(string) + 1;
			str = new char[mem_allocated];
			strcpy(str,string);
		}
	};

	String(const String &string){
		if (string.str != NULL) {
			mem_allocated = string.mem_allocated;
			str = new char[mem_allocated];
			strcpy(str,string.str);
		}
	};

	String(){};

	~String(){
		if (str != NULL) 
			delete[] str;
	};

public:

	bool empty() const {
		if (str != NULL) {
			return false;
		}
		else
			return true;
	}

	unsigned int lenght() const {
		if (str != NULL) 
			return strlen(str);
	}

	void clear() {
		if (str != NULL) {
			delete[] str;
			mem_allocated = 0;
		}
	}
	
	void print() {
		if (str!= NULL)
		std::cout << str << std::endl;
	}

public:

	String operator=(const String &string) {

		
		mem_allocated=(string.mem_allocated);
		if (mem_allocated != 0) {
			delete[]str;
			str = new char[mem_allocated];
			return strcpy_s(str,sizeof(str), string.str);
		}	
		else
			return *this;
	}
	//
	//void operator+(const String &string) {
	//	if (str != NULL) {
	//		strcat(str, string.str);
	//		mem_allocated += string.mem_allocated;
	//	}
	//	else{
	//		strcpy(str, string.str);
	//		mem_allocated = string.mem_allocated;
	//	}
	//}

	//bool operator == (const String &string) {

	//}

};
#endif // !1
