# dropstat
simple lazy script that hooks /proc/vmstat open call

## example usage
```
$ make
$ echo 'yay' > vmstat.fake
$ LD_PRELOAD=./dropstat.so cat /proc/vmstat
yay
```
