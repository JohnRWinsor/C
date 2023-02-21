#include <stdio.h>
#include "sqlite3.h"

  static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
  }
//int argc is the number of characters in the string
  int main(int argc, char **argv){
//pointer to the database
    sqlite3 *db;
// pointer for an error massage
    char *zErrMsg = 0;
    int rc;
// if the count dosent equal 3 the code will run this
    if( argc!=3 ){
      fprintf(stderr, "Usage: %s DATABASE SQL-STATEMENT\n", argv[0]);
      return(1);
    }
    rc = sqlite3_open(argv[1], &db);
    if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      sqlite3_close(db);
      return(1);
    }
    // use this for the error code when 0 is returned
    rc = sqlite3_exec(db, argv[2], callback, 0, &zErrMsg);
    if( rc!=SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    }
    sqlite3_close(db);
    return 0;
  }
