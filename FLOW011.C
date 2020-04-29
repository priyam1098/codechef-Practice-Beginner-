#include <stdio.h>
#include<math.h>

int main()
{
     int T,sal;
     double Grosal,HRA,DA;
     scanf("%d",&T);
     while(T--){
         scanf("%d",&sal);
         if(sal<1500){
             HRA=.10*sal;
             DA=.90*sal;
             Grosal=sal+HRA+DA;
             printf("%.2lf\n",Grosal);
         }
         else if(sal>=1500){
             HRA=500;
             DA=.98*sal;
             Grosal=sal+HRA+DA;
             printf("%.2lf\n",Grosal);
         }
     }
    return 0;
}
