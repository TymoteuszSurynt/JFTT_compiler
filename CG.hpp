unsigned long long dataOffset=0;
unsigned long long dataLocation(int size){
	unsigned long long temp=dataOffset;
	dataOffset+=size;
	return temp;
}

unsigned long long codeOffset=0;
