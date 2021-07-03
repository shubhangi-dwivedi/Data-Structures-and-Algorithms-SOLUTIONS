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
        Student(string firstName, string lastName, int id, std::vector<int>& scores)
            : Person(firstName,lastName,id), testScores(scores) {}
        
        char calculate() {
            int average=0;
            for(auto score : testScores) {
                average += score;
            }
            average=average/testScores.size();
            return(average> 89 ?'O': average>79 ? 'E' : average> 69 ? 'A' : average> 54 ? 'P' :average>              39 ? 'D' : 'T' );
            }
        
};

int main() {