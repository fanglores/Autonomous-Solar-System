#include <env/env.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const char* NetVfsArgs[] = {
        "-l", "devfs /dev devfs 0"
    };
    const char* NetVfsEnvs[] = {
        "_VFS_NETWORK_BACKEND=server:VFS1",
        "_VFS_FILESYSTEM_BACKEND=server:VFS1"
    };
    ENV_REGISTER_PROGRAM_ENVIRONMENT("NetVfs", NetVfsArgs, NetVfsEnvs);

    const char* ClientEnvs[] = { "_VFS_NETWORK_BACKEND=client:VFS1", "_VFS_FILESYSTEM_BACKEND=client:VFS1" };
    ENV_REGISTER_VARS("Client", ClientEnvs);

    envServerRun();

    return EXIT_SUCCESS;
}
