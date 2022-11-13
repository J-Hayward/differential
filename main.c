/* ----- INCLUDES ----- */
#include <stdio.h>
#include <windows.h>



/* ----- DEFINITIONS ----- */
#define HEIGHT 10
#define WIDTH 10



/* ----- PROTOTYPES ----- */
void printArray(float arr[HEIGHT][WIDTH]);



/* ----- MAIN FUNCTION ----- */
int main()
{
    /* ----- MAIN SETUP ----- */
    printf("Hello world");



    /* ----- INIT VARIABLES ----- */
    // Field init
    float field[HEIGHT][WIDTH], old_field[HEIGHT][WIDTH];                       // Initiate arrays here
    for (int i=1;i<HEIGHT;i++)                                                      // Sets all values for field and old_field to 0
    {
        for(int j=1;j<WIDTH;j++)
        {
            field[i][j]=0.0f;
            old_field[i][j]=0.0f;
        };
    };
    field[HEIGHT/2][WIDTH/2]=10.0f;                                             // Sets middle value to 10
    
    // While counter
    int whileCount = 1;



    /* ----- MAIN LOOP ----- */
    while (1)
    {
        printf("While Loop Count: %d\n", whileCount);
        printArray(field);
        printf("\n\n");

        
        whileCount++;

        Sleep(1000);
    }

    return 0;
}



/* ----- FUNCTIONS ----- */
void printArray(float arr[HEIGHT][WIDTH])                                       // This function is used to print the arrays to look like a matrix
{
    for (int i = 1; i < HEIGHT ; i++)
    {
        printf("[ ");                                                               // Left bracket for matrix
        for (int j = 1; j < WIDTH; j++)
        {
            if (j != 1)
            {
                printf("\t");
            }
            if (arr[i][j]<10)
            {
                printf("0%2.1f", arr[i][j]);
            }
            else
            {
                printf("%2.1f", arr[i][j]);
            }
            
        }
        printf(" ]\n");                                                             // Left bracket for matrix
    }
}