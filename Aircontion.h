#pragma once
#include"electricity.h"
class Aircontion :public electricity
{
public:
	//コンストラクタ
	Aircontion();
	//デストラクタ
	~Aircontion();
	//食事
	void electricAppliances() override;


private:
	//商品名
	const char* name = "冷蔵庫";
	
	//役割
	const char* role = "食べ物など長期保存できるようにする物";

};
