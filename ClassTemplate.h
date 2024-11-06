#pragma once
#include <stdio.h>
#include <iostream>

//クラス名「TemplateClass」でテンプレートを定義
template<typename Type1, typename Type2>

class TemplateClass {

public:

	//コンストラクタ
	TemplateClass(Type1 number1, Type2 number2) :
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

	//Type,Type2の定義
	Type1 Number1;
	Type2 Number2;
};

