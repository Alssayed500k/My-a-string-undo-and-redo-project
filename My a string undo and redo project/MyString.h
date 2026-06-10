#pragma once
#include<iostream>
#include<stack>


using namespace std;
class clsMyString
{
private:
	stack<string> _Undo;
	stack<string> _Redo;
	string _value;


public:


	void set(string value)
	{

		_Undo.push(_value);
		_value = value;
	}

	string get()
	{
		return _value;
	}

	void Undo()
	{
		if (!_Undo.empty())
		{
			_Redo.push(_value);
			_value = _Undo.top();
			_Undo.pop();
		}

	}
	_declspec(property(get = get, put = set)) string value;

	void Redo()
	{
		if (!_Redo.empty())
		{
			_Undo.push(_value);
			_value = _Redo.top();
			_Redo.pop();
		}

	}



};



