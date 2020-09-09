#include <iostream>
#include <rr.h>
#include <CodLogick.h>

using namespace std;


int main(int argc, char *argv[]){
  to_day(day());
  for (int i = 0; i < argc; i++) {
        // Выводим список аргументов в цикле
        cout << "Argument " << i << " : " << argv[i] << endl;
        str_com = argv[i];
        if(str_com == "f")
            all_day();
        if(str_com == "d")
            test_bug();
        if(str_com == "--help")
  }

  to_day(day());

  cout<<"\n\n"<<endl;
  return 0;
}
