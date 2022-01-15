#!/bin/sh
set -o errexit
set -o nounset

# /dev/pts/<ID> for qemu
PORT=$1
slattach -p slip -L -s 38400 "$PORT" &
while ! ifconfig -a | grep -q sl0; do sleep 1; done
ifconfig sl0 192.168.1.9 pointopoint 192.168.1.10 netmask 255.255.255.0 mtu 1024
ifconfig -a
route add 192.168.1.10 sl0
route -n

