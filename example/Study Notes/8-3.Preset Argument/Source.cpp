
#include <iostream>

using namespace std;

//ぃ﹚材ま计area()盢穦笆ㄏノ箇砞ま计
//ㄏ眔pi砞﹚ 3.14狦﹚pi杠
//玥碞ㄏノ﹚ㄓ砞﹚pi
double area(double, double = 3.14);

int main(int argc, char* argv[]){


	cout << "*****Preset Argument*****" << endl << endl;

	double r, pi;

	cout << "块畖籔PI: ";
	cin >> r >> pi;

	cout << "縩(璹PI): " << area(r, pi)
		<< endl;
	cout << "縩(default): " << area(r)
		<< endl;




	cout << endl;
	system("pause");
	return 0;
}

double area(double r, double pi) {
	return r*r*pi;
}

//眤﹚ㄢ箇砞ま计礛τゲ斗猔種琌
//箇砞ま计ス瞷把计玥ㄤ娩把计ゲ斗砞﹚箇砞ま计
//┮ㄏノ箇砞ま计ゲ斗猔種ま计 皌竚抖
//ㄒ琌岿粇
//double volumn(double h = 1.0, double w = 1.0, double l);
//
//τゲ斗琌琌タ絋
//double volumn(double l, double w = 1.0, double h = 1.0);
//
//狦祘ΑいΤㄢ箇砞ま计玥祘Α㊣碞ゲ斗猔種
//箇砞ま计ㄏノ琌ま计抖パオㄓ秈︽
//ㄒ璝ΤㄧΑ
//bool setScreen(int width = 80, int height = 24, char bkcolor = ' ');
//
//玥㊣ㄧΑ璝ㄏノsetScreen('R'); 
//玥ㄤノ讽setScreen('R', 24, ' '); 
//τぃ琌setScreen(80, 24, 'R'); 
//τ㊣ㄏノsetScreen(, , 'R'); 
//硂よ猭玥琌岿粇┮箇砞ま计ざ琌ゲ斗み砞璸

