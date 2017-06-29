Minilibx
========

[![Build Status](https://travis-ci.org/dannywillems/minilibx.svg?branch=master)](https://travis-ci.org/dannywillems/minilibx)

This is a mirror of the minilibx library.

## What is minilibx?

Minilibx is a very basic graphical library writting in C used in
[42](https://42.fr) (also exported in US in the Silicon Valley, see [42
US](https://42.us.org)) and in [Epitech](http://www.epitech.eu/) for infography
project such like *fdf* and *Raytracer*.

You can find a mirror to the native version for Mac OSX
[here](https://github.com/dannywillems/minilix-mac-osx).

## Compile

1. Add a variable named PKG_CONFIG_PATH containing the path to the minilibx
directory.
2. Compile and install with
```
make && sudo make install
```

## Tutorials

Here some tutorials and articles (in French):
* [Installation and basic usage](https://achedeuzot.me/2014/12/20/installer-la-minilibx/)
* [Manual](http://thomas.tissotdupont.free.fr/MinilibX%20Manual/)

## Related projects

* [Binding OCaml](https://github.com/dannywillems/ocaml-minilibx)

## Licence

Licence BSD: Copyright Olivier Crouzet - 2014

Minilibx
======================================

Ce dépot est un mirroir pour la librairie graphique *minilibx*.

## Qu'est-ce que minilibx ?

Minilibx est une librairie graphique très basique écrite en C utilisée à
[42](https://42.fr) (aussi exporté aux USA dans la Silicon Valley, voir [42
US](https://42.us.org)) et à [Epitech](http://www.epitech.eu)

Vous pouvez trouver un mirroir pour la version native pour Mac OSX
[ici](https://github.com/dannywillems/minilibx-mac-osx).

## Compiler

1. Ajouter une variable PKG_CONFIG_PATH contenant le chemin vers le dossier de
   la minilibx.
2. Compilation and installation avec
```
make && sudo make install
```

## Tutoriels

Ici des articles et des tutoriels (en français):

* [Installation et utilisation basique](https://achedeuzot.me/2014/12/20/installer-la-minilibx/)
* [Manuel](http://thomas.tissotdupont.free.fr/MinilibX%20Manual/)

## Projets connexes

* [Binding OCaml](https://github.com/dannywillems/ocaml-minilibx)

## License

License BSD: Copyright Olivier Crouzet - 2014


## Original README


This is the MinilibX, a simple X-Window (X11R6) programming API
in C, designed for students, suitable for X-beginners.


Contents

 - source code in C to create the mlx library
 - man pages (in man/ directory)
 - a test program (in test/ directory) is built
   with the library
 - a public include file mlx.h
 - a tiny configure script to generate an appropriate Makefile.gen


Requirements

 - MinilibX only support TrueColor visual type (8,15,16,24 or 32 bits depth)
 - gcc
 - X11 include files
 - XShm extension must be present


Compile MinilibX

 - run ./configure or make
   both will make a few tests, create Makefile.gen
   and then automatically run make on this generated Makefile.gen .
   libmlx.a and libmlx_$(HOSTTYPE).a are created.
   test/mlx-test binary is also created.


Install MinilibX

 - no installation script is provided. You may want to install
     - libmlx.a and/or libmlx_$(HOSTTYPE).a in /usr/X11/lib or /usr/local/lib
     - mlx.h in /usr/X11/include or /usr/local/include
     - man/man3/mlx*.1 in /usr/X11/man/man3 or /usr/local/man/man3
 - or make DESTDIR=/usr/local install


 Olivier CROUZET - 2014-01-06 -
