// A C++ program for Dijkstra's single source shortest path algorithm. 
// The program is for adjacency matrix representation of the graph 

#include <stdio.h> 
#include "graph.h"
#include "my-graph.h"
#include <gsl/gsl_spmatrix.h>

// Number of vertices in the graph 
 
#define INT_MA 100000
// A utility function to find the vertex with minimum distance value, from 
// the set of vertices not yet included in shortest path tree 
 

// driver program to test above function 
int main() 
{ 
	/* Let us create the example graph discussed above */
    int n=25;
	gsl_spmatrix* t =gsl_spmatrix_alloc(5,5);
    //initialize_o(G->o,n);//, 'h');
    size_t i=0;
    for(i=0;i<n;i++){
        size_t m=(size_t)sqrt(n);
        if((i+1)%m!=0){
            gsl_spmatrix_set(t,i,i+1,1);
            gsl_spmatrix_set(t,i+1,i,1);
        }
        if(i+m<n){
            gsl_spmatrix_set(t,i,i+m,1);
            gsl_spmatrix_set(t,i+m,i,1);
            if(i%m!=0){
              gsl_spmatrix_set(t,i,i+m-1,1);
              gsl_spmatrix_set(t,i+m-1,i,1);
            }
        }
    }
    


	dijkstra(t,0,n); 

	return 0; 
} 
