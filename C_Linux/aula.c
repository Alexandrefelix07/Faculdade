#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[]){
	MPI_Init(NULL,NULL);
	int size, rank;
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	printf("OI, EU sou o processo %d de %d\n", rank, size);
    	getchar();
	MPI_Finalize();

    return 0;
}
