#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  fstream fs_i, fs_o;

  string file_name1, file_name2;
  string line;

  cout << "input file name?" <<endl;
  cin >> file_name1;
  cout << "output file name?" << endl;
  cin >> file_name2;

  fs_i.open(file_name1, ios::in);
  fs_o.open(file_name2, ios::out);

  if(fs_i.fail()){
    cout << "file open is not successful" << endl;
    return -1;
  }

  while (fs_i >> line, !fs_i.eof()) {
    fs_o << line << endl;
  }

  fs_i.close();
  fs_o.close();

  return 0;
}
