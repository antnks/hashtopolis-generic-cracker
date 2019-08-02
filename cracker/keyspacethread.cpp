#include "keyspacethread.h"
#include <utility>
using namespace std;

KeyspaceThread::KeyspaceThread(int type, QString value)
{
	this->type = type;
	this->value = std::move(value);
}

void KeyspaceThread::run()
{
	if(this->type != 0)
	{
		cerr << "Invalid attack type!" << endl;
		return;
	}

	// TODO: return actual dictionary size
	cout << "1" << endl;

}
