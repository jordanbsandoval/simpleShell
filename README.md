# Simple Shell

![Shell_holberton](./img/shell.png "shell-logo")

In computing, the term shell is used to refer to those programs that provide a user interface to access the services of the operating system. These can be graphics or plain text, depending on the type of interface they use. Shells are designed to facilitate the way in which the different programs available on the computer are invoked or executed.

It should be noted that there are 2 types of Shell and these are:

**Common text shells** like bash, emacs, Windows command prompt, among others.

**Common graphical shells** such as GNome, KDE, XFCE, LXDE, Unity, MacOS Desktop Environment, Windows Desktop, among others.


### requirements 📋

go to the test folder and compile the program

> cd ./test/

The code is compiled with the ```gcc 4.8.4``` compiler using as parameter the static library, therefore to get the executable file use the following command.


> gcc shell.c -L. -lall

or for the second command.

> gcc shell.c -L. -lall -o exe

The first command gives us an executable with the name of ```a.out``` and the second with the name of ```executable-file-name```, to run the program use the following command.

> ./a.out

or for the second command.

> ./exe

### Example of some commands that we can use.

| Command           | Descripction                                                                                 |
| ----------------- | -------------------------------------------------------------------------------------------- |
| /bin/ls           | List directory contents                                                                      |
| ./ppid            | Execute an file type executable                                                              |
| Ctrl + c          | Exit command at the shell prompt                                                             |


They work with their respective arguments.

It should also be noted that the shell also works in an interactive and non-interactive way, that is:

1. If the shell is initialized in this way, (interactive way)
```
$ ./hsh

[prompt] [plus a space] [Waiting for characters to enter]

$ (Waiting for characters to enter).
$ /bin/ls 
     *** List content in current directory ***
```

2. Using the non-interactive shell (passing commands through a pipe)

```
$ echo "Holberton" | ./hsh

The output of the program will appear as follows.

$ Holberton
(Immediately exits the program)
```

The program also analyzes errors, that is, when someone copies a command that does not exist in the operating system, the following will appear.

```
$ ./hsh

$ ldfs  ----> (A doodle was copied (command that does not exist in the operating system and the following will appear)).

hsh: 2: lsls: not found
```
Errors also appear regarding an existing command; for example

```
$ ./hsh

$ ls /home/me/jkdsf ---> (suppose this folder does not exist in the directory indicated by the absolute path).

ls: cannot access '/home/me/jkdsf': No such file or directory.
```

Author ✒️

* [Jordan Buitrago](https://github.com/jordanbsandoval)

Gratitude 🙇‍
* [Holberton](https://www.holbertonschool.com/co)  :yellow_heart:
