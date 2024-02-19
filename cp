

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ git init
Initialized empty Git repository in C:/Users/Sandhya/Desktop/finalgit/cherry/.git/

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ vi a.txt

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ git add .

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ git commit -m"g"
[master (root-commit) 7995c3d] g
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 a.txt

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ git checkout -b n1
Switched to a new branch 'n1'

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ vi a.txt

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ vi a.txt

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ git add .
warning: in the working copy of 'a.txt', LF will be replaced by CRLF the next time Git touches it

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ git commit -m"aa"
[n1 f6f4caa] aa
 1 file changed, 2 insertions(+)

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ cat a.txt
giii
ffffffff

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ vi a.txt

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ git add .
warning: in the working copy of 'a.txt', LF will be replaced by CRLF the next time Git touches it

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ git commit -m"fd"
[n1 6da2a33] fd
 1 file changed, 1 insertion(+)

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ git log --oneline
6da2a33 (HEAD -> n1) fd
f6f4caa aa
7995c3d (master) g

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (n1)
$ git checkout master
Switched to branch 'master'

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ cat a.txt

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ git cherry-pick 7995c3d
The previous cherry-pick is now empty, possibly due to conflict resolution.
If you wish to commit it anyway, use:

    git commit --allow-empty

Otherwise, please use 'git cherry-pick --skip'
On branch master
You are currently cherry-picking commit 7995c3d.
  (all conflicts fixed: run "git cherry-pick --continue")
  (use "git cherry-pick --skip" to skip this patch)
  (use "git cherry-pick --abort" to cancel the cherry-pick operation)

nothing to commit, working tree clean

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master|CHERRY-PICKING)
$ git cherry-pick f6f4caa
[master 82eff88] aa
 Date: Mon Feb 19 11:14:28 2024 +0530
 1 file changed, 2 insertions(+)

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$ cat a.txt
giii
ffffffff

Sandhya@LAPTOP-PNCRG48N MINGW64 ~/Desktop/finalgit/cherry (master)
$
