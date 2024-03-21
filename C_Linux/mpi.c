#include <stdio.h>
#include <mpi.h>
 
int size, rank, msg, source, dest, i,tag;
 
int main(int argc, char *argv[]){
   MPI_Status stat;
 
   MPI_Init(&argc,&argv);
   MPI_Comm_size(MPI_COMM_WORLD,&size);
   MPI_Comm_rank(MPI_COMM_WORLD,&rank);


	if(rank==0){
   	msg = 42; dest = 1; tag = 0;
	for(dest =1; dest < size ;dest++){
   	MPI_Send(&msg, 1, MPI_INT, dest, tag, MPI_COMM_WORLD);
   	printf("Processo %d enviou %d para %d.\n", rank, msg, dest);
}
	}else{
 
	
		source = 0; tag = 0;
		MPI_Recv(&msg, 1, MPI_INT, source, tag, MPI_COMM_WORLD, &stat);
		printf("Processo %d recebeu %d de %d.\n", rank, msg, source);
	
}
 
   MPI_Finalize();
}
