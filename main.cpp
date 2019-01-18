#include <iostream>
#include "fuzzy.h"
#include "mymath.h"

using namespace std;

int main()
{
	// ‹——£
	double melee = FuzzyTriangle(18.0, -1.0, 0.0, 10.0);
	double projectile = FuzzyTrapezoid(18.0, 6.0, 10.0, 15.0, 20.0);
	double outOfRange = FuzzyGrade(18.0, 15.0, 25.0);

	cout << "Œðí      yMeleez       : " << melee << endl;
	cout << "”­ŽË      yProjectilez  : " << projectile << endl;
	cout << "Œðí”ÍˆÍŠOyOut of Rangez: " << outOfRange << endl;
	cout << endl;

	// ‘Ì—Í
	double nearDeath = FuzzyTriangle(60.0, -1.0, 0.0, 10.0);
	double critical = FuzzyTrapezoid(60.0, 6.0, 13.0, 21.0, 50.0);
	double serious = FuzzyTrapezoid(60.0, 30.0, 55.0, 65.0, 80.0);
	double minor = FuzzyTrapezoid(60.0, 50.0, 70.0, 85.0, 100.0);
	double uninjured = FuzzyGrade(60.0, 90.0, 100.0);

	cout << "•mŽ€      yNearDeathz   : " << nearDeath << endl;
	cout << "Šë“Ä      yCriticalz    : " << critical << endl;
	cout << "dÇ      ySeriousz     : " << serious << endl;
	cout << "Œy      yMinorz       : " << minor << endl;
	cout << "–³      yUninjuredz   : " << uninjured << endl;
	cout << endl;

	// ƒ‰ƒ“ƒN
	double wimp = FuzzyTriangle(10.0, -1.0, 0.0, 3.0);
	double easy = FuzzyTrapezoid(10.0, 2.0, 4.0, 6.0, 8.0);
	double moderate = FuzzyTrapezoid(10.0, 7.0, 9.0, 11.0, 14.0);
	double hard = FuzzyGrade(10.0, 12.0, 15.0);

	cout << "ÅŽã      yWimpz        : " << wimp << endl;
	cout << "Žã        yEasyz        : " << easy << endl;
	cout << "’†        yModeratez    : " << moderate << endl;
	cout << "‹­        yHardz        : " << hard << endl;
	cout << endl;

	return 0;
}