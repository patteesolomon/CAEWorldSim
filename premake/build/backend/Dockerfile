FROM gcc:12 AS build

WORKDIR /app
COPY . .

# Install dependencies (Crow is header-only, but you may need Boost)
RUN apt-get update && apt-get install -y cmake make libboost-all-dev

# Build backend
RUN g++ -std=c++17 src/main.cpp -o server -lpthread

FROM debian:stable-slim
WORKDIR /app
COPY --from=build /app/server .
EXPOSE 3000
CMD ["./server"]
