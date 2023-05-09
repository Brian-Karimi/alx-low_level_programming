 a file descriptor (FD, less frequently fildes) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.
 typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.
 STDIN_FILENO-Standard Input-stdin
 STDERR_FILENO-Standard Error- stderr
 STDOUT_FILENO-Standard Output-stdout

 file descriptors index into a per-process file descriptor table maintained by the kernel, that in turn indexes into a system-wide table of files opened by all processes, called the file table. This table records the mode with which the file (or other resource) has been opened: for reading, writing, appending, and possibly other modes. It also indexes into a third table called the inode table that describes the actual underlying files.[3] To perform input or output, the process passes the file descriptor to the kernel through a system call, and the kernel will access the file on behalf of the process. The process does not have direct access to the file or inode tables.
 On Linux, the set of file descriptors open in a process can be accessed under the path /proc/PID/fd/, 
 where PID is the process identifier
 File descriptor:
  /proc/PID/fd/0 is stdin
  /proc/PID/fd/1 is stdout
  /proc/PID/fd/2 is stderr.
As a shortcut to these, any running process can also access its own file descriptors through the folders:
    /proc/self/fd 
    and
    /dev/fd
Creating file descriptors
open()
creat()[5]
socket()
accept()
socketpair()
pipe()
epoll_create() (Linux)
signalfd() (Linux)
eventfd() (Linux)
timerfd_create() (Linux)
memfd_create() (Linux)
userfaultfd() (Linux)
fanotify_init() (Linux)
inotify_init() (Linux)
clone() (with flag CLONE_PIDFD, Linux)
pidfd_open() (Linux)
open_by_handle_at() (Linux)
