#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>

#define SHM_KEY 12345  // Key for shared memory

int main() {
    // Create shared memory segment
    int shmid = shmget(SHM_KEY, 1024, 0666 | IPC_CREAT);
    if (shmid == -1) {
        perror("shmget failed");
        return 1;
    }

    // Attach to the shared memory
    char *shared_memory = (char *)shmat(shmid, NULL, 0);
    if (shared_memory == (char *)-1) {
        perror("shmat failed");
        return 1;
    }

    printf("Server: Writing to shared memory...\n");

    // Write message to shared memory
    const char *message = "Hello from server!";
    strcpy(shared_memory, message);

    printf("Server: Message written, waiting before exit...\n");
    
    // Sleep for 10 seconds to give client time to read
    sleep(10);

    // Detach from shared memory
    shmdt(shared_memory);

    // Remove the shared memory segment
    shmctl(shmid, IPC_RMID, NULL);

    printf("Server: Exiting and cleaned up shared memory.\n");

    return 0;
}
