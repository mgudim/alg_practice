docker run \
    -it \
    -v $(pwd):/home/project \
    -w /home/project \
    --security-opt seccomp=unconfined \
    mgudim/libds:latest
