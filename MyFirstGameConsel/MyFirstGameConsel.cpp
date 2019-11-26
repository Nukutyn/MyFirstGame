
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

enum Race { Human = 0, Elf, Draft, Dark_elf, Nord, Katget };
enum Class{Assasin,Knife,Archer,Visart,Muschect,};
enum Gender{Man,Woman};
enum Weapon{};
enum Plate{};
enum Move { Stop = 0, Up, Down, Left, Right };
bool GameOver{ false };
vector<string>currentMap;

struct Character//персонаж
{
	string name{ "Tester" };
	Race chRace{ Human };
	Class chClass{ Assasin };
	Gender chGender{ Man };
	double chHp{ 250.00 };
	double chAttac1{ 350.00 };
	double chAttac2{ 150.00 };
	double chAttac3{ 50.00 };
	double chspeed{ 3 };//скорость хода перса
	double chVinoslivost{ 500.00 };
	Move chMove{Stop};
};

void Setup();
void Input();
void Logic();
int main()
{
	Character character;//сам персонаж

}
void Setup()
{

}
void Input()
{

}
void Logic()
{

}