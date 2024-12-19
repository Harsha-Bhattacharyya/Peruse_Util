#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){
  std::string ile; //file that will be read
  std::string read; //string that will be displayed
  if(argc == 2){              //checks if the number of parameters supplied via cmd is 1
        ile = argv[1];        //assigns that first value to ile
    
  std::ifstream openfile(ile);


    if(openfile.is_open())
   {
    while(! openfile.eof())
   { getline(openfile, read); //using getline rather than cin because whitespace
   if(read == " "){std::cout << " ";}
   else{
    std::cout << read << std::endl;}
   }
     }
    openfile.close();}
  else{
    std::cerr << "ERROR: NOT ENOUGH OR TOO MANY PARAMETERS";
  }

  return 0;
}
