#!/bin/sh
ifconfig | egrep -io '([a-z0-9]{2}:){5}..'
