#include"game.h"
using namespace std;

int main() {
	Game game;
	game.welcome();

	cout<<"Please Enter To Continue:";
	cin.get();

	game.showAllPlayers();

	cout<<"Please Enter To Continue:";
	cin.get();

	game.selectPlayers();
	game.showTeamPlayers();

	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	cout<<"Please Enter To Toss:";
	cin.get();

	game.toss();
	game.startFirstInnings();
    game.startSecondInnings();
    game.showMatchSummary();

	return 0;
}


