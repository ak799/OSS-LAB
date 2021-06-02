# include <stdio.h>
# include <string.h>
   
int main( )
{
    FILE *filePointer ;
    char dataToBeWritten[50] = "AK can code very efficiently";
    filePointer = fopen("ak.c", "w") ;
    if ( filePointer == NULL )
    {
        printf( "AK's linux failed to open" ) ;
    }
    else
    {
        printf("Ayyy file is opened\n") ;
        if ( strlen (  dataToBeWritten  ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;   
            fputs("\n", filePointer) ;
        }
        fclose(filePointer) ;
        printf("Data successfully written in file ak.c\n");
        printf("The file is now closed.") ;
    }
    return 0;        
}