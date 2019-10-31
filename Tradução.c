#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int n,m,i,j,tam=0,tamtexto, k,l,tamt;
    char ssub[1000][1000],ssubt[1000][1000],texto[1000],aux[100];

    scanf("%d %d", &n,&m);
        while(n!=0 && m!=0){
            
            for(i=0;i<n;i++){
                scanf(" %s", ssub[i]);
                scanf(" -> %s",ssubt[i]);
            }
            
            for(j=0;j<m;j++){
                scanf(" %[^\n]", texto);
                tamtexto=strlen(texto);
                
                for(i=0;i<n;i++){
                    tam=strlen(ssub[i]);
                    tamt=strlen(ssubt[i]);
                    for(k=0;k<=tamtexto-tam+1;k++){
                        if(strncmp(texto+k,ssub[i],tam)==0){
                            strcpy(aux,texto+k+tam);
                            strcpy(texto+k,ssubt[i]);
                            strcpy(texto+k+tamt,aux);
                        }
                       
                    }
                }
                printf("%s\n", texto);
            }
            
            scanf("%d %d",&n,&m);
        }
    return 0;
}
