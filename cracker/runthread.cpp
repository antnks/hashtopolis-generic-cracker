#include "runthread.h"
#include <utility>
#include <QProcess>
using namespace std;

RunThread::RunThread(int type, QString attack, QString hashlist, long long skip, long long length, int timeout)
{
	this->type = type;
	this->attack = std::move(attack);
	this->skip = skip;
	this->length = length;
	this->hashlist = std::move(hashlist);
	this->timeout = timeout;
}

void RunThread::run()
{
	if(this->type != 0)
	{
		cerr << "Invalid attack type!" << endl;
		return;
	}
	else if(this->hashlist.length() == 0)
	{
		cerr << "No hashlist provided!" << endl;
		return;
	}

	// TODO: replace echo with the actual command that feeds dictionary
	QString cmd = "echo " + QString::number(skip);

	QProcess process;
	process.setProcessChannelMode(QProcess::ForwardedChannels);
	process.start(cmd);
	process.waitForFinished(-1); // will wait forever until finished
	
	cout << "STATUS 10000 0" << endl;

}
