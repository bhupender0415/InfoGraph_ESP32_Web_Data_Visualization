<?php
    // echo "hello world This is bhupender singh";
    $hostname = "localhost:3308";
    $username = "root";
    $password ="";
    $database = "sensor_db";

    $conn = mysqli_connect($hostname, $username, $password, $database);

    if(!$conn){
        die("Connection Failed". mysqli_connect_error());
    }

    echo "Connected Successfuly <br>";
    
    // recieving the data from esp32

    if(isset($_POST["temperature"]) && isset($_POST["humidity"])){
        $t = $_POST["temperature"];
        $h = $_POST["humidity"];
    }

    $sql = "INSERT INTO tempdata(temperature, humidity) VALUES(".$t.", ".$h.")";

    if(mysqli_query($conn, $sql)){
        echo "Query inserted from web page";
    }else{
        echo "Error:". $sql. "<br>" . mysqli_error($conn);
    }
?>