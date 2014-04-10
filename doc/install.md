# wxWidgets-3.0.0

## OS-X

~~~
> mkdir work
> cd work
> ../configure --disable-shared --enable-monolithic --prefix=$HOME/oriflamme/oriflammesdk/osx
> make
> make install
~~~

# GLEW-1.10.0

## OS-X

~~~
> make
> make GLEW_DEST=$HOME/oriflamme/oriflammesdk/osx install
~~~

# glm-0.9.4.6

- 0.9.5系は#include \<cstdint\>でコケる
