#include "GitMaster.h"

/**
 * changeBranch - function to change branch
 * @branch: branch name
 */

void changeBranch(char *branch)
{
	char *cmd = "git", *args[4];
	
	args[0] = "git";
	args[1] = "checkout";
	args[2] = branch;
	args[3] = NULL;

	_fork_excute(cmd, args);
}
