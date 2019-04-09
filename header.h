#IFNDEF HEADER_H
#DEFINE HEADER_H

typedef struct prak_s {
	int ada; // 0 kalo belum ditentukan ada praktikum, 1 kalo ada praktikum
	int kode;
	int asist;
} prak_t;

int conPrak(char x[6]){
	if (strcmp(x, "EB2200")==0){
		return 100;
	} else if (strcmp(x, "EL2205")==0){
		return 200;
	} else if (strcmp(x, "EL2208")==0){
		return 300;
	}
}

int conRom(char x[2]){
	if (strcmp(x, "A1")==0){
		return 11;
	} else if (strcmp(x, "A2")==0){
		return 12;
	} else if (strcmp(x, "A3")==0){
		return 13;
	} else if (strcmp(x, "A")==0){
		return 10;
	} else if (strcmp(x, "B")==0){
		return 20;
	} else if (strcmp(x, "B1")==0){
		return 21;
	} else if (strcmp(x, "B2")==0){
		return 22;
	} else if (strcmp(x, "B3")==0){
		return 20;
	} else if (strcmp(x, "C")==0){
		return 21;
	} else {
		return 0;
	}
}

int conHari(char x[7]){
	if (strcmp(x, "Senin")==0){
		return 1;
	} else if (strcmp(x, "Selasa")==0){
		return 2;
	} else if (strcmp(x, "Rabu")==0){
		return 3;
	} else if (strcmp(x, "Kamis")==0){
		return 4;
	} else if (strcmp(x, "Jumat")==0){
		return 5;
	} else {
		return 0;
	}
}

int conRuang(char x[4]){
	if (strcmp(x, "LAB1")==0){
		return 1;
	} else if (strcmp(x, "LAB2")==0){
		return 2;
	} else if (strcmp(x, "LSS")==0){
		return 3;
	}else {
		return 0;
	}
	
}

#ENDIF
