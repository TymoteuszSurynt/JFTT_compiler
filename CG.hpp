long long dataOffset=0;
long long dataLocation(int type){
	long long temp=dataOffset;
	dataOffset+=type;
	return temp;
}

long long codeOffset=0;
