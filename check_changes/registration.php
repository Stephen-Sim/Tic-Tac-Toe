<?php

	$serverName = "localhost";
	$dbUsername = "d032010243";
	$dbPassword = "021121100386";
	$dbName = "student_d032010243";

	
	$fullname = $_POST['fullname'];
	$age = $_POST['age'];
	$username = $_POST['username'];
	$pass1 = $_POST['pass1'];
	$pass2 = $_POST['pass2'];

	// DATABASE CONNECTION
	$conn = mysqli_connect($serverName, $dbUsername, $dbPassword, $dbName);
		
	if (!$conn) {
  		die("Connection failed: " . mysqli_connect_error());
	}	

if($fullname = "" || $age = "" || $username = "" || $pass1 = "" || $pass2 = ""){

	if(empty($_POST['fullname']) || empty($_POST['age']) || empty($_POST['username']) || empty($_POST['pass1']) || empty($_POST['pass2'])){
			echo "You have not filled up the form completely or correctly. Please try again<br>";
	}

	else
	{
			
		if($_POST['age'] >= '30'){
			$type = "SENIOR MEMBERSHIP";
		}
		elseif($_POST['age'] >= '18' && $_POST['age'] <= '29'){
			$type = "REGULAR MEMBERSHIP";
		}
		elseif($_POST['age'] <= '17'){
			$type = "JUNIOR MEMBERSHIP";
		}

		if($_POST['pass1'] !== $_POST['pass2']){
			echo "Passwords do not match";
		}
		else{
			$capital_fullname = strtoupper($_POST['fullname']);

			$sql = "INSERT INTO club (fullname, age, username, pass1, type) VALUES ('$fullname', '$age', '$username', '$pass1', '$type')";

			echo "Data Inserted!";
			echo "<br>";
			echo "<br>";
		}
	
	}

}


?>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<h1>Registered Members</h1>
</head>

<body>

	<table border='1'>
		<tr>
			<th>No.</th>
			<th>Name</th>
			<th>Age</th>
			<th>Type of Membership</th>
		</tr>

		<?php

			$count = 1;
			$sql = "SELECT name, age, type FROM club ORDER BY age ASC;";
			$result = mysqli_query($conn, $sql);
			$resultCheck = mysqli_num_rows(mysqli_query($conn, $sql));

			if(mysqli_num_rows($result) > 0){

				while($row = mysqli_fetch_assoc($result)){

					echo "<tr>";
						echo "<td>". $count ."</td>";
						echo "<td>". $row['fullname']."</td>";
						echo "<td>". $row['age']."</td>";
						echo "<td>". $row['type']."</td>";
					echo "</tr>";

				$count++;

				}
			}else{
				echo "0 result";
			}
	
		?>
	</table>

</body>
</html>