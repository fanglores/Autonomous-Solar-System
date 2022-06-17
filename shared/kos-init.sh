ip tuntap add tap0 mode tap

ip addres add 10.0.2.2/22 dev tap0

ip link set tap0 up

/opt/KasperskyOS-Community-Edition-1.0.1.4/toolchain/bin/qemu-system-arm -m 2048 -machine vexpress-a15 -nographic -monitor none \
-serial stdio -netdev tap,id=net0,ifname=tap0,script=no,downscript=no -net nic,model=lan9118,netdev=net0 \
-kernel /workspace/build/einit/kos-qemu-image
