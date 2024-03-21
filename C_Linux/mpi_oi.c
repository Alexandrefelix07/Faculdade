#include <stdio.h>
#include <mpi.h>

 int main (int argc,char*argv[]){
     int size,rank;
     MPI_Init(&argc,&argv);
     MPI_Comm_size(MPI_COMM_WORLD, &size);
     MPI_Comm_rank(MPI_COMM_WORLD, &rank);
      if(rank ==0){ 
         printf("mestre\n");
         }else{
         printf("escravo\n");
      }
 MPI_Finalize();
 return 0;
}
