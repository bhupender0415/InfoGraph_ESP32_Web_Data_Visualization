## InfoGraph: ESP32 Web Data Visualization Overview

This project utilizes an ESP32 microcontroller to monitor temperature and humidity data and send it to a MySQL server via PHP scripts. The data is then displayed on a dynamic webpage.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Setup and Usage](#setup-and-usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Features

- Real-time temperature and humidity monitoring.
- Secure data transmission to a MySQL database.
- Dynamic web interface to display the collected data.

## Requirements

Before you begin, ensure you have the following in place:

- [ESP32](https://www.espressif.com/en/products/socs/esp32) microcontroller
- Web server with PHP and MySQL support
- Arduino IDE or PlatformIO
- Basic knowledge of PHP, MySQL, and web development

## Setup and Usage

1. **Hardware Setup:**

   - Connect your ESP32 to the temperature and humidity sensor as per your sensor's datasheet.
2. **Software Setup:**

   - Install Arduino IDE or PlatformIO.
   - Clone this repository to your local machine.
3. **Database Configuration:**

   - Create a MySQL database and define a table to store the data.
   - Update the PHP script with your database connection details.
4. **ESP32 Configuration:**

   - Modify the ESP32 code to connect to your Wi-Fi network and send data to the PHP script.
5. **Web Interface:**

   - Create a webpage for displaying the data. Use PHP to fetch and display data from the database.
6. **Run the Project:**

   - Upload the ESP32 code.
   - Launch your PHP script and web interface.
7. **View Data:**

   - Open the webpage to view the real-time temperature and humidity data.

## Project Structure

- `firmware files/` - Contains the ESP32 code for data collection and transmission.
- `mySQL database/` - Contains PHP scripts for handling data on the server.
- `hardware files/` - Contains schematics.

## Learning from Project

### PHP

- Gain experience in using PHP for server-side scripting to handle data from IoT devices.
- Learn how to establish a connection between a PHP script and a MySQL database.
- Understand how to receive and process data sent from ESP32 or other IoT devices.

### SQL

- Learn the fundamentals of database management with MySQL.
- Understand how to create and manage database tables for storing IoT sensor data.
- Gain experience in executing SQL queries to retrieve and manipulate data stored in the database.

### IoT (Internet of Things)

- Gain practical knowledge of working with IoT hardware, in this case, the ESP32 microcontroller.
- Learn how to collect data from sensors, such as temperature and humidity sensors, using IoT devices.
- Understand the process of transmitting data from IoT devices to a remote server for storage and display.

## Contributing

Contributions are welcome! Feel free to open issues and pull requests.

## License

This project is licensed under the [MIT License](LICENSE).

---

Feel free to customize this template to better suit your project's specific needs. Be sure to provide clear instructions, code snippets, and details about how to set up and use your project. Additionally, include a license that aligns with your project's open-source goals.
