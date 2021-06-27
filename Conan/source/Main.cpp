#include "GameQuanLi/GameConan.h"

int main() {
	srand(time(NULL));

	GameConan gameConan;
	gameConan.KhoiTaoGame();
	gameConan.Play();

	return 0;
}