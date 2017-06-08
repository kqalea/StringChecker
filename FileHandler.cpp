#include"FileHandler.h"

void FileHandler::readfilelist(void){
	string line;
	ifstream file("filelist.txt");
	if(file.is_open()){
		while(getline(file, line)){
			this->filelist.push_back(line);
		}
	}
	file.close();
}
