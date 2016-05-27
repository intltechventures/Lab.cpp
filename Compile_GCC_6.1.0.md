My Notes for Compiling GCC 6.1.0
Document Status: working-draft, a work-in-progress)

References:
* https://gcc.gnu.org/install/finalinstall.html
* https://gcc.gnu.org/install/index.html
* https://gcc.gnu.org/install/prerequisites.html
  * ftp://gcc.gnu.org/pub/gcc/infrastructure/


Download the latest GCC source code
* ```wget http://ftpmirror.gnu.org/gcc/gcc-6.1.0/gcc-6.1.0.tar.gz```
* ```tar sf gcc-6.1.0.tar.gz```


Create a build directory
* ```mkdir build-gcc```
* ```cd build-gcc```
* configure command alternatives:
  * ```../gcc-6.1.0/configure --program-suffix=6.1.0 --enable-language=c,c++ --disable-bootstrap --disable-shared --prefix=~/usr/local/gcc-6.1.0```
  * ```../gcc-6.1.0/configure --prefix=/usr --disable-multilib --with-system-zlib --enable-languages=c,c++,fortran,go,objc,obj-c++ && make


NOTES:
* Building GCC requires GMP 4.2+, MPFR 2.4.0+ and MPC 0.8.0+

TODO: 
- add instructions for installing GMP, MPFR and MPC


Perform Build
* make -j4
* make install

