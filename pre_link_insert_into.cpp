/*从chembl抽取数据第一版*/

#include <mysql.h>
//#pragma comment(lib,"libmySQL.lib")
#include <iostream>
#include<iterator>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	MYSQL *sock;//MYSQL *sock;
	MYSQL_RES *results;
	MYSQL_ROW record;

	//前驱准备
	char *host = "localhost";
	char *user = "jsd";
	char *pass = "123456";
	char *db = "BioKB_test";

	sock = mysql_init(NULL);//mysql_init(sock);//sock = mysql_init(0);

	if (sock == NULL)
	{
		cerr << "error";
	}
	else {
		cout << "connection is built!";
	}

	if (mysql_real_connect(sock, host, user, pass, db, 0, NULL, 0) == NULL)
	{
		cerr << "error";
	}
  }
