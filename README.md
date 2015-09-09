WHAT IS THIS?
=============

Linux Kernel source code for the device bq Aquaris 4.5

BUILD INSTRUCTIONS?
===================

Specific sources are separated by branches and each version is tagged with it's corresponding number. First, you should
clone the project:

	$ git clone https://github.com/bq/aquaris-4.5.git

After it, choose the version you would like to build:

	$ cd aquaris-4.5/
	$ git checkout 2.2.1-20140415-1600


Finally, build the kernel:

	$ ./makeMtk -t ztenj77_sz_cu_jb n k
