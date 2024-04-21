#include<iostream>
#include<random>

using namespace std;


class Node
{
   public:
string value;
Node* next;

Node(string value)
{
this->value = value;
next = nullptr;
}

};


class Stack
{
Node* top;
int height;

public:
Stack(string value)
{

Node* newNode = new Node(value);
top = newNode;
height = 1;
}

void push(string value)
{
Node* newNode = new Node(value);
if(height == 0)
{
top = newNode;
height = 1;
}
else
{
newNode->next = top;
top = newNode;
height++;

}


}

void printList()
{
Node* temp = top;

while (temp)
{
cout << temp->value << ":" << GenerateKey() << " \n ";
temp = temp->next;

}

};




string GenerateKey()
{
   const int pitches = 12;
string KEYS[pitches] = { "C","Db/C#", "D" , "Eb","E", "F", "F#/Gb", "G","Ab/G#","A","Bb/A#","B"};

random_device rd;
uniform_int_distribution<int> dist(1,12);

int i = dist(rd);

string results =KEYS[i];

return results;


}

};


int main()
{

Stack* stack = new Stack("Anointing fall on me");
stack->push("At the cross");
stack->push("Falling in love with jesus");
stack->push("Honest offering");
stack->push("Oh the blood of jesus (congregational style)");
stack->push("Lead me to that rock(hezekiah walker)");
stack->push( "The blood will never lose it's power");
stack->push("Battlefield");
stack->push("Is your all on the alter");
stack->push("Sunday morning medley smokie norful");
stack->push("Near the cross");
stack->push(" Alleluia smokie norful");
stack->push(" Oh how I love jesus");
stack->push("What a friend we have in jesus");
 

stack->printList();

return 0;
};


// FEATURES TO ADD
//ADD DATABASE
/* create record of what was practiced 
   scale tempo
   song and key
   duration of practice 


*/
/* CREATE A SHUFFLE ALGORITHM */


/* Have a goal feature and input things to practice */
/* timer menu
   Create a template to reuse in the future
*/