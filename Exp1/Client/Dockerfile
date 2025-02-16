# Use Node.js base image for build
FROM node:16 as build

# Set working directory
WORKDIR /usr/src/app

# Copy package.json and package-lock.json
COPY package*.json ./

# Install dependencies
RUN npm install

# Copy the source code
COPY . .

# Build the frontend
RUN npm run build

# Use Nginx to serve the build files
FROM nginx:alpine
COPY --from=build /usr/src/app/build /usr/share/nginx/html

# Expose frontend port
EXPOSE 80

# Start Nginx
CMD ["nginx", "-g", "daemon off;"]
