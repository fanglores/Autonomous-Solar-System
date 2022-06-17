### Net2_with_separate_vfs Example
The example shows the basic usage of the POSIX Network API. For details please refer to the [documentation](https://click.kaspersky.com/?hl=en-us&customization=kce&link=online_help&pid=kos&version=1.0).

### Prerequisites
Before you begin, ensure that you have met the following requirements:
- You have installed the latest version of [KasperskyOS Community Edition](https://os.kaspersky.com/development/download/)
- You have Debian GNU/Linux "Buster" 10.7 x64

### Usage
To build the example and run the resulting image use the cross-build.sh script.
Server IP-address is set to 10.0.2.2 and specified using variable server_addr. Client default settings such as interface name, address, netmask and gateway address are taken from $SDK_PREFIX/sysroot-arm-kos/include/kos_net.h. You can modify these settings in client/src/client.c according to your network configuration.

© 2021 AO Kaspersky Lab
