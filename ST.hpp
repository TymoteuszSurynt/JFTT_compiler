#include <map>
#include <iostream>
#include <string>

struct variable{
	std::string name;
	unsigned long long offset;
	bool table;
	bool init;
	bool iterator;
};

std:: map<std::string,variable> stable;
std::map<std::string,variable>::iterator it;
bool addVar(std::string name,bool table, bool iterator){
	it=stable.find(name);
	if(it!=stable.end()){
		return false;
	}
	if(!table){
		struct variable a{.name = name, .offset=0, table = table, .init=false, .iterator=iterator};
		stable[name]=a;
	}else{
		struct variable a{.name = name, .offset=0, table = table, .init=true, .iterator=iterator};
		stable[name]=a;
	}
	
	return true;
}
bool isIterator(std::string name){
	it=stable.find(name);
	if(it!=stable.end()){
		return it->second.iterator;
	}
	return false;
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
