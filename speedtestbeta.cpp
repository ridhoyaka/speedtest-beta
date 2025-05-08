#include <iostream>
#include <cstdio>
#include <sstream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <iomanip>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

void showToiletText(const string& text) {
	string command = "toilet -f pagga --metal '" + text + "'";
	system(command.c_str());
}

void showLoadingAnimation(int seconds) {
	cout << CYAN << " Connecting to the server, Please wait" << RESET;
	for (int i = 0; i < seconds; ++i) {
	cout << ".";
	cout.flush();
	sleep_for(milliseconds(500));
	}
	cout << endl;
}

void printLine(int width);

void checkSpeed() {
	showLoadingAnimation(5);

	FILE* pipe = popen("speedtest-cli --simple", "r");
	if (!pipe) {
		cerr << RED << "Sedang ada masalah, coba lagi nanti!" << RESET << endl;
		return;
	}
	char buffer[128];
	stringstream result;

	while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
		result << buffer;
	}

	pclose(pipe);

	int colWidth = 20;

	printLine(colWidth);
	cout << GREEN << "\n  Test Result : \n" << RESET;
	cout << "| " << left << setw(colWidth - 2) << "Category"
	     << "| " << left << setw(colWidth - 2) << "Score" << " |" << endl;
	printLine(colWidth);

	string line;
	while (getline(result, line)) {
	string label, value, unit;
	stringstream ss(line);
	ss >> label >>value >> unit;

	cout << "| " << left << setw(colWidth - 2) << label
	     << "| " << right << setw(colWidth - 2) << value + " " + unit << " |" << endl;
	}

	printLine(colWidth);
}

void printLine(int width) {
	cout << "+" << string(width, '-') << "+" << string(width, '-') << "+" << endl;
}

int main() {

	system("clear");

	sleep_for(milliseconds(500));

	showToiletText("SpeedTest");

	sleep_for(seconds(1));

	cout << "\n v1.0 coded by AKAY \n" << endl;
	checkSpeed();
	return 0;
}
