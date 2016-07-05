#include <stdio.h>
#include <conio.h>
int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int result = -1;
    for(int i=0;i<N;i++){
    	long total1 = 0;
    	long total2 = 0;
    	for(int j = 0;j<N;j++){
    		if(j >= 0 && j < i){
    		total1 += A[j];
			}
			if(j > i && j < N){
	    		total2 += A[j];
			}	
		}
    	if(total1 == total2){
    		return i;	
		}
    }
    return result;
}
int main(){
	int A[]= {-1, 3, -4, 5, 1, -6, 2, 1};
	printf("%d ",solution(A,8));
}
// 82% 
