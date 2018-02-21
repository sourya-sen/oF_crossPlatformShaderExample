This is an example to show how to develop cross platform apps that need shaders which'll run both on desktop environments as well as on a Raspberry Pi.

The shader folder needs two additional files depending on which platform you are on, details of those are below. They are not tracked by git/not in this repository so make sure you have them before you try to run this code!

Make two files, one called `headerFrag.glsl` and another called `headerVert.glsl`.

If you're on a desktop, the `headerVert` will look like this:

````
#version 330
#define IN in
#define OUT out
#define TEXTURE texture
#define FRAG_COLOR fragColor
out vec4 fragColor;
````

And the `headerFrag` will look like this:

````
#version 330
#define IN in
#define OUT out
#define TEXTURE texture
#define FRAG_COLOR fragColor
out vec4 fragColor;
````

If you're on the Pi, then the `headerVert` will look like this:
````
precision highp float;
#define IN varying
#define OUT
#define TEXTURE texture2D
````

And `headerFrag` should be"
````
precision highp float;
#define IN varying
#define OUT
#define TEXTURE texture2D
#define FRAG_COLOR gl_FragColor
````

To write cross platform shaders, please follow the definitions in the header files, ie, no attributes or ins but use IN, no varying or out but OUT and so on and so forth.
