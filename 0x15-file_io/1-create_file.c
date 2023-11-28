#include "main.h"
int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t write_bytes;

    if(!filename)
        return(-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600 );
    if(fd == -1)
        return(-1);
    
    if(text_content != NULL)
        {
            write_bytes = write(fd, text_content, strlen(text_content));
            if(write_bytes == -1)
            {
                return(-1);
            }
        }
    close(fd);
    return(1);
}
