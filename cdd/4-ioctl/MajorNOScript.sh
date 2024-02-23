#!/bin/sh

device="ioctl"
/sbin/insmod ./$device.ko || exit 1

rm -f /dev/${device}[0-3]

major=$(awk '$2=="MyCharDevice" {print $1}' /proc/devices)

echo $major

mknod /dev/ioctl c $major 0
