#include <map>
#include <iostream>
#include <string>

struct variable{
	std::string name;
	int offset;	
};

std:: map<std::string,variable> stable;
std::map<std::string,variable>::iterator it;
bool addVar(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		return false;
	}
	struct variable a{.name = name};
	stable[name]=a;
	return true;
}
long long getVar(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		return it->second.offset;
	}
	return -1;
}
void removeVar(std::string name){
	stable.erase(name);
} 

