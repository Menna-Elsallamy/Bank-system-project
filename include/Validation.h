#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>
using namespace std;
class Validation
{
public:
	static bool name(string Name) {
		if (Name.size() < 3 || Name.size() > 20) {
			return false;
		}
		for (int i = 0; i < Name.size(); i++) {
			if (!isalpha(Name[i])) {
				return false;
			}
		}
		return true;

	}
	static bool password(string Password) {
		return(Password.size() >= 8 && Password.size() <= 20);
	}
	static bool balance(double Balance) {
		return (Balance >= 1500);
}
	static bool salary(double Salary) {
		return(Salary >= 5000);
	}
};

#endif // VALIDATION_H
