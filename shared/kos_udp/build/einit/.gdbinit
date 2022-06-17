set sysroot /opt/KasperskyOS-Community-Edition-1.0.1.4/sysroot-arm-kos
add-symbol-file /workspace/net2_with_separate_vfs_udp_modified/build/einit/EinitQemu-kss/ksm.module

target remote localhost:1234
