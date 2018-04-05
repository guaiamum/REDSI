#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
/* uncomment for applications that use vectors */
/*#include <vector>*/

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include "info.cpp"

using namespace std;

int main(int argc, const char **argv)
{
  string url(argc >= 2 ? argv[1] : EXAMPLE_HOST);
  const string user(argc >= 3 ? argv[2] : EXAMPLE_USER);
  const string pass(argc >= 4 ? argv[3] : EXAMPLE_PASS);
  const string database(argc >= 5 ? argv[4] : EXAMPLE_DB);
  // cout << url << " - "<< user << " - "<< pass << " - "<< database << endl;
  try {
    /* INSERT TUTORIAL CODE HERE! */
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;

    /* Create a connection */
    driver = get_driver_instance();
    // con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
    con = driver->connect(url, user, pass);
    /* Connect to the MySQL test database */
    // con->setSchema("test");
    con->setSchema(database);

    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT * FROM  `TABLE_1` LIMIT 0 , 30");
    while (res->next()) {
      cout << "\t... MySQL replies: ";
      /* Access column data by alias or column name */
      cout << res->getString("MODELO") << endl;
      cout << "\t... MySQL says: ";
      /* Access column data by numeric offset, 1 is the first column */
      cout << res->getString(1) << endl;
    }
    delete res;
    delete stmt;
    delete con;


  } catch (sql::SQLException &e) {
    /*
      MySQL Connector/C++ throws three different exceptions:

      - sql::MethodNotImplementedException (derived from sql::SQLException)
      - sql::InvalidArgumentException (derived from sql::SQLException)
      - sql::SQLException (derived from std::runtime_error)
    */
    cout << "# ERR: SQLException in " << __FILE__;
    cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
    /* what() (derived from std::runtime_error) fetches error message */
    cout << "# ERR: " << e.what();
    cout << " (MySQL error code: " << e.getErrorCode();
    cout << ", SQLState: " << e.getSQLState() << " )" << endl;

    return EXIT_FAILURE;
  }

  cout << "Done." << endl;
  return EXIT_SUCCESS;
}
