#include<iostream>
using namespace std;
class connection
{
public:
virtual void connect()=0;
	virtual void query()=0;
	virtual void disconnect()=0;

};
class mysqlconnection:public connection {
public:
	void connect() {
		cout << "mysql connection" << endl;
	}
	void query() {
		cout<<"mysql query"<<endl;
	}
	void disconnect() {
		cout<<"mysql disconnect"<<endl;
	}
};
int main()
{
	  // connection c;
	mysqlconnection sql;
	sql.connect();
	sql.query();
	sql.disconnect();
	return 0;
}
