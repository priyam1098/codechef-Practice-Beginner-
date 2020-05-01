#include<stdio.h>
int main() 
{ 
    int T;
    int hardness, tensile_strength;
    float carbon_content;
    scanf("%d",&T);
    while(T--){
        scanf("%d %f %d",&hardness,&carbon_content,&tensile_strength);
        if(hardness>50 && carbon_content<0.7 && tensile_strength>5600){
            printf("10\n");
        }
        else if(hardness>50 && carbon_content<0.7){
            printf("9\n");
        }
        else if(carbon_content<0.7 && tensile_strength>5600){
            printf("8\n");
        }
        else if(hardness>50 &&tensile_strength>5600){
            printf("7\n");
        }
        else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600){
            printf("6\n");
        }
        else {
            printf("5\n");
        }
        } 
    return 0; 
} 
