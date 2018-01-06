#include <map>
#include <iostream>
#include <string>

struct variable{
	std::string name;
	unsigned long long offset;
	bool table;
	bool init;	
};

std:: map<std::string,variable> stable;
std::map<std::string,variable>::iterator it;
bool addVar(std::string name,bool table){
	it=stable.find(name);
	if(it!=stable.end()){
		return false;
	}
	struct variable a{.name = name, .offset=0, table = table, .init=false};
	stable[name]=a;
	return true;
}
unsigned long long getVar(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		return it->second.offset;
	}
	return -1;
}
bool getVarTable(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		return it->second.table;
	}
	return false;
}
void removeVar(std::string name){
	stable.erase(name);
} 
void setInit(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		it->second.init=true;
	}
}
bool getInit(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		return it->second.init;
	}
	return false;
}
