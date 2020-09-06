#include <iostream>
#include <string>

using namespace std;

string arr_day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

string arr_lear[14] = {"История", "Иностранный язык (английский)", "Иностранный язык (немецкий)", "Физическая культура || Русский язык и культура речи", "Русский язык и культура речи", "Элементы высшей математики", "Элементы математической логики", "Теория вероятностей и математическая статистика", "Операционные системы", "Архитектура компьютерных систем", "Информационные технологии", "Основы программирования", "\t\t\t", "Технические средства информатизации"};
string show_rasp_dicr = "\n______________________________________________________";

void show_rasp(int who1, string cab1, int who2, string cab2, int who3, string cab3, int who4, string cab4, int who5, string cab5, int who6, string cab6, int who7, string cab7, int day){
  cout<<"\t\t\t"<<arr_day[day]<<show_rasp_dicr<<endl;
  cout<<"1 | 08:30 - 10:00 | "<<arr_lear[who1]<<cab1<<show_rasp_dicr<<endl;
  cout<<"2 | 10:10 - 11:40 | "<<arr_lear[who2]<<cab2<<show_rasp_dicr<<endl;
  cout<<"3 | 12:00 - 13:30 | "<<arr_lear[who3]<<cab3<<show_rasp_dicr<<endl;
  cout<<"4 | 14:00 - 15:30 | "<<arr_lear[who4]<<cab4<<show_rasp_dicr<<endl;
  cout<<"5 | 15:50 - 17:20 | "<<arr_lear[who5]<<cab5<<show_rasp_dicr<<endl;
  cout<<"6 | 17:40 - 19:10 | "<<arr_lear[who6]<<cab6<<show_rasp_dicr<<endl;
  cout<<"7 | 19:20 - 20:50 | "<<arr_lear[who7]<<cab7<<show_rasp_dicr<<endl;
}

void test_bug(){
  for(int i = 0; i < 13; i++){
    cout<<arr_lear[i]<<" "<<i<<endl;
  }
}

int main(){
  show_rasp(12, " ", 12, " ", 12, " ", 12, " ", 10, " | 806 ", 11, " | 806", 12, " ", 0);//Monday
  show_rasp(12, " ", 12, " ", 12, " ", 12, " ", 9, " | 804 ", 11, " | 804", 12, " ", 1);//Tuesday
  show_rasp(8, " | 803 ", 7, " | 803 ", 12, " ", 12, " ", 12, " ", 12, " ", 12, " ", 2);//Wednesday
  show_rasp(12, " ", 5, " | 405", 0, " | 405", 12, " ", 12, " ", 12, " ", 12, " ", 3);//Thursday
  show_rasp(1, " | 804 ", 5, " | 405", 6, " | 405", 2, " | 408", 12, " ", 12, " ", 12, " ", 4);//Friday
  show_rasp(12, " ", 3, " | 303", 13, " | 207", 12, " ", 12, " ", 12, " ", 12, " ", 5);//Saturday
  show_rasp(12, " ", 12, " ", 12, " ", 12, " ", 12, " ", 12, " ", 12, " ", 6);//Sunday

  //test_bug();
  cout<<"\n\n"<<endl;
  return 0;
}
