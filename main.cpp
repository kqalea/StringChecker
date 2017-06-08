#include"main.h"
#include"FileHandler.h"

int main() {
	FileHandler file;
	file.readfilelist();
	int size = file.filelist.size();
	for(int i=0;i<size;i++){
		cout << file.filelist[i] << endl;
	}
	return 0;
}
