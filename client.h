#include<string>
class CLIENT {
public:
	std::string servername;
	CLIENT(std::string a);
	void changeServerName(std::string c);
	~CLIENT();
	static int clientNum;
};

