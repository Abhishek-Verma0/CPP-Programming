#include <stdio.h>
#include <fcntl.h>    // For open(), O_CREAT, etc.
#include <unistd.h>   // For read(), write(), close()

int main() {
    int file;
    char roll[3], regno[9], buffer[20];

    // Step 1: Take user input for roll and regno
    printf("Enter roll number (2 digits): ");
    scanf("%2s", roll);
    printf("Enter registration number (8 digits): ");
    scanf("%8s", regno);

    // Step 2: Create and open the file using open with O_CREAT flag
    file = open("roll_regno.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 
    if (file < 0) {
        perror("Unable to open the file");
        return 1;
    }

    // Step 3: Write the roll and regno to the file
    write(file, roll, 2);   // Write roll number
    write(file, ",", 1);    // Write comma separator
    write(file, regno, 8);  // Write registration number
    write(file, "\n", 1);   // Newline for formatting
    close(file);            // Close after writing

    // Step 4: Open the file for reading
    file = open("roll_regno.txt", O_RDONLY); 
    if (file < 0) {
        perror("Unable to open the file for reading");
        return 1;
    }

    // Step 5: Read the data from the file and print it
    read(file, buffer, sizeof(buffer));   // Read file contents into buffer
    printf("Data from file: %s", buffer); // Print buffer contents

    close(file);  // Close after reading

    return 0;
}



