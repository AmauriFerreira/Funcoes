//10
#include <stdio.h>

void  elem_Iguais (float v[], int n){
    int i = 0, cont = 0;
    float aux = 0;
    for (i=0; i<n; i++) {
    	aux = v[i];
        if (aux == v[i+1]){
        	cont++;
		}
    }
    printf("%d:Os elementos iguais s�o", cont);
}

int main() {
    int v[5] = {10, 20, 5, 40, 10};
    elem_Iguais(v,5);
    return 0;
}
