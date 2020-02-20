# Git Tutorial #

### What is git? ###

* Version control system to be able to work with the same project simultaneously in a smooth way :D

* https://en.wikipedia.org/wiki/Git

* Sites that is built on git:
** Github
** Bitbucket

### How to download the repository? ###

There is multiple way to get access to a git repository
- Usually you clone it from the specific domain where the repository is created
- Downloads varies dependet on what site you use or in at what company you are. The principle is however the same.

* To download from this repository you have to click on the clone button in the top right corner.
* Copy the link that pops up and open a commandline terminal. (If you use windows... god help us....)
* On linux:
* create a folder ex. <gitTutorial> at a good location on your computer
* cd into the folder <gitTutorial>, paste the link in the terminal and press enter (you might need to copy your bitbucket password in case you haven't changes your .gitconfig file)

### Working with git ###

* Congratulations, you have now copied my malware to your computer...
* Basic thought of Git is to copy the project code from a shared remote repository to your local computer, work with the code and then upload your changes to the repository again.  
* To work with this efficiently and avoid uneccessary headache for you and your friends there is a feature in git that is called branches. The main project code is on the Master Branch which should always work ALWAYS!!! and then you when you clone the code to your local computer you create a local branch that you work against. When you are finished push your changes to the Master branch example:
![Alt text](gitflow1.png)

Example of commands to to this procedure would be:

git pull (updates your local branch)
"drunk coding"
git commit
git push origin master

What is happening on your computer is that when you clone down the master branch you will create a local master branch. This branch is a copy of "real master branch" from that specific time that you cloned it. Since many people are updating master with their fixes, your current master might not be updated to the remote master when you are done with your changes which will end up in a merge conflict.

To avoid this, a good idéa is to have your local master clean and make sure that it is updated with real master before you push your changes    

### Who do I talk to? ###
* Repo owner or admiu
* Other community or team contac