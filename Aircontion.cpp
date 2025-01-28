#include "Aircontion.h"
#include<stdio.h>
Aircontion::Aircontion() {
	printf("%sが作られた\n", name);
}

Aircontion::~Aircontion() {
	printf("%sが壊れた\n", name);
}

void Aircontion::electricAppliances() {
	printf("%sは%s\n", name, role);
}