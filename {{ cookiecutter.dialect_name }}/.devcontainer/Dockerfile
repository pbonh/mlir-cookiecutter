# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.191.0/containers/cpp/.devcontainer/base.Dockerfile
# [Choice] Debian / Ubuntu version: debian-11, debian-10, debian-9, ubuntu-20.04, ubuntu-18.04
ARG VARIANT=debian-10
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-${VARIANT}

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
    build-essential \
    clangd-12 \
    lld \
    lldb-12 \
    ninja-build \
    valgrind \
    ccache \
    doxygen \
    cmake

RUN update-alternatives --install /usr/bin/clangd clangd /usr/bin/clangd-12 100
RUN update-alternatives --install /usr/bin/lldb lldb /usr/bin/lldb-12 100
