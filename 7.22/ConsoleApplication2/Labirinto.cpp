/*

*/

#include "stdafx.h"

void printLabirinto(const char labirinto[][12], int dim1, int dim2){
	for (int i = 0; i < dim1; i++){
		for (int j = 1; j < dim2; j++){
			printf("%c", labirinto[i][j]);
		}   
		printf("\n");
	}

} 
//v[4][12] inicio do labirinto
void mazeTraverse(char labirinto[][12], int inidim1,int inidim2){
	int i=inidim1,j=inidim2;
	//subir coluna
	if (labirinto[i][j] == '#'){
		labirinto[--i][--j] = 'X';
		mazeTraverse(labirinto[][12], i, j--);
	}

	else if(labirinto[--i][--j] == '#'){
	}
}