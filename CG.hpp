int dataOffset=0;
int dataLocation(int type){
	int temp=dataOffset;
	dataOffset+=type;
	return temp;
}
