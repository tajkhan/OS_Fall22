# CS311 Operating Systems Projects Fall 2022
You will need knowledge about git, C programming, and Operating Systems
concepts to complete this project. If you think you lack in any of these
domains, feel free to get help from google and your friends. One thing
you cannot do it copy code from anywhere or from anyone.  

This project weights 20% of your course grade. We'll divide  it into
milestones to guage progress.  

Xv6 [1] is an adaptation of an older version of Unix used for teaching
purposes in many universities. The codebase is small enough for an
undergraduate student to understand and modify. The vanilla version
comes with a bare minimum functionality. The goal of this project is
that you understand and modify a part of this code to implement some
OS related functionality.

## Groups
You can form a group of maximum two persons.


## Milestone 1: Grouping.
You inform the instructor about the names of the members of your group
by creating a pull request to modify the [groups_info.md](./groups_info.md).
Your pull
request should insert a line in the table while respecting the format
of the table. Once the instructor merges your pull request, your group
will be assigned a group ID.  

For this you'll need to create a github account, in case you don't
have one already.


## Milestone 2: Setting up the environment:

You'll make a private fork [6][7] of this [8] xv6 repository
into your own github
account and put the link to your forked repository in the table in
[groups_info.md](./groups_info.md).
You will keep this repository private and give rights only  to
your instructor to access it. 

Your private repository is where you will be doing your work.
Create a branch whose name is your groug_id and commit and push
 your changes to that branch regularly. For each milestone you
 will create a pull request for your submission on the deadline
 day.  


**You setup your environment for Xv6 development. Please follow the
guide lines provided on the MIT website [5].**

Otherwise, you might need to  install the following components
manually:  

### Xv6 source code
This includes cloning the Xv6 [2] repository. This way you'll get the
source code for Xv6 Operating System.

But this latest version of the code is meant to run on the RISC-V
processors so you'll need to install the GNU RISC-V tool chain to be
able to compile the Xv6 code for RISC-V processors. 
### Xv6 RISC-V tool chain
You can get the GNU RISC-V tool chain from its github link [4]. 
Follow the instructions on the github page to install the tool chain.
You will target the "Newlib" version of the installation.

### Qemu
Your computer most probably does not have a RISC-V processor so you
can't run Xv6 directly on your computer. You won't want to do it even
if your computer had a compatible processor; it's very limited in
functionality!  

Therefore, you'd run Xv6 in some kind of virtual machine. Qemu [3] is an
open source virtualization software that supports many platforms
including risc-v. You can download qemu [3a], and configure and compile
it with the "riscv64-softmmu" target on your PC following instructions
on [3b] or [3c].

### The task
1. You will install the setup to get xv6 running on your PC.   
2. You will modify two user-level program files: [user/cat.c](https://github.com/mit-pdos/xv6-riscv/blob/riscv/user/cat.c) and [user/ls.c](https://github.com/mit-pdos/xv6-riscv/blob/riscv/user/ls.c) in such a way that they both can accept, optionally, the "-n" option. Without the "-n" option these programs should behave as before and whenever the option "-n" is given, they should prepend each line of their output with a line number. The line numbers restart from 1 for every file/directory provided in the command line arguments. If no file/directory names are provided and only the "-n" option is provided, then both the commands should reproduce their original behavior, as if no arguments were provided, but prepending their outputs with line numbers. For convenience, assume that the "-n" option, whenever provided, will be the first argument of the command. (20 marks)
3. It is important that you get in the habit of working regularly. You can demonstrate this by pushing regular commits of your work to your own github repository. To get full marks, your code repository should have at least 3 commits (the more the better) pushed per week spaced roughly equidistant in time and each containing substantial amounts of work. (10 marks)

### Submission
The submission instructions will be conveyed before the deadline. For the moment keep pushing commits to your own github repository.


## Milestone 3: ~~Add a system call~~ TBD.
1. You will add new system call to the OS and access it from a user
level program. The exact details will be shared after the 2nd
milestone deadline.

### Submission
The submission instructions will be conveyed before the deadline.


## Milestone 4: Modify the OS
This will be the meat of your project. The first 3 milestones were to
get you familiarized with the environment.  

Each group will select a different topic after consultation with the
instructor. Try to finalize your topic after the 2nd milestone so that
you get ample time to start working on it.

### Submission
The submission instructions will be conveyed before the deadline.

## Rubric and deadlines:

| No. | Title       | Marks | Deadline |
| --- | ----------- | ----- | ----------- |
| 1   | Milestone 1 | 10    | Wesday, 16th Nov, 2022. |
| 2   | Milestone 2 | 30    | Wesday, 23th Nov, 2022. |
| 3   | Milestone 3 | 40    | Wesday, 30th Nov, 2022. |
| 4   | Milestone 4 | 120   | Sunday, 25th Dec, 2022. |

## References
(There's something fishy with the university network. The MIT links are
accessible if you connect via your mobile hotspot.)  
1. [Xv6 (Wikiepdia)](https://en.wikipedia.org/wiki/Xv6)
2. [Xv6 (risc-v) source code](https://github.com/mit-pdos/xv6-riscv)
2a. [Xv6 (risc-v) book](https://pdos.csail.mit.edu/6.828/2022/xv6/book-riscv-rev3.pdf)
3. [QEMU](https://en.wikipedia.org/wiki/QEMU)
3a. [Qemu downlaod](https://www.qemu.org/download/)
3b. [Qemu risc-v docs](https://wiki.qemu.org/Documentation/Platforms/RISCV)
3c. [xv6 qemu setup (U of Virignia)](https://www.cs.virginia.edu/~bjc8c/class/cs6456-s20/hw5.html)
4. [GNU RISC-V tool chain](https://github.com/riscv-collab/riscv-gnu-toolchain)
5. [Tools installation for Xv6](https://pdos.csail.mit.edu/6.828/2022/tools.html)

6. [Github private fork of public repo (1)](https://gist.github.com/0xjac/85097472043b697ab57ba1b1c7530274)
7. [Github private fork of public repo (2)](https://junyonglee.me/github/How-to-make-forked-private-repository/)
8. [Fall22 OS risc-v repository](https://github.com/tajkhan/xv6-riscv-os-fall22.git)

### Github links
1. [Markdown basic syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
2. [Markdown tables](https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/organizing-information-with-tables)
3. [Github create a pull request](https://opensource.com/article/19/7/create-pull-request-github)
3. [Github private fork of public repo (1)](https://gist.github.com/0xjac/85097472043b697ab57ba1b1c7530274)
4. [Github private fork of public repo (2)](https://junyonglee.me/github/How-to-make-forked-private-repository/)


### Misc xv-6 resoruces
1. [ucr lab](https://www.cs.ucr.edu/~heng/teaching/cs179f-winter21/lab1.html)
2. [Adding a system call to xv6](https://medium.com/@mahi12/adding-system-call-in-xv6-a5468ce1b463)
3. [xv6 code annotated: partial explanations of code](https://github.com/palladian1/xv6-annotated)
3. [Series of videos explaining xv6 code](https://www.youtube.com/watch?v=fWUJKH0RNFE&list=PLbtzT1TYeoMhTPzyTZboW_j7TPAnjv9XB)

## Important
This is a live document. It will be updated from time to time.
I will send a mail everytime there is an major update so keep wathcing it.
