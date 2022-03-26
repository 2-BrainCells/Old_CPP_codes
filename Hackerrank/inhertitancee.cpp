#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
	string firstName;
	string lastName;
	int id;

public:
	Person(string firstName, string lastName, int identification)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}
	void printPerson()
	{
		cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
	}
};

class Student : public Person
{
private:
	vector<int> testScores;

public:
	int score = 0;
	Student(string fName, string lName, int id_p, vector<int> tScore) : Person(fName, lName, id_p)
	{
		firstName = fName;
		lastName = lName;
		id = id_p;
		vector<int>::iterator iter;
		for (iter = tScore.begin(); iter != tScore.end(); iter++)
		{
			testScores = tScore;
		}
		for (int i = 0; i < testScores.size(); i++)
		{
			score = score + testScores[i];
		}
	}
	char calculate()
	{
		int sc;
		sc = score / 2;
		cout << sc;
		if (sc >= 100 && sc <= 90)
			return 'O';
		if (sc > 90 && sc <= 80)
			return 'E';
		if (sc > 80 && sc <= 70)
			return 'A';
		if (sc > 70 && sc <= 55)
			return 'P';
		if (sc > 55 && sc <= 40)
			return 'D';
		if (sc < 40)
			return 'T';
	}
};

int main()
{
	string firstName;
	string lastName;
	int id;
	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
	vector<int> scores;
	for (int i = 0; i < numScores; i++)
	{
		int tmpScore;
		cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student *s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}