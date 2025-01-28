#pragma once
#include <stdio.h>
#include <iostream>


template<typename Type1, typename Type2>

class Type {

public:

	
	Type(Type1 number1, Type2 number2) :
		Number1(number1), Number2(number2) {}

	Type1 Min() {
		if (Number1 > Number2) {
			return static_cast<Type1>(Number2);
		}
		else {
			return static_cast<Type2>(Number1);
		}
	};

private:

	/*Type,Type2を使ってNumber1と2を定義*/
	Type1 Number1;
	Type2 Number2;
};