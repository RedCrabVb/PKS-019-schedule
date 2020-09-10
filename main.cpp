#include <iostream>
#include "CodLogick.h"

using namespace std;


int main(int argc, char *argv[]){
  to_day(day());

  for (int i = 0; i < argc; i++) {
        str_com = argv[i];
        if(str_com == "f" || str_com == "-f")
	    following(day());
        if(str_com == "d" || str_com == "-d")
            test_bug();
	if(str_com == "a" || str_com == "-a")
	    all_day();
        if(str_com == "help" || str_com == "--help")
	   cout<<"-a - all day\n-d debug\n-f following"<<endl;
  }

  cout<<"\n\n"<<endl;
  return 0;
}
