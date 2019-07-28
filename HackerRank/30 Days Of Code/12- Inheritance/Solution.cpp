#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};
class Student :  public Person{

    private:

        vector<int> testScores; 

    public:

          Student(string firstName, string lastName, int id, vector<int>scores):Person(firstName,  lastName,  id){
           testScores=scores;
          

        };

        char calculate();
};
char Student::calculate()
{ int Fresult=0;

    vector<int>::iterator it=testScores.begin();

    for(int i=0;i<testScores.size();i++)

{

Fresult=Fresult+*it;
it++;

}

int result=Fresult/testScores.size();
if(result>=90&&result<=100)

return 'O';

else if(result>=80&&result<90)

return 'E';

else if(result>=70&&result<80)

return 'A';

else if(result>=55&&result<70)

return 'P';

else if(result>=40&&result<55)

return 'D';

else if(result<40)

return 'T';
else 
return 0;

}




int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}