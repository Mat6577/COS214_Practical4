FROM gcc:13 AS build
WORKDIR /app
COPY . .

RUN make

FROM debian:trixie-slim
RUN apt-get update && apt-get install -y libstdc++6

COPY --from=build /app/taskforge /usr/local/bin/taskforge

CMD ["taskforge"]