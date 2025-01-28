
#include<stdio.h>
#include"ClassTemplate.h"

int main() {
	/*クラス名から型を考えて<>の中を定義*/
	Type<int, float > intFloatTemplate(15, 45.0f);
	Type<int, double> intDoubleTemplate(72, 18.0);
	Type<float, int> floatIntTemplate(1.8f, 7);
	Type<float, double> floatDoubleTemplate(17.0f, 5.5);
	Type<double, int> doubleIntTemplate(666.0, 222);
	Type<double, float> doubleFloatTemplate(326.8, 725.1f);

	std::cout << "int(15)と float(45.0f) を比べた時に小さい数を出す：" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(72)と double(18.0) を比べた時に小さい数を出す：" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(1.8f)と int(7) を比べた時に小さい数を出す：" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(17.0f)と double(5.5) を比べた時に小さい数を出す：" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)と int(222) を比べた時に小さい数を出す：" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(326.8)と float(725.1f) を比べた時に小さい数を出す：" << doubleFloatTemplate.Min() << std::endl;
	return 0;
}