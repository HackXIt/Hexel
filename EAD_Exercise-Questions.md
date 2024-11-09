# Questions

## Setup

### What is the difference between git and github?

- Git is a version control system
- GitHub is a web-plattform for hosting git repositories and sharing them (which uses git internally)

### Name 3 benefits of a version control system:

- Source code changes are tracked (i.e. Line X changed from THIS to THAT)
- Branching (Allows for work on different features at the same time)
- Distributed or Centralized (Multiple people can work on the same codebase and commit their changes to it)
- Fixing conflicts of different versions in the source code (i.e. Change from Developer 1 vs. Developer 2)

### Name 3 alternatives to git:

- SVN
- Mercurial
- Perforce
- Some more: https://alternativeto.net/software/git/

### Name 2 differences between git and other version control systems:

- Git is a distributed version control system, meaning every clone has their own local database of the source
- Git's branching and merging mechanisms are quite superior to alternatives like SVN (due to its distributed architecture)

### Name known issues related to game engines (Unreal, Unity) and version control systems:

- Game Engines usually have BIG files (i.e. models, textures, audio, etc.)
- If one were to use git, those big files would need to be checked out and require a large download
- There are mitigations such as LFS, but in general git is known for not being able to handle LARGE repositories very well
- Files that have binary form, are hard to track by git in terms of changes and usually require for the whole file to be uploaded, leaving traces of EVERY HISTORIC file in the database. This results in quite large databases. In Game Engines, there are quite a few files that are affected by this.

## Logging

### Describe a logging system with your own words:

- If you want to properly format and print messages to a client, a logging system helps you facilitate mechanisms such as LogLevels, format of the log message itself, colors of the log messages, variables and arguments provided to the log message.

### What is the difference between git submodules and git subtrees?

- Git submodules checks out a repository inside a subfolder and essentially tracks another database for that subfolder. This submodule is independent from the base repository and needs to be updated separately.
  - Submodules creates a `.gitmodules` file which states the different sub-folders which track an additional repository
  - The actual subfolder are handled differently in the internal `.git` folder
  - Easier to contribute to upstream, since navigating in that directory puts you in a separate repository, where you can utilize the regular `git` commands to interact with that upstream remote.
  - Submodules need to be checked additionally when the base repository is checked out, otherwise their folders are empty: `git submodule init && git submodule update --recursive`
- Git subtrees nests another repository inside a subfolder, but it integrates that other repository into the main repository. The fact that the subfolder tracks another repository is _"hidden"_ from the user and it also does not create additional metadata like submodules (`.gitmodules` file).
  - Subtree requires a special merge strategy `git subtree`
  - Contributing upstream code is more complicated
  - Easier to mix base repository and sub-repository changes by accident (since the main interface is different)
  - No additional check out needed

### What is a build system in C++? Name 3 build systems:

- Meson
- CMake / Make / Ninja (they are similar - revolve around makefiles)
- Premake (Lua based)
- ... https://julienjorge.medium.com/an-overview-of-build-systems-mostly-for-c-projects-ac9931494444

### What is a package manager in C++? Name 3 package manager:

- There is no standard package manager in C++, however, there are some created by companies:
  - Conan (https://conan.io/) => JFrog
  - vcpkg (https://vcpkg.io/) => Microsoft 
  - xrepo (https://xrepo.xmake.io/#/) => OSS
  - ... some more: https://moderncppdevops.com/pkg-mngr-roundup/