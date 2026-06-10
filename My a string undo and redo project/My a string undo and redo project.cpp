#include <iostream>
#include"MyString.h"

using namespace std;

int main()
{
	clsMyString S1;
	cout << "\n\n\t\t\t\t\t\t\n";
	cout << "\nUndo and Redo project\n";
	cout << "----------------------------\n";

	cout << "\nS1 = "<<S1.value;
	S1.value = "Anwer";
	cout << "\nS1 = " << S1.value;

	S1.value = "Anwer1";
	cout << "\nS1 = " << S1.value;

	S1.value = "Anwer2";
	cout << "\nS1 = " << S1.value;
	
	cout << "\n\nUndo";
	cout << "\n----------------------------\n";
	S1.Undo();
	cout << "\nS1 = " << S1.value;

	S1.Undo();
	cout << "\nS1 = " << S1.value;

	S1.Undo();
	cout << "\nS1 = " << S1.value;

	
	cout << "\n\nRedo";
	cout << "\n----------------------------\n";
	
	cout << "\nS1 = " << S1.value;
	S1.Redo();
	cout << "\nS1 = " << S1.value;

	S1.Redo();
	cout << "\nS1 = " << S1.value;

	S1.Redo();
	cout << "\nS1 = " << S1.value;

	
	
	system("pause>0");
	return 0;
	
}

