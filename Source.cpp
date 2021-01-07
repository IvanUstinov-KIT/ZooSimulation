#include <iostream>
#include <vector>
using namespace std;

struct Animals {
	string NameAnimal;
	int PriceAnimal;
	string NameFeed;
	int PriceFeed;
};
struct Ary {
	vector<Animals> Ani;
	Ary() {
		Ani.resize(50);
	}
};
int main() {
	setlocale(0, "ru");
	int massiv[50];
	int w = -1;
	double FullPrice = 0;
	vector<Ary> qq;
	qq.resize(50);
	int q = 1;
	int anim = 0;
	int counter = -1;
	int Who = 15;
	while (q != 0) {//adding animals and food
		cout << "\nDo you want to add a new animal?\n if yes, enter 1, if no 0: ";
		cin >> q;
		if (q != 0) {
			counter++;
			anim = counter;
			cout << "\nAdd a type of animal: ";
			cin >> qq[0].Ani[counter].NameAnimal;
			cout << "\nAdd a price for the - " << qq[0].Ani[counter].NameAnimal << ": ";
			cin >> qq[0].Ani[counter].PriceAnimal;
			cout << "\nThe animal was added succsessfully!";
			cout << "\nAdd a type of feed for - " << qq[0].Ani[counter].NameAnimal << ": ";
			cin >> qq[0].Ani[counter].NameFeed;
			cout << "\nAdd a price for - " << qq[0].Ani[counter].NameFeed << ": ";
			cin >> qq[0].Ani[counter].PriceFeed;
			cout << "\nThe feed was added successfully!";
		}
	}
	cout << "\n\nwow! There are these types of animals: ";//output of added animals
	for (int i = 0; i <= anim; i++) {
		cout << endl << i + 1 << "." << qq[0].Ani[i].NameAnimal << "\nfor the price - " << qq[0].Ani[i].PriceAnimal;
	}
	cout << "\n\nwow! There are these types of feeds: ";//output of added feeds
	for (int i = 0; i <= anim; i++) {
		cout << endl << i + 1 << "." << qq[0].Ani[i].NameFeed << " дл€ " << qq[0].Ani[i].NameAnimal << "\nfor the pice " << qq[0].Ani[i].PriceFeed;
	}
	int jj = -1;
	cout << "\n\nWe need to put each animal in unique cage! ";
	for (int j = 1; j <= 10; j++) {
		massiv[j - 1] = w;
		if (Who == 66)
			break;
		jj++;
		w = -1;
		for (int i = 0; i <= 10; i++) {
			cout << "\n\nWhich animal to put in " << j << " cage?";
			cout << "\nInput a number from the list above and put an Enter ;";
			cout << "\nIf you added enough animals in cage " << j << " input 0;";
			cout << "\nIf you do not want to put any other animals in cages input 66: ";
			cin >> Who;
			if (Who == 0)
				break;
			if (Who == 66)
				break;
			w++;
			int rr = Who - 1;
			switch (Who)
			{
			case 1:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 2:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 3:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 4:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 5:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 6:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 7:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 8:qq[j].Ani[i] = qq[0].Ani[rr];
				break;
			case 9:qq[j].Ani[i] = qq[0].Ani[rr];
				break;

			default:cout << "\nThis type of animal does not exist!";
				break;
			}
		}
	}
	/*while (q != 1) {
		counter = -1;
		cout << "\ncontinue\nDo you want to add a new feed for the animals?\n if yes, input 0, if no input 1: ";
		cin >> q;
		if (q != 1) {
			counter++;
			cout << "\nInput a name of feed: ";
			cin >> Fee[counter].NameFeed;
			cout << "\nFor which animal does it: ";
			for (int i = 0; i <= anim; i++) {
				cout << i + 1 << "." << qq[0].Ani[i].NameAnimal
			}
			cin >> Fee[counter].ForAnimalName;
			cout << "\nInput price for the feed - " << "'" << Fee[counter].NameFeed << "': ";
			cin >> Fee[counter].PriceFeed;
			cout << "\nThe feed was successfully added!";
		}
	}*/
	for (int j = 1; j <= jj + 1; j++) {//input all cages with the animals in them
		cout << "\n\nIn " << j << " cage located:";
		for (int i = 0; i <= massiv[j]; i++) {
			cout << endl << qq[j].Ani[i].NameAnimal;
		}
	}
	int EE;//sales implementation
	int SS;
	int TT;
	for (int j = 0; j <= 20; j++) {
		cout << "\n\nWould you like to sell anything?\nIf you would like to sell an animal - input 1;";
		cout << "\nIf you would like to sell a feed - input 2;";
		cout << "\nIf you would like to summarize sales - input 0: ";
		cin >> EE;
		if (EE == 1) {
			for (int j = 1; j <= jj + 1; j++) {//output all cages with animals in them
		cout << "\n\nIn " << j << " cage located:";
		for (int i = 0; i <= massiv[j]; i++) {
			cout << endl << qq[j].Ani[i].NameAnimal;
		}
	}
			cout << "\n\nFrom which cage? Input a number from the list above ¬ведите номер клетки из списка выше: ";
			cin >> SS;
			cout << "\n In choosen cage located these animals: ";
			for (int i = 0; i <= massiv[SS]; i++) {
				cout << endl << i + 1 << ". " << qq[SS].Ani[i].NameAnimal << "\nfor the price - " << qq[SS].Ani[i].PriceAnimal;
			}
			cout << "\n\nWhich animal would you like to sell?\nInput a number from the list above: ";
			cin >> TT;
			cout << endl << qq[SS].Ani[TT - 1].NameAnimal << " - great choice!\n\nThe animal sold!";
			FullPrice = FullPrice + qq[SS].Ani[TT - 1].PriceAnimal;
			for (TT ; TT <= massiv[SS]; TT++) {
				qq[SS].Ani[TT - 1] = qq[SS].Ani[TT];
			}
			massiv[SS] = massiv[SS] - 1;
		}
		if (EE == 2) {
			for (int j = 1; j <= jj + 1; j++) {//output available animals
				cout << "\n\nThere are these types of feeds:";
				for (int i = 0; i <= anim; i++) {
					cout << endl << i + 1 << "." << qq[0].Ani[i].NameFeed << " for " << qq[0].Ani[i].NameAnimal << "\nfor the price " << qq[0].Ani[i].PriceFeed;
				}
			}
			cout << "\n\nWhich feed would you like to sell? Input a number from the list above: ";
			cin >> SS;
			cout << endl << qq[0].Ani[SS - 1].NameFeed << " - great choice!\n\nThe feed sold!";
			FullPrice = FullPrice + qq[0].Ani[SS - 1].PriceFeed;
		}
		if (EE == 0) {
			cout << "\n\nEarned - " << FullPrice;
			cout << "\nYou are really good!\n(I would not play in monopoly with you!)";
		}
	}
}
