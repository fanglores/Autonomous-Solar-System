# Autonomous-Solar-System
## Definition
System, what detects the sun on the sky and if it will be closed with clouds soon, it will turn on the generators.  
Developed for efficient way of running solar panels systems. Used SOLID principles and design patterns such as Strategy

#### Quick Access
[Basic Implementation](shared) - folder, containing basic system implementation  
[KasperkyOS Implementation](shared/kos_udp) - folder, containing KasperskyOS system implementation for the server part  
  
[Client Implementation](shared/client/src)  
[UDP Implementation](shared/common)  
[Server Implementation](shared/server/src)  

## Repository structure
    .
    ├── shared/                 # shared folder used in the docker containers, contains basic implementation
    |    ├── client             # client code
    |    ├── common             # common code for both (UDP sockets)
    |    ├── server             # server code
    |    ├── CMakeLists.txt     # default CMake file
    |    ├── cross-build.sh     # compile & run script
    |    ├── kos-init.sh        # script used for the folder below for initializing ports
    |    |
    |    └── kos-udp/           # contains the KasperskyOS implementation
    |
    ├── DockerCommands.txt      # contains all required docker commands
    ├── Dockerfile              # dockerfile used for building OpenCV docker image
    ├── start_kos.sh            # script for starting the KasperskyOS docker container
    ├── start_opencv.sh         # script for starting the OpenCV docker container
    |
    ├── LICENSE
    └── README.md
