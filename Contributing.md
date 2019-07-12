# Contributing to Expert Manager

Please try and follows the things that are layed out below as it will make it easier to accept a pull request however not following the below does not necessarily exclude a pull request from being accepted.

## Git Flow

For [Expert Manager](https://www.davidghoyle.co.uk/WordPress/?page_id=1361) I use Git as the version control but I also use [Git Flow](https://www.atlassian.com/git/tutorials/comparing-workflows/gitflow-workflow) for the development cycles. The main development is undertaken in the **Development** branch with stable releases being in the **master**. All pull requests should be made from the **Development** branch, prefereably using **Feature** branches or **BugFix** branches. I've defined prefixes for these already in the `.gitconfig` file. You should submit only one change per pull request at a time to make it easiler to review and accept the pull request.

Tools wise, I generally use [SourceTree](https://www.sourcetreeapp.com/) but that does not support Git Flow's **BugFix** functionality so I drop down to the command prompt to create **BugFix** branches as SourceTree can _Finish_ any type of open branch in Git Flow.

## Creating Pull Requests

Having not done this before as I've always been the sole contributor to my repositories so I borrowed the essense of the following from the [DUnitX](https://github.com/VSoftTechnologies/DUnitX) project:

1. Create a GitHub Account (https://github.com/join);
2. Fork the [Expert Manager](https://www.davidghoyle.co.uk/WordPress/?page_id=1361)
   Repository and setup your local repository as follows:
     * Fork the repository (https://help.github.com/articles/fork-a-repo);
     * Clone your Fork to your local machine;
     * Configure upstream remote to the **Development**
       [Expert Manager](https://www.davidghoyle.co.uk/WordPress/?page_id=1361)
       repository (https://github.com/DGH2112/Expert-Manager);
3. For each change you want to make:
     * Create a new **Feature** or **BugFix** branch for your change;
     * Make your change in your new branch;
     * **Verify code compiles for ALL supported RAD Studio version (see below) and unit tests still pass**;
     * Commit change to your local repository;
     * Push change to your remote repository;
     * Submit a Pull Request (https://help.github.com/articles/using-pull-requests);
     * Note: local and remote branches can be deleted after pull request has been accepted.

**Note:** Getting changes from others requires [Syncing your Local repository](https://help.github.com/articles/syncing-a-fork) with the **Development** [Expert Manager](https://www.davidghoyle.co.uk/WordPress/?page_id=1361) repository. This can happen at any time.

## Dependencies

The only dependency you may find in the code is **CodeSite** for logging. This is used for debugging the application. **CodeSite Express** can be downloaded from the **Get It** package manager.

## Project Configuration

The [Expert Manager](https://www.davidghoyle.co.uk/WordPress/?page_id=1361) application is setup as a **Win32** only project with **Debug** and **Release** configurations.

## Rationale

The rationale behind the application it to render the list of Experts, Known Packages and Known IDE Packages for all installations of RAD Studio on your machine.

The information for each installation is stored in the registry until the following locations:

 * `HKCU\Software\Embarcadero\BDS\##.#\Experts`
 * `HKCU\Software\Embarcadero\BDS\##.#\Known Packages`
 * `HKCU\Software\Embarcadero\BDS\##.#\Known IDE Packages`

Note that **Embarcadero** can be substituted for **Borland** and **CodeGear** for older installations and **BDS** can be substituted for other registry points that are created by using the `BDS.EXE -r MyNewRegPoint` command line when running RAD Studio.

regards

David Hoyle Jul 2019.