#include <stdio.h>
#include <mpi.h>
 
int size, rank, msg, source, dest, tag;

int main(int argc, char *argv[]){
	MPI_Status stat;
 
   	MPI_Init(&argc,&argv);
   	MPI_Comm_size(MPI_COMM_WORLD,&size);
   	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
 
	if(rank==0){
        for (dest=1;dest<size;dest++){
        	msg = 42; tag = 0;
          	MPI_Send(&msg, 1, MPI_INT, dest, tag, MPI_COMM_WORLD); //mestre envia msg para escravo
          	printf("Processo %d enviou %d para %d.\n", rank, msg, dest); 	
       	}
		for (source=1;source<size;source++){
        	tag = 0;
			MPI_Recv(&msg, 1, MPI_INT, source, tag, MPI_COMM_WORLD, &stat); //mestre recebe do escravo
			printf("Processo %d recebeu %d de %d.\n", rank, msg, source);
       	}
	}else{
		source = 0; tag = 0;
		MPI_Recv(&msg, 1, MPI_INT, source, tag, MPI_COMM_WORLD, &stat); //escravo recebe do mestre   0: source
		printf("Processo %d recebeu %d de %d.\n", rank, msg, source);
		msg = msg*2;
		MPI_Send(&msg, 1, MPI_INT, 0, tag, MPI_COMM_WORLD); //o escravo envia pro mestre o valor da msg multiplicado   0:destino
		//printf("Processo %d enviou de volta %d para %d.\n", rank, msg, source);
	}
 
   	MPI_Finalize();
}
