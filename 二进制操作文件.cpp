#include<fstream>
#include<iostream>

int main(int argc, char** argv) {
	if (argc < 3) {
		std::cerr << "用法: 程序名 <输入文件> <输出文件>" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1], std::ios_base::binary | std::ios_base::_Nocreate);
	if (!infile) {
		std::cerr << "输入文件不存在，错误" << std::endl;
		return 1;
	}
	std::ofstream outfile(argv[2], std::ios_base::binary | std::ios_base::_Noreplace);
	if (!outfile) {
		std::cerr << "输出文件已存在，错误" << std::endl;
		return 1;
	}
	char buffer[1024];
	while (infile.read(buffer, sizeof(buffer))) {
		outfile.write(buffer, infile.gcount());
	}
	if (infile.gcount() > 0) {
		outfile.write(buffer, infile.gcount());
	}
	infile.close();
	outfile.close();
	return 0;

}