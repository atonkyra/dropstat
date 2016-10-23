#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>

int open(const char *pathname, int flags) {
    int result;
    int (*next_open)(const char *pathname, int flags);
    next_open = dlsym(RTLD_NEXT, "open");
    if(strncmp(pathname,"/proc/vmstat", 12) == 0) {
        result = next_open("vmstat.fake", flags);
    } else {
        result = next_open(pathname, flags);
    }
    return result;
}
