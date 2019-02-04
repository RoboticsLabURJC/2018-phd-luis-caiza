#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/luis/2018-phd-luis-caiza/src/mavros/mavros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/luis/2018-phd-luis-caiza/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/luis/2018-phd-luis-caiza/install/lib/python2.7/dist-packages:/home/luis/2018-phd-luis-caiza/build/mavros/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/luis/2018-phd-luis-caiza/build/mavros" \
    "/usr/bin/python" \
    "/home/luis/2018-phd-luis-caiza/src/mavros/mavros/setup.py" \
    build --build-base "/home/luis/2018-phd-luis-caiza/build/mavros" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/luis/2018-phd-luis-caiza/install" --install-scripts="/home/luis/2018-phd-luis-caiza/install/bin"
