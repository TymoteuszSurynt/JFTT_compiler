long long dataOffset=0;
long long dataLocation(int size){
	long long temp=dataOffset;
	dataOffset+=size;
	return temp;
}

long long codeOffset=0;
