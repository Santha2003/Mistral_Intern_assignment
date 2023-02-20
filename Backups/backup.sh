#!/bin/bash
SOURCE_NAME="/home/santha/Pictures/Screenshots"
DESTINATION_NAME="/home/santha/santha"
BACKUP_NAME="backup_$(date +%y-%m-%d_%H-%M-%s).tar.gz"
tar -czf "${DESTINATION_NAME}/${BACKUP_NAME}" "${SOURCE_NAME}"


