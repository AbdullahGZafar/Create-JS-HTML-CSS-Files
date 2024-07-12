#include <stdio.h>
#include <string.h>

const char* getCFriendlyPath(char path[]){
    //TODO: Should return a path with all backslashes changed to two backslashes
}

int main()
{
char fileLocation[20];
printf("Enter file location: (WIP: CURRENTLY SAVES TO TEMP DESKTOP FOLDER)");
scanf("%s", fileLocation); //TODO: Send User input to getCFriendlyPath(); Use given path to know where to create files

FILE *JS = fopen("C:\\Users\\Zafar\\Desktop\\TEMP\\script.js", "w"); //TODO: Check if you can write this using variables
FILE *CSS = fopen("C:\\Users\\Zafar\\Desktop\\TEMP\\style.css", "w");
FILE *HTML = fopen("C:\\Users\\Zafar\\Desktop\\TEMP\\index.html", "w");
char HTMLtext[] =
        "<!DOCTYPE html>\n<html lang =\"en\">\r<head>\n\t<meta charset=\"UTF-8\">\n\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n\t<title>New Project</title>\n\t<script src=\"script.js\"defer></script>\n\t<link rel=\"stylesheet\" href=\"style.css\">\n</head>\n<body>\n<!-- goodluck! -->\n</body>\n</html>";

fprintf(HTML, HTMLtext);

fclose(JS);
fclose(CSS);
fclose(HTML);
return 0;
}