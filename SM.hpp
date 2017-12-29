#include <vector>

/*OPERATIONS internal*/
enum codeOptions{
	GET,
	PUT,
	LOAD,
	LOADI,
	STORE,
	STOREI,
	ADD,
	ADDI,
	SUB,
	SUBI,
	SHR,
	SHL,
	INC,
	DEC,
	ZERO,
	JUMP,
	JZERO,
	JODD,
	HALT
};
/*OPERATIONS external*/
	
/*CODE Array*/

struct instruction{
	enum codeOptions co;
	int arg;
	int cost;
};
std::vector<instruction> instructions;
std::string decodeEnum(enum codeOptions option){
	switch(option){
		case GET:
			return "GET";
		case PUT:
			return "PUT";
		case LOAD:
			return "LOAD";
		case LOADI:
			return "LOADI";
		case STORE:
			return "STORE";
		case STOREI:
			return "STOREI";
		case ADD:
			return "ADDI";
		case SUB:
			return "SUB";
		case SUBI:
			return "SUBI";
		case SHR:
			return "SHR";
		case SHL:
			return "SHL";
		case INC:
			return "INC";
		case DEC:
			return "DEC";
		case ZERO:
			return "ZERO";
		case JUMP:
			return "JUMP";
		case JZERO:
			return "JZERO";
		case JODD:
			return "JODD";
		case HALT:
			return "HALT";
		
	}
}
void changeOperation(int id, int arg){
	instructions.at(id).arg=arg;
}
void addOperation(enum codeOptions option, int arg){
	struct instruction temp{};
	temp.arg=arg;
	switch(option){
		case GET:
			temp.co=GET;
			temp.cost=100;
			instructions.push_back(temp);
			break;
		case PUT:
			temp.co=PUT;
			temp.cost=100;
			instructions.push_back(temp);
			break;
		case STORE:
			temp.co=STORE;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case STOREI:
			temp.co=STOREI;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case LOAD:
			temp.co=LOAD;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case LOADI:
			temp.co=LOADI;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case ADD:
			temp.co=ADD;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case ADDI:
			temp.co=ADDI;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case SUB:
			temp.co=SUB;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case SUBI:
			temp.co=SUBI;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case SHR:
			temp.co=SHR;
			temp.cost=1;
			instructions.push_back(temp);
			break;
		case SHL:
			temp.co=SHL;
			temp.cost=1;
			instructions.push_back(temp);
			break;
		case INC:
			temp.co=INC;
			temp.cost=1;
			instructions.push_back(temp);
			break;
		case DEC:
			temp.co=DEC;
			temp.cost=1;
			instructions.push_back(temp);
			break;
		case ZERO:
			temp.co=ZERO;
			temp.cost=1;
			instructions.push_back(temp);
			break;
		case JUMP:
			temp.co=JUMP;
			temp.cost=1;
			instructions.push_back(temp);
			break;
		case JZERO:
			temp.co=JZERO;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case JODD:
			temp.co=JODD;
			temp.cost=10;
			instructions.push_back(temp);
			break;
		case HALT:
			temp.co=HALT;
			temp.cost=0;
			instructions.push_back(temp);
			break;
		
	}
}
