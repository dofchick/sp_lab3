FROM ubuntu
LABEL maintainer="Erokhin Vladimir vova.eroxin@gmail.com"
RUN apt-get update && apt-get install -y gcc
WORKDIR /lab3
COPY /prog .
