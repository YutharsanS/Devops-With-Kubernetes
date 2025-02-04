FROM gcc:latest AS build-stage
WORKDIR /usr/app
COPY . .
RUN make

FROM scratch
WORKDIR /
COPY --from=build-stage /usr/app/output /
CMD ["/output"]
