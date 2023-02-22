//Program that calculates velocity and distance travelled
# include <stdio.h>

int main(void){

    int u; //initial velocity
    int a; //acceleartion
    int t; //time taken

    puts("Lets calculate the velocity and distance travelled \n");

    puts("Enter the initial velocity:");
    scanf("%d", &u);
    puts("Enter the acceleration:");
    scanf("%d", &a);
    puts("Enter the time taken:");
    scanf("%d", &t);

    int v = u + (a * t); // v - velocity
    printf("The velocity is %d m\\s \n", v);

    int s = (u * t) + ((0.5) * a * (t * t));  //s - distance
    printf("The distance travelled is %d m \n", s);

    
}